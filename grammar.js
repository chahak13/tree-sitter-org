module.exports = grammar({
  name: 'org',

  rules: {
    document: $ => repeat1(
      choice(
        prec(1,
             choice(
               $.heading,
               $._linebreak,
             )
            ),
        // $.paragraph,
        // $.fixed_width_area,
        $.affiliated_properties,
        $.horizontal_rule,
        $.drawer,
        $.property_drawer,
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

    stars: $ => repeat1("*"),
    headline_keyword: $ => repeat1(/[A-Z]/),
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

    // Drawers

    drawer: $ =>
    prec(1,
         seq(
           $._drawer_begin,
           optional($._drawer_lines),
           $._drawer_end,
         ),
        ),
    _drawer_begin: $ => seq(":", $._char_num_underscore_hyphen, ":"),
    _drawer_lines: $ => repeat1($._line),
    _drawer_end: $ => seq(/:[eE][nN][dD]:/),

    property_drawer: $ =>
    prec(2,
         seq(
           $._property_drawer_begin,
           repeat($._node_property),
           $._drawer_end,
         ),
        ),

    _property_drawer_begin: $ => seq(":PROPERTIES:"),
    _node_property: $ =>
    prec(3,
         seq(
           $._property_name,
           $._property_value,
           $._linebreak,
         ),
        ),
    _property_name: $ => prec(1, seq(/:[^\s:+]+(|\+):/)),
    _property_value: $ => seq(/[^\n]+/),
    // // Paragraph of text
    // paragraph: $ =>
    // prec.right(0,
    //            repeat1(
    //              choice(
    //                $._paragraph_segment,
    //                $._linebreak,
    //              ),
    //            )),

    // _paragraph_element: $ =>
    // choice(
    //   $._word,
    //   $._space,
    // ),

    // _paragraph_segment: $ =>
    // prec.right(0,
    //            repeat1(
    //              choice(
    //                $._paragraph_element,
    //              ),
    //            )
    //           ),

    horizontal_rule: $ => seq(/-----+/),
    _word: $ => /\w+/,
    _space: $ => /\s+/,
    _line: $ => prec(-1, seq($._characters, optional($._linebreak))),
    _characters: $ => repeat1(/./),
    _linebreak: $ => choice("\n", "\r"),
    _indent: $ => repeat1(/\t /),
    _char_num_underscore_hyphen: $ => repeat1(/[a-zA-Z0-0-_]/),
  }
});
