module.exports = grammar({
  name: 'org',

  rules: {
    document: $ =>
    prec(-1,
         repeat1(
           choice(
             // prec(1,
             //      choice(
             //        $.heading,
             //        $._linebreak,
             //      )
             //     ),
             // $.fixed_width_area,
             $.affiliated_properties,
             $.horizontal_rule,
             $._org_block,
             // $.property_drawer,
             // $.drawer,
             // $._drawer_end,
             $.footnote_link,
             $.text,
           ),
         ),
        ),

    // Heading lines
    heading: $ =>
    prec.left(2,
              seq(
                $.stars,
                optional($.headline_keyword),
                optional($.priority),
                optional($.headline_comment),
                $.title,
                optional($.tags),
                repeat1($._linebreak),
              ),
    ),

    stars: $ => seq(/\*+[\t ]+/),
    headline_keyword: $ => seq(/[A-Z]+[\t ]/),
    priority: $ => /\[#[a-zA-Z0-9]\]/,
    headline_comment: $ => "COMMENT",
    title: $ => repeat1(/./),
    tags: $ => repeat1($._tag),

    // _tag: $ => seq(":", $._word, ":"),
    _tag: $ => /:\w+:/,

    // Affiliated keyword properties
    affiliated_properties: $ =>
    seq(
      "#+",
      choice(
        $._affiliated_keys,
        $._affiliated_attr_keys,
      ),
      ":",
      $._affiliated_value
    ),

    _affiliated_keys: $ =>
    choice(
      "HEADER",
      "header",
      "NAME",
      "name",
      "PLOT",
      "plot",
      "AUTHOR",
      "author",
      "DATE",
      "date",
      "TITLE",
      "title",
      seq(
        choice(
          "CAPTION",
          "caption",
        ),
        optional(/\[[^\]\n]+\]/),
      ),
      seq(
        choice(
          "RESULTS",
          "results",
        ),
        optional(/\[[^\]\n]+\]/),
      ),
    ),

    _affiliated_attr_keys: $ =>
    seq(
      choice("ATTR_", "attr_"),
      $._attr_backend,
    ),
    _attr_backend: $ => $._char_num_underscore_hyphen,

    _affiliated_value: $ => seq(/.+/),

    // Fixed width area
    fixed_width_area: $ =>
    prec(0,
         prec.left(0, repeat1($._fixed_width_line),),
        ),

    _fixed_width_line: $ =>
    prec.left(0,
              seq(
                /:[ |\n]/,
                $._characters,
                // optional($._linebreak),
              ),
             ),

    _org_block: $ =>
    prec.left(
      seq(
      $.heading,
        optional($.property_drawer),
        optional($.text),
        optional($.drawer),
        optional($._org_block),
    )
    ),
    // Drawers
    drawer: $ =>
    prec.left(1,
         seq(
           $._drawer_begin,
           optional($._drawer_lines),
           $._drawer_end,
         ),
        ),
    _drawer_begin: $ => prec(1, seq(":", $._char_num_underscore_hyphen, ":")),
    _drawer_lines: $ => repeat1($._line),
    _drawer_end: $ => prec(1, seq(/:[eE][nN][dD]:\n/)),

    property_drawer: $ =>
    prec(2,
         seq(
           $._property_drawer_begin,
           optional(repeat1($.node_property)),
           $._drawer_end,
         ),
        ),

    _property_drawer_begin: $ => seq(":PROPERTIES:"),
    node_property: $ =>
    prec(3,
         seq(
           $._property_key,
           $._property_value,
           $._linebreak,
         ),
        ),
    _property_key: $ => prec(1, seq(/[^\s:+]+(|\+):/)),
    _property_value: $ => seq(/[^\n]+/),

    // Footnotes
    footnote_link: $ =>
      seq(
        "[fn\:",
        optional($.fn_label),
        optional("\:"),
        optional($.fn_inline_def),
        "]",
      ),
    fn_label: $ => $._char_num_underscore_hyphen,
    fn_inline_def: $ => seq(/[^\[\]]*/),

    // Text
    text: $ =>
    prec(-1,
    repeat1(
      choice(
        // $.timestamp,
        // $.link_format,
        // $.footnote_link,
        $.text_link,
        // $.text_target,
        // $.text_radio_target,
        // $.text_entity,
        // $.text_macro,
        $._text_styled,
        // $.text_subscript,
        // $.text_superscript,
        // $.text_linebreak,
        $.text_normal,
      ),
    ),
        ),

    _text_styled: $ =>
    seq(
      $._text_markup_pre,
      choice(
        $.text_sty_bold,
        $.text_sty_italic,
        $.text_sty_underlined,
        $.text_sty_strikethrough,
        $.text_sty_verbatim,
        $.text_sty_code,
      ),
      $._text_markup_post,
    ),

    text_sty_bold: $ =>
    seq(
      "*",
      $._text_inside_sty_normal,
      "*",
    ),

    text_sty_italic: $ =>
    seq(
      "/",
      $._text_inside_sty_normal,
      "/",
    ),

    text_sty_underlined: $ =>
    seq(
      "_",
      $._text_inside_sty_normal,
      "_",
    ),

    text_sty_strikethrough: $ =>
    seq(
      "+",
      $._text_inside_sty_normal,
      "+",
    ),

    text_sty_verbatim: $ =>
    seq(/=[^\s=].*[^\s=]=/),

    text_sty_code: $ =>
    seq(/~[^\s~].*[^\s~]~/),

    _text_markup_pre: $ => choice(/[ \t]/, "-", "(", "\"", "'", "{", ""),

    _text_markup_post: $ => choice(/\s/, "-", ".", ",", ";", "!", "?", "'", ")", "}", "[", "\""),

    _text_inside_sty_normal: $ => $.text_normal,

    // Links
    text_link: $ =>
    choice(
      $.text_link_angle,
      $.text_link_regular,
      $.text_link_plain,
      // $.text_link_radio,
    ),

    text_link_angle: $ =>
    seq(
      "<",
      $.link_protocol,
      ":",
      $.angle_link_path,
      ">"
    ),

    link_protocol: $ =>
    choice(
      "bibtex",
      "pdf",
      "orgit-rev",
      "orgit-log",
      "orgit",
      "roam",
      "yt",
      "id",
      "img",
      "doom-module",
      "doom-package",
      "kbd",
      "doom-modules",
      "doom-docs",
      "doom",
      "org",
      "attachment",
      "file+sys",
      "file+emacs",
      "shell",
      "news",
      "mailto",
      "https",
      "http",
      "ftp",
      "help",
      "file",
      "elisp",
    ),

    angle_link_path: $ => seq(/[^\]<>\n]+/),

    text_link_plain: $ =>
    prec(1,
         seq(
           $._plain_link_pre,
           $.link_protocol,
           ":",
           $.plain_link_path,
           $._plain_link_post,
         ),
        ),

    _plain_link_pre: $ => seq(/\W/),
    _plain_link_post: $ => seq(/\W/),
    plain_link_path: $ => seq(/[^\s\(\)<>]+(\w|\/)/),

    text_link_regular: $ =>
    seq(
      "[[",
      $.regular_link_path,
      "]",
      optional($.regular_link_description),
      "]",
    ),

    // Doesn't cover custom id, coderefs, and fuzzy links
    regular_link_path: $ =>
    choice(
      seq(
        "file:",
        $.filename,
      ),
      seq(
        $.link_protocol,
        $.regular_link_protocol_path,
      ),
      $.id_link,
      // $.custom_id_link,
      // $.coderef_link,
      // $.fuzzy_link,
    ),

    filename: $ => seq(/(\.{0,2}|~)\//, repeat1(/\/\w/), /(\.\w|\/)/),
    regular_link_protocol_path: $ => repeat1(/[^\[\]]/),
    id_link: $ => seq("id:", repeat1(/[0-9a-f](-|)/)),
    regular_link_description: $ => seq("[", $.text_normal, "]"),

    // text_normal: $ => seq(/.[^*/_=+\[<{^\\\n\r]*/),
    // text_normal: $ => prec.left(-1, $._characters),
    text_normal: $ => prec(-2, seq(/[\s\ta-zA-Z0-9!@#\$%^&\(\)`\'\";\.?]+/)),

    horizontal_rule: $ => seq(/-----+/),
    _word: $ => /\w+/,
    _whitespace: $ => seq(/[\t ]+/),
    _line: $ => prec(-1, seq($._characters, optional($._linebreak))),
    _characters: $ => repeat1(/./),
    _linebreak: $ => choice("\n", "\r"),
    _indent: $ => repeat1(/\t /),
    _char_num_underscore_hyphen: $ => repeat1(/[a-zA-Z0-0-9_]/),
    _non_alpha_numeric: $ => repeat1(/[^a-zA-Z0-9]/),
  }
});
