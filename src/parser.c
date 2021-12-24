#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 134
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 167
#define ALIAS_COUNT 0
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_stars_token1 = 1,
  aux_sym_headline_keyword_token1 = 2,
  sym_priority = 3,
  sym_headline_comment = 4,
  aux_sym_title_token1 = 5,
  sym__tag = 6,
  anon_sym_POUND_PLUS = 7,
  anon_sym_COLON = 8,
  anon_sym_HEADER = 9,
  anon_sym_header = 10,
  anon_sym_NAME = 11,
  anon_sym_name = 12,
  anon_sym_PLOT = 13,
  anon_sym_plot = 14,
  anon_sym_AUTHOR = 15,
  anon_sym_author = 16,
  anon_sym_DATE = 17,
  anon_sym_date = 18,
  anon_sym_TITLE = 19,
  anon_sym_title = 20,
  anon_sym_CAPTION = 21,
  anon_sym_caption = 22,
  aux_sym__affiliated_keys_token1 = 23,
  anon_sym_RESULTS = 24,
  anon_sym_results = 25,
  anon_sym_ATTR_ = 26,
  anon_sym_attr_ = 27,
  aux_sym__affiliated_value_token1 = 28,
  aux_sym__drawer_end_token1 = 29,
  anon_sym_COLONPROPERTIES_COLON = 30,
  aux_sym__property_name_token1 = 31,
  aux_sym__property_value_token1 = 32,
  anon_sym_LBRACKfn_COLON = 33,
  anon_sym_RBRACK = 34,
  aux_sym_fn_inline_def_token1 = 35,
  anon_sym_STAR = 36,
  anon_sym_SLASH = 37,
  anon_sym__ = 38,
  anon_sym_PLUS = 39,
  aux_sym_text_sty_verbatim_token1 = 40,
  aux_sym_text_sty_code_token1 = 41,
  aux_sym__text_markup_pre_token1 = 42,
  anon_sym_DASH = 43,
  anon_sym_LPAREN = 44,
  anon_sym_DQUOTE = 45,
  anon_sym_SQUOTE = 46,
  anon_sym_LBRACE = 47,
  anon_sym_ = 48,
  aux_sym__text_markup_post_token1 = 49,
  anon_sym_DOT = 50,
  anon_sym_COMMA = 51,
  anon_sym_SEMI = 52,
  anon_sym_BANG = 53,
  anon_sym_QMARK = 54,
  anon_sym_RPAREN = 55,
  anon_sym_RBRACE = 56,
  anon_sym_LBRACK = 57,
  anon_sym_LT = 58,
  anon_sym_GT = 59,
  anon_sym_bibtex = 60,
  anon_sym_pdf = 61,
  anon_sym_orgit_DASHrev = 62,
  anon_sym_orgit_DASHlog = 63,
  anon_sym_orgit = 64,
  anon_sym_roam = 65,
  anon_sym_yt = 66,
  anon_sym_id = 67,
  anon_sym_img = 68,
  anon_sym_doom_DASHmodule = 69,
  anon_sym_doom_DASHpackage = 70,
  anon_sym_kbd = 71,
  anon_sym_doom_DASHmodules = 72,
  anon_sym_doom_DASHdocs = 73,
  anon_sym_doom = 74,
  anon_sym_org = 75,
  anon_sym_attachment = 76,
  anon_sym_file_PLUSsys = 77,
  anon_sym_file_PLUSemacs = 78,
  anon_sym_shell = 79,
  anon_sym_news = 80,
  anon_sym_mailto = 81,
  anon_sym_https = 82,
  anon_sym_http = 83,
  anon_sym_ftp = 84,
  anon_sym_help = 85,
  anon_sym_file = 86,
  anon_sym_elisp = 87,
  aux_sym_angle_link_path_token1 = 88,
  aux_sym__plain_link_pre_token1 = 89,
  aux_sym_plain_link_path_token1 = 90,
  anon_sym_LBRACK_LBRACK = 91,
  anon_sym_file_COLON = 92,
  aux_sym_filename_token1 = 93,
  aux_sym_filename_token2 = 94,
  aux_sym_filename_token3 = 95,
  aux_sym_regular_link_protocol_path_token1 = 96,
  anon_sym_id_COLON = 97,
  aux_sym_id_link_token1 = 98,
  aux_sym_text_normal_token1 = 99,
  aux_sym_horizontal_rule_token1 = 100,
  anon_sym_LF = 101,
  anon_sym_CR = 102,
  aux_sym__char_num_underscore_hyphen_token1 = 103,
  sym_document = 104,
  sym_heading = 105,
  sym_stars = 106,
  sym_headline_keyword = 107,
  sym_title = 108,
  sym_tags = 109,
  sym_affiliated_properties = 110,
  sym__affiliated_keys = 111,
  sym__affiliated_attr_keys = 112,
  sym__attr_backend = 113,
  sym__affiliated_value = 114,
  sym_drawer = 115,
  sym__drawer_begin = 116,
  aux_sym__drawer_lines = 117,
  sym__drawer_end = 118,
  sym_property_drawer = 119,
  sym__property_drawer_begin = 120,
  sym__node_property = 121,
  sym__property_name = 122,
  sym__property_value = 123,
  sym_footnote_link = 124,
  sym_fn_label = 125,
  sym_fn_inline_def = 126,
  sym_text = 127,
  sym__text_styled = 128,
  sym_text_sty_bold = 129,
  sym_text_sty_italic = 130,
  sym_text_sty_underlined = 131,
  sym_text_sty_strikethrough = 132,
  sym_text_sty_verbatim = 133,
  sym_text_sty_code = 134,
  sym__text_markup_pre = 135,
  sym__text_markup_post = 136,
  sym__text_inside_sty_normal = 137,
  sym_text_link = 138,
  sym_text_link_angle = 139,
  sym_link_protocol = 140,
  sym_angle_link_path = 141,
  sym_text_link_plain = 142,
  sym__plain_link_pre = 143,
  sym__plain_link_post = 144,
  sym_plain_link_path = 145,
  sym_text_link_regular = 146,
  sym_regular_link_path = 147,
  sym_filename = 148,
  sym_regular_link_protocol_path = 149,
  sym_id_link = 150,
  sym_regular_link_description = 151,
  sym_text_normal = 152,
  sym_horizontal_rule = 153,
  sym__line = 154,
  aux_sym__characters = 155,
  sym__linebreak = 156,
  aux_sym__char_num_underscore_hyphen = 157,
  aux_sym_document_repeat1 = 158,
  aux_sym_heading_repeat1 = 159,
  aux_sym_title_repeat1 = 160,
  aux_sym_tags_repeat1 = 161,
  aux_sym_property_drawer_repeat1 = 162,
  aux_sym_text_repeat1 = 163,
  aux_sym_filename_repeat1 = 164,
  aux_sym_regular_link_protocol_path_repeat1 = 165,
  aux_sym_id_link_repeat1 = 166,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_stars_token1] = "stars_token1",
  [aux_sym_headline_keyword_token1] = "headline_keyword_token1",
  [sym_priority] = "priority",
  [sym_headline_comment] = "headline_comment",
  [aux_sym_title_token1] = "title_token1",
  [sym__tag] = "_tag",
  [anon_sym_POUND_PLUS] = "#+",
  [anon_sym_COLON] = ":",
  [anon_sym_HEADER] = "HEADER",
  [anon_sym_header] = "header",
  [anon_sym_NAME] = "NAME",
  [anon_sym_name] = "name",
  [anon_sym_PLOT] = "PLOT",
  [anon_sym_plot] = "plot",
  [anon_sym_AUTHOR] = "AUTHOR",
  [anon_sym_author] = "author",
  [anon_sym_DATE] = "DATE",
  [anon_sym_date] = "date",
  [anon_sym_TITLE] = "TITLE",
  [anon_sym_title] = "title",
  [anon_sym_CAPTION] = "CAPTION",
  [anon_sym_caption] = "caption",
  [aux_sym__affiliated_keys_token1] = "_affiliated_keys_token1",
  [anon_sym_RESULTS] = "RESULTS",
  [anon_sym_results] = "results",
  [anon_sym_ATTR_] = "ATTR_",
  [anon_sym_attr_] = "attr_",
  [aux_sym__affiliated_value_token1] = "_affiliated_value_token1",
  [aux_sym__drawer_end_token1] = "_drawer_end_token1",
  [anon_sym_COLONPROPERTIES_COLON] = ":PROPERTIES:",
  [aux_sym__property_name_token1] = "_property_name_token1",
  [aux_sym__property_value_token1] = "_property_value_token1",
  [anon_sym_LBRACKfn_COLON] = "[fn:",
  [anon_sym_RBRACK] = "]",
  [aux_sym_fn_inline_def_token1] = "fn_inline_def_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym__] = "_",
  [anon_sym_PLUS] = "+",
  [aux_sym_text_sty_verbatim_token1] = "text_sty_verbatim_token1",
  [aux_sym_text_sty_code_token1] = "text_sty_code_token1",
  [aux_sym__text_markup_pre_token1] = "_text_markup_pre_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LBRACE] = "{",
  [anon_sym_] = "",
  [aux_sym__text_markup_post_token1] = "_text_markup_post_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_QMARK] = "\?",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_bibtex] = "bibtex",
  [anon_sym_pdf] = "pdf",
  [anon_sym_orgit_DASHrev] = "orgit-rev",
  [anon_sym_orgit_DASHlog] = "orgit-log",
  [anon_sym_orgit] = "orgit",
  [anon_sym_roam] = "roam",
  [anon_sym_yt] = "yt",
  [anon_sym_id] = "id",
  [anon_sym_img] = "img",
  [anon_sym_doom_DASHmodule] = "doom-module",
  [anon_sym_doom_DASHpackage] = "doom-package",
  [anon_sym_kbd] = "kbd",
  [anon_sym_doom_DASHmodules] = "doom-modules",
  [anon_sym_doom_DASHdocs] = "doom-docs",
  [anon_sym_doom] = "doom",
  [anon_sym_org] = "org",
  [anon_sym_attachment] = "attachment",
  [anon_sym_file_PLUSsys] = "file+sys",
  [anon_sym_file_PLUSemacs] = "file+emacs",
  [anon_sym_shell] = "shell",
  [anon_sym_news] = "news",
  [anon_sym_mailto] = "mailto",
  [anon_sym_https] = "https",
  [anon_sym_http] = "http",
  [anon_sym_ftp] = "ftp",
  [anon_sym_help] = "help",
  [anon_sym_file] = "file",
  [anon_sym_elisp] = "elisp",
  [aux_sym_angle_link_path_token1] = "angle_link_path_token1",
  [aux_sym__plain_link_pre_token1] = "_plain_link_pre_token1",
  [aux_sym_plain_link_path_token1] = "plain_link_path_token1",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_file_COLON] = "file:",
  [aux_sym_filename_token1] = "filename_token1",
  [aux_sym_filename_token2] = "filename_token2",
  [aux_sym_filename_token3] = "filename_token3",
  [aux_sym_regular_link_protocol_path_token1] = "regular_link_protocol_path_token1",
  [anon_sym_id_COLON] = "id:",
  [aux_sym_id_link_token1] = "id_link_token1",
  [aux_sym_text_normal_token1] = "text_normal_token1",
  [aux_sym_horizontal_rule_token1] = "horizontal_rule_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [aux_sym__char_num_underscore_hyphen_token1] = "_char_num_underscore_hyphen_token1",
  [sym_document] = "document",
  [sym_heading] = "heading",
  [sym_stars] = "stars",
  [sym_headline_keyword] = "headline_keyword",
  [sym_title] = "title",
  [sym_tags] = "tags",
  [sym_affiliated_properties] = "affiliated_properties",
  [sym__affiliated_keys] = "_affiliated_keys",
  [sym__affiliated_attr_keys] = "_affiliated_attr_keys",
  [sym__attr_backend] = "_attr_backend",
  [sym__affiliated_value] = "_affiliated_value",
  [sym_drawer] = "drawer",
  [sym__drawer_begin] = "_drawer_begin",
  [aux_sym__drawer_lines] = "_drawer_lines",
  [sym__drawer_end] = "_drawer_end",
  [sym_property_drawer] = "property_drawer",
  [sym__property_drawer_begin] = "_property_drawer_begin",
  [sym__node_property] = "_node_property",
  [sym__property_name] = "_property_name",
  [sym__property_value] = "_property_value",
  [sym_footnote_link] = "footnote_link",
  [sym_fn_label] = "fn_label",
  [sym_fn_inline_def] = "fn_inline_def",
  [sym_text] = "text",
  [sym__text_styled] = "_text_styled",
  [sym_text_sty_bold] = "text_sty_bold",
  [sym_text_sty_italic] = "text_sty_italic",
  [sym_text_sty_underlined] = "text_sty_underlined",
  [sym_text_sty_strikethrough] = "text_sty_strikethrough",
  [sym_text_sty_verbatim] = "text_sty_verbatim",
  [sym_text_sty_code] = "text_sty_code",
  [sym__text_markup_pre] = "_text_markup_pre",
  [sym__text_markup_post] = "_text_markup_post",
  [sym__text_inside_sty_normal] = "_text_inside_sty_normal",
  [sym_text_link] = "text_link",
  [sym_text_link_angle] = "text_link_angle",
  [sym_link_protocol] = "link_protocol",
  [sym_angle_link_path] = "angle_link_path",
  [sym_text_link_plain] = "text_link_plain",
  [sym__plain_link_pre] = "_plain_link_pre",
  [sym__plain_link_post] = "_plain_link_post",
  [sym_plain_link_path] = "plain_link_path",
  [sym_text_link_regular] = "text_link_regular",
  [sym_regular_link_path] = "regular_link_path",
  [sym_filename] = "filename",
  [sym_regular_link_protocol_path] = "regular_link_protocol_path",
  [sym_id_link] = "id_link",
  [sym_regular_link_description] = "regular_link_description",
  [sym_text_normal] = "text_normal",
  [sym_horizontal_rule] = "horizontal_rule",
  [sym__line] = "_line",
  [aux_sym__characters] = "_characters",
  [sym__linebreak] = "_linebreak",
  [aux_sym__char_num_underscore_hyphen] = "_char_num_underscore_hyphen",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_heading_repeat1] = "heading_repeat1",
  [aux_sym_title_repeat1] = "title_repeat1",
  [aux_sym_tags_repeat1] = "tags_repeat1",
  [aux_sym_property_drawer_repeat1] = "property_drawer_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_filename_repeat1] = "filename_repeat1",
  [aux_sym_regular_link_protocol_path_repeat1] = "regular_link_protocol_path_repeat1",
  [aux_sym_id_link_repeat1] = "id_link_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_stars_token1] = aux_sym_stars_token1,
  [aux_sym_headline_keyword_token1] = aux_sym_headline_keyword_token1,
  [sym_priority] = sym_priority,
  [sym_headline_comment] = sym_headline_comment,
  [aux_sym_title_token1] = aux_sym_title_token1,
  [sym__tag] = sym__tag,
  [anon_sym_POUND_PLUS] = anon_sym_POUND_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_HEADER] = anon_sym_HEADER,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_NAME] = anon_sym_NAME,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_PLOT] = anon_sym_PLOT,
  [anon_sym_plot] = anon_sym_plot,
  [anon_sym_AUTHOR] = anon_sym_AUTHOR,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_DATE] = anon_sym_DATE,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_TITLE] = anon_sym_TITLE,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_CAPTION] = anon_sym_CAPTION,
  [anon_sym_caption] = anon_sym_caption,
  [aux_sym__affiliated_keys_token1] = aux_sym__affiliated_keys_token1,
  [anon_sym_RESULTS] = anon_sym_RESULTS,
  [anon_sym_results] = anon_sym_results,
  [anon_sym_ATTR_] = anon_sym_ATTR_,
  [anon_sym_attr_] = anon_sym_attr_,
  [aux_sym__affiliated_value_token1] = aux_sym__affiliated_value_token1,
  [aux_sym__drawer_end_token1] = aux_sym__drawer_end_token1,
  [anon_sym_COLONPROPERTIES_COLON] = anon_sym_COLONPROPERTIES_COLON,
  [aux_sym__property_name_token1] = aux_sym__property_name_token1,
  [aux_sym__property_value_token1] = aux_sym__property_value_token1,
  [anon_sym_LBRACKfn_COLON] = anon_sym_LBRACKfn_COLON,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_fn_inline_def_token1] = aux_sym_fn_inline_def_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym__] = anon_sym__,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_text_sty_verbatim_token1] = aux_sym_text_sty_verbatim_token1,
  [aux_sym_text_sty_code_token1] = aux_sym_text_sty_code_token1,
  [aux_sym__text_markup_pre_token1] = aux_sym__text_markup_pre_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_] = anon_sym_,
  [aux_sym__text_markup_post_token1] = aux_sym__text_markup_post_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_bibtex] = anon_sym_bibtex,
  [anon_sym_pdf] = anon_sym_pdf,
  [anon_sym_orgit_DASHrev] = anon_sym_orgit_DASHrev,
  [anon_sym_orgit_DASHlog] = anon_sym_orgit_DASHlog,
  [anon_sym_orgit] = anon_sym_orgit,
  [anon_sym_roam] = anon_sym_roam,
  [anon_sym_yt] = anon_sym_yt,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_img] = anon_sym_img,
  [anon_sym_doom_DASHmodule] = anon_sym_doom_DASHmodule,
  [anon_sym_doom_DASHpackage] = anon_sym_doom_DASHpackage,
  [anon_sym_kbd] = anon_sym_kbd,
  [anon_sym_doom_DASHmodules] = anon_sym_doom_DASHmodules,
  [anon_sym_doom_DASHdocs] = anon_sym_doom_DASHdocs,
  [anon_sym_doom] = anon_sym_doom,
  [anon_sym_org] = anon_sym_org,
  [anon_sym_attachment] = anon_sym_attachment,
  [anon_sym_file_PLUSsys] = anon_sym_file_PLUSsys,
  [anon_sym_file_PLUSemacs] = anon_sym_file_PLUSemacs,
  [anon_sym_shell] = anon_sym_shell,
  [anon_sym_news] = anon_sym_news,
  [anon_sym_mailto] = anon_sym_mailto,
  [anon_sym_https] = anon_sym_https,
  [anon_sym_http] = anon_sym_http,
  [anon_sym_ftp] = anon_sym_ftp,
  [anon_sym_help] = anon_sym_help,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_elisp] = anon_sym_elisp,
  [aux_sym_angle_link_path_token1] = aux_sym_angle_link_path_token1,
  [aux_sym__plain_link_pre_token1] = aux_sym__plain_link_pre_token1,
  [aux_sym_plain_link_path_token1] = aux_sym_plain_link_path_token1,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_file_COLON] = anon_sym_file_COLON,
  [aux_sym_filename_token1] = aux_sym_filename_token1,
  [aux_sym_filename_token2] = aux_sym_filename_token2,
  [aux_sym_filename_token3] = aux_sym_filename_token3,
  [aux_sym_regular_link_protocol_path_token1] = aux_sym_regular_link_protocol_path_token1,
  [anon_sym_id_COLON] = anon_sym_id_COLON,
  [aux_sym_id_link_token1] = aux_sym_id_link_token1,
  [aux_sym_text_normal_token1] = aux_sym_text_normal_token1,
  [aux_sym_horizontal_rule_token1] = aux_sym_horizontal_rule_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [aux_sym__char_num_underscore_hyphen_token1] = aux_sym__char_num_underscore_hyphen_token1,
  [sym_document] = sym_document,
  [sym_heading] = sym_heading,
  [sym_stars] = sym_stars,
  [sym_headline_keyword] = sym_headline_keyword,
  [sym_title] = sym_title,
  [sym_tags] = sym_tags,
  [sym_affiliated_properties] = sym_affiliated_properties,
  [sym__affiliated_keys] = sym__affiliated_keys,
  [sym__affiliated_attr_keys] = sym__affiliated_attr_keys,
  [sym__attr_backend] = sym__attr_backend,
  [sym__affiliated_value] = sym__affiliated_value,
  [sym_drawer] = sym_drawer,
  [sym__drawer_begin] = sym__drawer_begin,
  [aux_sym__drawer_lines] = aux_sym__drawer_lines,
  [sym__drawer_end] = sym__drawer_end,
  [sym_property_drawer] = sym_property_drawer,
  [sym__property_drawer_begin] = sym__property_drawer_begin,
  [sym__node_property] = sym__node_property,
  [sym__property_name] = sym__property_name,
  [sym__property_value] = sym__property_value,
  [sym_footnote_link] = sym_footnote_link,
  [sym_fn_label] = sym_fn_label,
  [sym_fn_inline_def] = sym_fn_inline_def,
  [sym_text] = sym_text,
  [sym__text_styled] = sym__text_styled,
  [sym_text_sty_bold] = sym_text_sty_bold,
  [sym_text_sty_italic] = sym_text_sty_italic,
  [sym_text_sty_underlined] = sym_text_sty_underlined,
  [sym_text_sty_strikethrough] = sym_text_sty_strikethrough,
  [sym_text_sty_verbatim] = sym_text_sty_verbatim,
  [sym_text_sty_code] = sym_text_sty_code,
  [sym__text_markup_pre] = sym__text_markup_pre,
  [sym__text_markup_post] = sym__text_markup_post,
  [sym__text_inside_sty_normal] = sym__text_inside_sty_normal,
  [sym_text_link] = sym_text_link,
  [sym_text_link_angle] = sym_text_link_angle,
  [sym_link_protocol] = sym_link_protocol,
  [sym_angle_link_path] = sym_angle_link_path,
  [sym_text_link_plain] = sym_text_link_plain,
  [sym__plain_link_pre] = sym__plain_link_pre,
  [sym__plain_link_post] = sym__plain_link_post,
  [sym_plain_link_path] = sym_plain_link_path,
  [sym_text_link_regular] = sym_text_link_regular,
  [sym_regular_link_path] = sym_regular_link_path,
  [sym_filename] = sym_filename,
  [sym_regular_link_protocol_path] = sym_regular_link_protocol_path,
  [sym_id_link] = sym_id_link,
  [sym_regular_link_description] = sym_regular_link_description,
  [sym_text_normal] = sym_text_normal,
  [sym_horizontal_rule] = sym_horizontal_rule,
  [sym__line] = sym__line,
  [aux_sym__characters] = aux_sym__characters,
  [sym__linebreak] = sym__linebreak,
  [aux_sym__char_num_underscore_hyphen] = aux_sym__char_num_underscore_hyphen,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_heading_repeat1] = aux_sym_heading_repeat1,
  [aux_sym_title_repeat1] = aux_sym_title_repeat1,
  [aux_sym_tags_repeat1] = aux_sym_tags_repeat1,
  [aux_sym_property_drawer_repeat1] = aux_sym_property_drawer_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
  [aux_sym_regular_link_protocol_path_repeat1] = aux_sym_regular_link_protocol_path_repeat1,
  [aux_sym_id_link_repeat1] = aux_sym_id_link_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_stars_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_headline_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [sym_headline_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_title_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__tag] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEADER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AUTHOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TITLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAPTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_caption] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__affiliated_keys_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RESULTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_results] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATTR_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attr_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__affiliated_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__drawer_end_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLONPROPERTIES_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__property_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__property_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACKfn_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fn_inline_def_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_sty_verbatim_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_sty_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_markup_pre_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__text_markup_post_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bibtex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pdf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orgit_DASHrev] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orgit_DASHlog] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orgit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_roam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_img] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doom_DASHmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doom_DASHpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kbd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doom_DASHmodules] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doom_DASHdocs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_org] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attachment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_PLUSsys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_PLUSemacs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_news] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mailto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_https] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ftp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_help] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elisp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_angle_link_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__plain_link_pre_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plain_link_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_filename_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regular_link_protocol_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_id_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_id_link_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_normal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_horizontal_rule_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__char_num_underscore_hyphen_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_stars] = {
    .visible = true,
    .named = true,
  },
  [sym_headline_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_affiliated_properties] = {
    .visible = true,
    .named = true,
  },
  [sym__affiliated_keys] = {
    .visible = false,
    .named = true,
  },
  [sym__affiliated_attr_keys] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_backend] = {
    .visible = false,
    .named = true,
  },
  [sym__affiliated_value] = {
    .visible = false,
    .named = true,
  },
  [sym_drawer] = {
    .visible = true,
    .named = true,
  },
  [sym__drawer_begin] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__drawer_lines] = {
    .visible = false,
    .named = false,
  },
  [sym__drawer_end] = {
    .visible = false,
    .named = true,
  },
  [sym_property_drawer] = {
    .visible = true,
    .named = true,
  },
  [sym__property_drawer_begin] = {
    .visible = false,
    .named = true,
  },
  [sym__node_property] = {
    .visible = false,
    .named = true,
  },
  [sym__property_name] = {
    .visible = false,
    .named = true,
  },
  [sym__property_value] = {
    .visible = false,
    .named = true,
  },
  [sym_footnote_link] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_label] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_inline_def] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__text_styled] = {
    .visible = false,
    .named = true,
  },
  [sym_text_sty_bold] = {
    .visible = true,
    .named = true,
  },
  [sym_text_sty_italic] = {
    .visible = true,
    .named = true,
  },
  [sym_text_sty_underlined] = {
    .visible = true,
    .named = true,
  },
  [sym_text_sty_strikethrough] = {
    .visible = true,
    .named = true,
  },
  [sym_text_sty_verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_text_sty_code] = {
    .visible = true,
    .named = true,
  },
  [sym__text_markup_pre] = {
    .visible = false,
    .named = true,
  },
  [sym__text_markup_post] = {
    .visible = false,
    .named = true,
  },
  [sym__text_inside_sty_normal] = {
    .visible = false,
    .named = true,
  },
  [sym_text_link] = {
    .visible = true,
    .named = true,
  },
  [sym_text_link_angle] = {
    .visible = true,
    .named = true,
  },
  [sym_link_protocol] = {
    .visible = true,
    .named = true,
  },
  [sym_angle_link_path] = {
    .visible = true,
    .named = true,
  },
  [sym_text_link_plain] = {
    .visible = true,
    .named = true,
  },
  [sym__plain_link_pre] = {
    .visible = false,
    .named = true,
  },
  [sym__plain_link_post] = {
    .visible = false,
    .named = true,
  },
  [sym_plain_link_path] = {
    .visible = true,
    .named = true,
  },
  [sym_text_link_regular] = {
    .visible = true,
    .named = true,
  },
  [sym_regular_link_path] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_regular_link_protocol_path] = {
    .visible = true,
    .named = true,
  },
  [sym_id_link] = {
    .visible = true,
    .named = true,
  },
  [sym_regular_link_description] = {
    .visible = true,
    .named = true,
  },
  [sym_text_normal] = {
    .visible = true,
    .named = true,
  },
  [sym_horizontal_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__characters] = {
    .visible = false,
    .named = false,
  },
  [sym__linebreak] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__char_num_underscore_hyphen] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_title_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_drawer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regular_link_protocol_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_id_link_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(272);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(427);
      if (lookahead == '!') ADVANCE(353);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '#') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(343);
      if (lookahead == '(') ADVANCE(339);
      if (lookahead == ')') ADVANCE(355);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == ';') ADVANCE(352);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '>') ADVANCE(359);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'C') ADVANCE(30);
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'H') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == 'P') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == ']') ADVANCE(325);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'b') ADVANCE(411);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead == 'd') ADVANCE(409);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'f') ADVANCE(410);
      if (lookahead == 'h') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'k') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 'y') ADVANCE(232);
      if (lookahead == '{') ADVANCE(345);
      if (lookahead == '}') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(391);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(427);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(427);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(427);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == 'C') ADVANCE(280);
      if (lookahead == '[') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(282);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == 'C') ADVANCE(281);
      if (lookahead == '[') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == 'C') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(390);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == ':') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == ':') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(425);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == ':') ADVANCE(258);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'k') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 'y') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(400);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '~') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      if (('-' <= lookahead && lookahead <= '0') ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(400);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(400);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(320);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(324);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(322);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(319);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(88);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(120);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(303);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(294);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(306);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 56:
      if (lookahead == 'H') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 57:
      if (lookahead == 'H') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 63:
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(119);
      END_STATE();
    case 69:
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 70:
      if (lookahead == 'M') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 71:
      if (lookahead == 'M') ADVANCE(47);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(51);
      END_STATE();
    case 73:
      if (lookahead == 'M') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == 'M') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(309);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 81:
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 87:
      if (lookahead == 'P') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 88:
      if (lookahead == 'P') ADVANCE(118);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(300);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(291);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(127);
      END_STATE();
    case 97:
      if (lookahead == 'S') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 98:
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 99:
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(313);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == 'U') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(297);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(276);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(96);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 119:
      if (lookahead == 'T') ADVANCE(101);
      END_STATE();
    case 120:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 121:
      if (lookahead == 'U') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 122:
      if (lookahead == 'U') ADVANCE(68);
      END_STATE();
    case 123:
      if (lookahead == ']') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      END_STATE();
    case 124:
      if (lookahead == ']') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(404);
      END_STATE();
    case 125:
      if (lookahead == ']') ADVANCE(275);
      END_STATE();
    case 126:
      if (lookahead == ']') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(316);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(317);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 141:
      if (lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 142:
      if (lookahead == 'b') ADVANCE(244);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 172:
      if (lookahead == 'f') ADVANCE(361);
      END_STATE();
    case 173:
      if (lookahead == 'g') ADVANCE(369);
      END_STATE();
    case 174:
      if (lookahead == 'g') ADVANCE(376);
      END_STATE();
    case 175:
      if (lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 176:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 177:
      if (lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 178:
      if (lookahead == 'h') ADVANCE(211);
      END_STATE();
    case 179:
      if (lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 187:
      if (lookahead == 'k') ADVANCE(139);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 199:
      if (lookahead == 'm') ADVANCE(375);
      END_STATE();
    case 200:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(389);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(374);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 250:
      if (lookahead == 'v') ADVANCE(362);
      END_STATE();
    case 251:
      if (lookahead == 'w') ADVANCE(226);
      END_STATE();
    case 252:
      if (lookahead == 'x') ADVANCE(360);
      END_STATE();
    case 253:
      if (lookahead == 'y') ADVANCE(228);
      END_STATE();
    case 254:
      if (lookahead == '~') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 255:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 256:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(347);
      if (('!' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 257:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != ':') ADVANCE(15);
      END_STATE();
    case 259:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 260:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '=') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 261:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '~') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 262:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(391);
      END_STATE();
    case 263:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(267);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 267:
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(267);
      END_STATE();
    case 268:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(260);
      END_STATE();
    case 269:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '~') ADVANCE(261);
      END_STATE();
    case 270:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(126);
      END_STATE();
    case 271:
      if (eof) ADVANCE(272);
      if (lookahead == '!') ADVANCE(353);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '\'') ADVANCE(343);
      if (lookahead == ')') ADVANCE(355);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '+') ADVANCE(332);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(337);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == ';') ADVANCE(352);
      if (lookahead == '=') ADVANCE(268);
      if (lookahead == '>') ADVANCE(359);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'C') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'H') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == ']') ADVANCE(325);
      if (lookahead == '_') ADVANCE(331);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'h') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'k') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 'y') ADVANCE(232);
      if (lookahead == '}') ADVANCE(356);
      if (lookahead == '~') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_stars_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_headline_keyword_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_priority);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_headline_comment);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_headline_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_title_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '#') ADVANCE(264);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__tag);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_POUND_PLUS);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'P') ADVANCE(89);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'P') ADVANCE(420);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(328);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_HEADER);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_HEADER);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_NAME);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_NAME);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PLOT);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_PLOT);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_plot);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_AUTHOR);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_AUTHOR);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_author);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DATE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DATE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_TITLE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_TITLE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_CAPTION);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_CAPTION);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_caption);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__affiliated_keys_token1);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_RESULTS);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_RESULTS);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_results);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_ATTR_);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_attr_);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__affiliated_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__drawer_end_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_COLONPROPERTIES_COLON);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_COLONPROPERTIES_COLON);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__property_name_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__property_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LBRACKfn_COLON);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_fn_inline_def_token1);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == ']') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '0' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(328);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_fn_inline_def_token1);
      if (lookahead == ']') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_fn_inline_def_token1);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_text_sty_verbatim_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '=') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_text_sty_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '~') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__text_markup_pre_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__text_markup_pre_token1);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(272);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(427);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '[') ADVANCE(395);
      if (lookahead == '{') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(336);
      if (('!' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '`') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(391);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__text_markup_post_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__text_markup_post_token1);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__text_markup_post_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(390);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_bibtex);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_pdf);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_orgit_DASHrev);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_orgit_DASHlog);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_orgit);
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_roam);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_yt);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == ':') ADVANCE(405);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_img);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_doom_DASHmodule);
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_doom_DASHpackage);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_kbd);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_doom_DASHmodules);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_doom_DASHdocs);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_doom);
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_org);
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_attachment);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_file_PLUSsys);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_file_PLUSemacs);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_news);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_mailto);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_https);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == 's') ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_help);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '+') ADVANCE(170);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '+') ADVANCE(170);
      if (lookahead == ':') ADVANCE(399);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_elisp);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_angle_link_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__plain_link_pre_token1);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__plain_link_pre_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__plain_link_pre_token1);
      if (lookahead == '+') ADVANCE(286);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__plain_link_pre_token1);
      if (lookahead == '+') ADVANCE(286);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__plain_link_pre_token1);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__plain_link_pre_token1);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_plain_link_path_token1);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(267);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_file_COLON);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_filename_token2);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_filename_token3);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_filename_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_regular_link_protocol_path_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_id_COLON);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      if (lookahead == '-') ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_text_normal_token1);
      if (lookahead == ':') ADVANCE(321);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_text_normal_token1);
      if (lookahead == 'E') ADVANCE(422);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_text_normal_token1);
      if (lookahead == 'E') ADVANCE(421);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_text_normal_token1);
      if (lookahead == 'I') ADVANCE(415);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_text_normal_token1);
      if (lookahead == 'O') ADVANCE(419);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_text_normal_token1);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_text_normal_token1);
      if (lookahead == 'R') ADVANCE(418);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_text_normal_token1);
      if (lookahead == 'R') ADVANCE(423);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_text_normal_token1);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_text_normal_token1);
      if (lookahead == 'T') ADVANCE(417);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_text_normal_token1);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__char_num_underscore_hyphen_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 346},
  [2] = {.lex_state = 346},
  [3] = {.lex_state = 346},
  [4] = {.lex_state = 271},
  [5] = {.lex_state = 346},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 346},
  [9] = {.lex_state = 346},
  [10] = {.lex_state = 346},
  [11] = {.lex_state = 346},
  [12] = {.lex_state = 346},
  [13] = {.lex_state = 346},
  [14] = {.lex_state = 346},
  [15] = {.lex_state = 346},
  [16] = {.lex_state = 346},
  [17] = {.lex_state = 346},
  [18] = {.lex_state = 271},
  [19] = {.lex_state = 346},
  [20] = {.lex_state = 346},
  [21] = {.lex_state = 346},
  [22] = {.lex_state = 346},
  [23] = {.lex_state = 346},
  [24] = {.lex_state = 346},
  [25] = {.lex_state = 346},
  [26] = {.lex_state = 346},
  [27] = {.lex_state = 346},
  [28] = {.lex_state = 346},
  [29] = {.lex_state = 346},
  [30] = {.lex_state = 346},
  [31] = {.lex_state = 346},
  [32] = {.lex_state = 346},
  [33] = {.lex_state = 271},
  [34] = {.lex_state = 271},
  [35] = {.lex_state = 271},
  [36] = {.lex_state = 271},
  [37] = {.lex_state = 271},
  [38] = {.lex_state = 271},
  [39] = {.lex_state = 271},
  [40] = {.lex_state = 271},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 326},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 326},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 271},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 326},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 326},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 327},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 123},
  [78] = {.lex_state = 124},
  [79] = {.lex_state = 271},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 256},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 256},
  [84] = {.lex_state = 256},
  [85] = {.lex_state = 256},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 123},
  [90] = {.lex_state = 124},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 124},
  [93] = {.lex_state = 327},
  [94] = {.lex_state = 123},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 262},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 256},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 263},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 271},
  [109] = {.lex_state = 271},
  [110] = {.lex_state = 271},
  [111] = {.lex_state = 271},
  [112] = {.lex_state = 271},
  [113] = {.lex_state = 271},
  [114] = {.lex_state = 271},
  [115] = {.lex_state = 262},
  [116] = {.lex_state = 271},
  [117] = {.lex_state = 271},
  [118] = {.lex_state = 271},
  [119] = {.lex_state = 271},
  [120] = {.lex_state = 271},
  [121] = {.lex_state = 271},
  [122] = {.lex_state = 271},
  [123] = {.lex_state = 271},
  [124] = {.lex_state = 271},
  [125] = {.lex_state = 271},
  [126] = {.lex_state = 271},
  [127] = {.lex_state = 271},
  [128] = {.lex_state = 271},
  [129] = {.lex_state = 271},
  [130] = {.lex_state = 271},
  [131] = {.lex_state = 271},
  [132] = {.lex_state = 124},
  [133] = {.lex_state = 271},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_stars_token1] = ACTIONS(1),
    [aux_sym_headline_keyword_token1] = ACTIONS(1),
    [sym_headline_comment] = ACTIONS(1),
    [anon_sym_POUND_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_HEADER] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_NAME] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_PLOT] = ACTIONS(1),
    [anon_sym_plot] = ACTIONS(1),
    [anon_sym_AUTHOR] = ACTIONS(1),
    [anon_sym_author] = ACTIONS(1),
    [anon_sym_DATE] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_TITLE] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_CAPTION] = ACTIONS(1),
    [anon_sym_caption] = ACTIONS(1),
    [anon_sym_RESULTS] = ACTIONS(1),
    [anon_sym_results] = ACTIONS(1),
    [anon_sym_ATTR_] = ACTIONS(1),
    [anon_sym_attr_] = ACTIONS(1),
    [anon_sym_COLONPROPERTIES_COLON] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__text_markup_pre_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [aux_sym__text_markup_post_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_bibtex] = ACTIONS(1),
    [anon_sym_pdf] = ACTIONS(1),
    [anon_sym_orgit_DASHrev] = ACTIONS(1),
    [anon_sym_orgit_DASHlog] = ACTIONS(1),
    [anon_sym_orgit] = ACTIONS(1),
    [anon_sym_roam] = ACTIONS(1),
    [anon_sym_yt] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_img] = ACTIONS(1),
    [anon_sym_doom_DASHmodule] = ACTIONS(1),
    [anon_sym_doom_DASHpackage] = ACTIONS(1),
    [anon_sym_kbd] = ACTIONS(1),
    [anon_sym_doom_DASHmodules] = ACTIONS(1),
    [anon_sym_doom_DASHdocs] = ACTIONS(1),
    [anon_sym_doom] = ACTIONS(1),
    [anon_sym_org] = ACTIONS(1),
    [anon_sym_attachment] = ACTIONS(1),
    [anon_sym_file_PLUSsys] = ACTIONS(1),
    [anon_sym_file_PLUSemacs] = ACTIONS(1),
    [anon_sym_shell] = ACTIONS(1),
    [anon_sym_news] = ACTIONS(1),
    [anon_sym_mailto] = ACTIONS(1),
    [anon_sym_https] = ACTIONS(1),
    [anon_sym_http] = ACTIONS(1),
    [anon_sym_ftp] = ACTIONS(1),
    [anon_sym_help] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_elisp] = ACTIONS(1),
    [aux_sym__plain_link_pre_token1] = ACTIONS(1),
    [anon_sym_file_COLON] = ACTIONS(1),
    [anon_sym_id_COLON] = ACTIONS(1),
    [aux_sym_id_link_token1] = ACTIONS(1),
    [aux_sym_horizontal_rule_token1] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(133),
    [sym_heading] = STATE(3),
    [sym_stars] = STATE(41),
    [sym_affiliated_properties] = STATE(3),
    [sym_drawer] = STATE(3),
    [sym__drawer_begin] = STATE(50),
    [sym_property_drawer] = STATE(3),
    [sym__property_drawer_begin] = STATE(51),
    [sym_footnote_link] = STATE(3),
    [sym_text] = STATE(3),
    [sym__text_styled] = STATE(8),
    [sym__text_markup_pre] = STATE(40),
    [sym_text_link] = STATE(8),
    [sym_text_link_angle] = STATE(23),
    [sym_text_link_plain] = STATE(23),
    [sym__plain_link_pre] = STATE(7),
    [sym_text_link_regular] = STATE(23),
    [sym_text_normal] = STATE(8),
    [sym_horizontal_rule] = STATE(3),
    [sym__linebreak] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(8),
    [aux_sym_stars_token1] = ACTIONS(5),
    [anon_sym_POUND_PLUS] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_COLONPROPERTIES_COLON] = ACTIONS(11),
    [anon_sym_LBRACKfn_COLON] = ACTIONS(13),
    [aux_sym__text_markup_pre_token1] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(15),
    [aux_sym__text_markup_post_token1] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym__plain_link_pre_token1] = ACTIONS(21),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(23),
    [aux_sym_text_normal_token1] = ACTIONS(25),
    [aux_sym_horizontal_rule_token1] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_stars_token1,
    ACTIONS(36), 1,
      anon_sym_POUND_PLUS,
    ACTIONS(39), 1,
      anon_sym_COLON,
    ACTIONS(42), 1,
      anon_sym_COLONPROPERTIES_COLON,
    ACTIONS(45), 1,
      anon_sym_LBRACKfn_COLON,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      anon_sym_LT,
    ACTIONS(57), 1,
      aux_sym__plain_link_pre_token1,
    ACTIONS(60), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(63), 1,
      aux_sym_text_normal_token1,
    ACTIONS(66), 1,
      aux_sym_horizontal_rule_token1,
    STATE(7), 1,
      sym__plain_link_pre,
    STATE(40), 1,
      sym__text_markup_pre,
    STATE(41), 1,
      sym_stars,
    STATE(50), 1,
      sym__drawer_begin,
    STATE(51), 1,
      sym__property_drawer_begin,
    ACTIONS(69), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(23), 3,
      sym_text_link_angle,
      sym_text_link_plain,
      sym_text_link_regular,
    STATE(8), 4,
      sym__text_styled,
      sym_text_link,
      sym_text_normal,
      aux_sym_text_repeat1,
    ACTIONS(48), 6,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
    STATE(2), 9,
      sym_heading,
      sym_affiliated_properties,
      sym_drawer,
      sym_property_drawer,
      sym_footnote_link,
      sym_text,
      sym_horizontal_rule,
      sym__linebreak,
      aux_sym_document_repeat1,
  [89] = 23,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(5), 1,
      aux_sym_stars_token1,
    ACTIONS(7), 1,
      anon_sym_POUND_PLUS,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_COLONPROPERTIES_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACKfn_COLON,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      aux_sym__plain_link_pre_token1,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(25), 1,
      aux_sym_text_normal_token1,
    ACTIONS(27), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym__plain_link_pre,
    STATE(40), 1,
      sym__text_markup_pre,
    STATE(41), 1,
      sym_stars,
    STATE(50), 1,
      sym__drawer_begin,
    STATE(51), 1,
      sym__property_drawer_begin,
    ACTIONS(74), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(23), 3,
      sym_text_link_angle,
      sym_text_link_plain,
      sym_text_link_regular,
    STATE(8), 4,
      sym__text_styled,
      sym_text_link,
      sym_text_normal,
      aux_sym_text_repeat1,
    ACTIONS(15), 6,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
    STATE(2), 9,
      sym_heading,
      sym_affiliated_properties,
      sym_drawer,
      sym_property_drawer,
      sym_footnote_link,
      sym_text,
      sym_horizontal_rule,
      sym__linebreak,
      aux_sym_document_repeat1,
  [178] = 8,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(82), 1,
      anon_sym_file_COLON,
    ACTIONS(84), 1,
      anon_sym_id_COLON,
    STATE(92), 1,
      sym_link_protocol,
    STATE(122), 1,
      sym_id_link,
    STATE(123), 1,
      sym_regular_link_path,
    ACTIONS(80), 7,
      anon_sym_orgit,
      anon_sym_id,
      anon_sym_doom_DASHmodule,
      anon_sym_doom,
      anon_sym_org,
      anon_sym_http,
      anon_sym_file,
    ACTIONS(78), 21,
      anon_sym_bibtex,
      anon_sym_pdf,
      anon_sym_orgit_DASHrev,
      anon_sym_orgit_DASHlog,
      anon_sym_roam,
      anon_sym_yt,
      anon_sym_img,
      anon_sym_doom_DASHpackage,
      anon_sym_kbd,
      anon_sym_doom_DASHmodules,
      anon_sym_doom_DASHdocs,
      anon_sym_attachment,
      anon_sym_file_PLUSsys,
      anon_sym_file_PLUSemacs,
      anon_sym_shell,
      anon_sym_news,
      anon_sym_mailto,
      anon_sym_https,
      anon_sym_ftp,
      anon_sym_help,
      anon_sym_elisp,
  [229] = 13,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LT,
    ACTIONS(99), 1,
      aux_sym__plain_link_pre_token1,
    ACTIONS(102), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(105), 1,
      aux_sym_text_normal_token1,
    STATE(7), 1,
      sym__plain_link_pre,
    STATE(40), 1,
      sym__text_markup_pre,
    ACTIONS(88), 2,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
    STATE(23), 3,
      sym_text_link_angle,
      sym_text_link_plain,
      sym_text_link_regular,
    STATE(5), 4,
      sym__text_styled,
      sym_text_link,
      sym_text_normal,
      aux_sym_text_repeat1,
    ACTIONS(90), 6,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
  [286] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    STATE(125), 1,
      sym_link_protocol,
    ACTIONS(110), 6,
      anon_sym_orgit,
      anon_sym_doom_DASHmodule,
      anon_sym_doom,
      anon_sym_org,
      anon_sym_http,
      anon_sym_file,
    ACTIONS(108), 22,
      anon_sym_bibtex,
      anon_sym_pdf,
      anon_sym_orgit_DASHrev,
      anon_sym_orgit_DASHlog,
      anon_sym_roam,
      anon_sym_yt,
      anon_sym_id,
      anon_sym_img,
      anon_sym_doom_DASHpackage,
      anon_sym_kbd,
      anon_sym_doom_DASHmodules,
      anon_sym_doom_DASHdocs,
      anon_sym_attachment,
      anon_sym_file_PLUSsys,
      anon_sym_file_PLUSemacs,
      anon_sym_shell,
      anon_sym_news,
      anon_sym_mailto,
      anon_sym_https,
      anon_sym_ftp,
      anon_sym_help,
      anon_sym_elisp,
  [325] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    STATE(118), 1,
      sym_link_protocol,
    ACTIONS(110), 6,
      anon_sym_orgit,
      anon_sym_doom_DASHmodule,
      anon_sym_doom,
      anon_sym_org,
      anon_sym_http,
      anon_sym_file,
    ACTIONS(108), 22,
      anon_sym_bibtex,
      anon_sym_pdf,
      anon_sym_orgit_DASHrev,
      anon_sym_orgit_DASHlog,
      anon_sym_roam,
      anon_sym_yt,
      anon_sym_id,
      anon_sym_img,
      anon_sym_doom_DASHpackage,
      anon_sym_kbd,
      anon_sym_doom_DASHmodules,
      anon_sym_doom_DASHdocs,
      anon_sym_attachment,
      anon_sym_file_PLUSsys,
      anon_sym_file_PLUSemacs,
      anon_sym_shell,
      anon_sym_news,
      anon_sym_mailto,
      anon_sym_https,
      anon_sym_ftp,
      anon_sym_help,
      anon_sym_elisp,
  [364] = 7,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    STATE(7), 1,
      sym__plain_link_pre,
    STATE(40), 1,
      sym__text_markup_pre,
    STATE(23), 3,
      sym_text_link_angle,
      sym_text_link_plain,
      sym_text_link_regular,
    STATE(5), 4,
      sym__text_styled,
      sym_text_link,
      sym_text_normal,
      aux_sym_text_repeat1,
    ACTIONS(112), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(114), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [409] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    STATE(11), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(116), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(118), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [441] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    STATE(11), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(120), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(122), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [473] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(128), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(11), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(126), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [507] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    STATE(11), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(131), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(133), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [539] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    STATE(11), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(135), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(137), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [571] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    STATE(11), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(139), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(141), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [603] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(143), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(145), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [631] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(147), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(149), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [659] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(151), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(153), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [687] = 5,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(159), 2,
      anon_sym_ATTR_,
      anon_sym_attr_,
    STATE(130), 2,
      sym__affiliated_keys,
      sym__affiliated_attr_keys,
    ACTIONS(157), 4,
      anon_sym_CAPTION,
      anon_sym_caption,
      anon_sym_RESULTS,
      anon_sym_results,
    ACTIONS(155), 12,
      anon_sym_HEADER,
      anon_sym_header,
      anon_sym_NAME,
      anon_sym_name,
      anon_sym_PLOT,
      anon_sym_plot,
      anon_sym_AUTHOR,
      anon_sym_author,
      anon_sym_DATE,
      anon_sym_date,
      anon_sym_TITLE,
      anon_sym_title,
  [719] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(161), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(163), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [747] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(165), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(167), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [775] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(169), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(171), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [803] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(175), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [831] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(179), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [859] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(181), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(183), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [887] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(185), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(187), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [915] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(189), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(191), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [943] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(193), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(195), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [971] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(197), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(199), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [999] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(201), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(203), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1027] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(205), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(207), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1055] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(209), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(211), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1083] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(213), 10,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
    ACTIONS(215), 10,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1111] = 2,
    STATE(26), 1,
      sym__text_markup_post,
    ACTIONS(217), 13,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__text_markup_post_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1130] = 1,
    ACTIONS(219), 13,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__text_markup_post_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1146] = 1,
    ACTIONS(221), 13,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__text_markup_post_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1162] = 1,
    ACTIONS(223), 13,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__text_markup_post_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1178] = 1,
    ACTIONS(225), 13,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__text_markup_post_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1194] = 1,
    ACTIONS(227), 13,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__text_markup_post_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1210] = 1,
    ACTIONS(229), 13,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__text_markup_post_token1,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1226] = 8,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      anon_sym_SLASH,
    ACTIONS(235), 1,
      anon_sym__,
    ACTIONS(237), 1,
      anon_sym_PLUS,
    ACTIONS(239), 1,
      aux_sym_text_sty_verbatim_token1,
    ACTIONS(241), 1,
      aux_sym_text_sty_code_token1,
    STATE(33), 6,
      sym_text_sty_bold,
      sym_text_sty_italic,
      sym_text_sty_underlined,
      sym_text_sty_strikethrough,
      sym_text_sty_verbatim,
      sym_text_sty_code,
  [1256] = 8,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(243), 1,
      aux_sym_headline_keyword_token1,
    ACTIONS(245), 1,
      sym_priority,
    ACTIONS(247), 1,
      sym_headline_comment,
    ACTIONS(249), 1,
      aux_sym_title_token1,
    STATE(44), 1,
      sym_title,
    STATE(55), 1,
      aux_sym_title_repeat1,
    STATE(56), 1,
      sym_headline_keyword,
  [1281] = 8,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(251), 1,
      anon_sym_COLON,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      aux_sym_fn_inline_def_token1,
    ACTIONS(257), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(60), 1,
      aux_sym__char_num_underscore_hyphen,
    STATE(68), 1,
      sym_fn_label,
    STATE(128), 1,
      sym_fn_inline_def,
  [1306] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(259), 1,
      sym__tag,
    STATE(65), 1,
      sym_tags,
    STATE(69), 1,
      aux_sym_tags_repeat1,
    ACTIONS(261), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(13), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [1327] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(259), 1,
      sym__tag,
    STATE(67), 1,
      sym_tags,
    STATE(69), 1,
      aux_sym_tags_repeat1,
    ACTIONS(263), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(10), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [1348] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(259), 1,
      sym__tag,
    STATE(61), 1,
      sym_tags,
    STATE(69), 1,
      aux_sym_tags_repeat1,
    ACTIONS(265), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(9), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [1369] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(259), 1,
      sym__tag,
    STATE(62), 1,
      sym_tags,
    STATE(69), 1,
      aux_sym_tags_repeat1,
    ACTIONS(267), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(14), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [1390] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(269), 1,
      aux_sym_title_token1,
    ACTIONS(271), 1,
      aux_sym__drawer_end_token1,
    STATE(28), 1,
      sym__drawer_end,
    STATE(48), 1,
      aux_sym__characters,
    STATE(58), 2,
      aux_sym__drawer_lines,
      sym__line,
  [1410] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(273), 1,
      aux_sym_title_token1,
    ACTIONS(275), 1,
      aux_sym__drawer_end_token1,
    STATE(53), 1,
      aux_sym__characters,
    STATE(101), 1,
      sym__linebreak,
    ACTIONS(277), 2,
      anon_sym_LF,
      anon_sym_CR,
  [1430] = 6,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(279), 1,
      aux_sym__drawer_end_token1,
    ACTIONS(281), 1,
      aux_sym__property_name_token1,
    STATE(19), 1,
      sym__drawer_end,
    STATE(98), 1,
      sym__property_name,
    STATE(59), 2,
      sym__node_property,
      aux_sym_property_drawer_repeat1,
  [1450] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(269), 1,
      aux_sym_title_token1,
    ACTIONS(283), 1,
      aux_sym__drawer_end_token1,
    STATE(24), 1,
      sym__drawer_end,
    STATE(48), 1,
      aux_sym__characters,
    STATE(47), 2,
      aux_sym__drawer_lines,
      sym__line,
  [1470] = 6,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(281), 1,
      aux_sym__property_name_token1,
    ACTIONS(285), 1,
      aux_sym__drawer_end_token1,
    STATE(22), 1,
      sym__drawer_end,
    STATE(98), 1,
      sym__property_name,
    STATE(49), 2,
      sym__node_property,
      aux_sym_property_drawer_repeat1,
  [1490] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    ACTIONS(291), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(52), 1,
      aux_sym__char_num_underscore_hyphen,
    ACTIONS(287), 2,
      anon_sym_COLON,
      aux_sym_fn_inline_def_token1,
  [1507] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(294), 1,
      aux_sym_title_token1,
    STATE(53), 1,
      aux_sym__characters,
    ACTIONS(297), 3,
      aux_sym__drawer_end_token1,
      anon_sym_LF,
      anon_sym_CR,
  [1522] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(185), 5,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_PLUS,
  [1533] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(299), 1,
      aux_sym_title_token1,
    STATE(57), 1,
      aux_sym_title_repeat1,
    ACTIONS(301), 3,
      sym__tag,
      anon_sym_LF,
      anon_sym_CR,
  [1548] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(249), 1,
      aux_sym_title_token1,
    ACTIONS(303), 1,
      sym_priority,
    ACTIONS(305), 1,
      sym_headline_comment,
    STATE(46), 1,
      sym_title,
    STATE(55), 1,
      aux_sym_title_repeat1,
  [1567] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(307), 1,
      aux_sym_title_token1,
    STATE(57), 1,
      aux_sym_title_repeat1,
    ACTIONS(310), 3,
      sym__tag,
      anon_sym_LF,
      anon_sym_CR,
  [1582] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(312), 1,
      aux_sym_title_token1,
    ACTIONS(315), 1,
      aux_sym__drawer_end_token1,
    STATE(48), 1,
      aux_sym__characters,
    STATE(58), 2,
      aux_sym__drawer_lines,
      sym__line,
  [1599] = 5,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(317), 1,
      aux_sym__drawer_end_token1,
    ACTIONS(319), 1,
      aux_sym__property_name_token1,
    STATE(98), 1,
      sym__property_name,
    STATE(59), 2,
      sym__node_property,
      aux_sym_property_drawer_repeat1,
  [1616] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    ACTIONS(326), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(52), 1,
      aux_sym__char_num_underscore_hyphen,
    ACTIONS(322), 2,
      anon_sym_COLON,
      aux_sym_fn_inline_def_token1,
  [1633] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(261), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(13), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [1645] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(265), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(9), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [1657] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(328), 1,
      sym__tag,
    STATE(63), 1,
      aux_sym_tags_repeat1,
    ACTIONS(331), 2,
      anon_sym_LF,
      anon_sym_CR,
  [1671] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(249), 1,
      aux_sym_title_token1,
    ACTIONS(305), 1,
      sym_headline_comment,
    STATE(46), 1,
      sym_title,
    STATE(55), 1,
      aux_sym_title_repeat1,
  [1687] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(333), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(12), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [1699] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(249), 1,
      aux_sym_title_token1,
    ACTIONS(335), 1,
      sym_headline_comment,
    STATE(45), 1,
      sym_title,
    STATE(55), 1,
      aux_sym_title_repeat1,
  [1715] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(267), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(14), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [1727] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(255), 1,
      aux_sym_fn_inline_def_token1,
    ACTIONS(337), 1,
      anon_sym_COLON,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      sym_fn_inline_def,
  [1743] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(341), 1,
      sym__tag,
    STATE(63), 1,
      aux_sym_tags_repeat1,
    ACTIONS(343), 2,
      anon_sym_LF,
      anon_sym_CR,
  [1757] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(345), 2,
      aux_sym_headline_keyword_token1,
      sym_priority,
    ACTIONS(347), 2,
      sym_headline_comment,
      aux_sym_title_token1,
  [1769] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(73), 1,
      aux_sym__char_num_underscore_hyphen,
  [1782] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(353), 1,
      aux_sym_title_token1,
    STATE(45), 1,
      sym_title,
    STATE(55), 1,
      aux_sym_title_repeat1,
  [1795] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(289), 1,
      anon_sym_COLON,
    ACTIONS(355), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(73), 1,
      aux_sym__char_num_underscore_hyphen,
  [1808] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(255), 1,
      aux_sym_fn_inline_def_token1,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      sym_fn_inline_def,
  [1821] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(351), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    ACTIONS(360), 1,
      anon_sym_COLON,
    STATE(73), 1,
      aux_sym__char_num_underscore_hyphen,
  [1834] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(353), 1,
      aux_sym_title_token1,
    STATE(43), 1,
      sym_title,
    STATE(55), 1,
      aux_sym_title_repeat1,
  [1847] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    ACTIONS(364), 1,
      aux_sym_id_link_token1,
    STATE(89), 1,
      aux_sym_id_link_repeat1,
  [1860] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    ACTIONS(368), 1,
      aux_sym_regular_link_protocol_path_token1,
    STATE(90), 1,
      aux_sym_regular_link_protocol_path_repeat1,
  [1873] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym_regular_link_description,
  [1886] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(374), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(75), 1,
      aux_sym__char_num_underscore_hyphen,
    STATE(114), 1,
      sym__attr_backend,
  [1899] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(376), 1,
      aux_sym_text_normal_token1,
    STATE(112), 2,
      sym__text_inside_sty_normal,
      sym_text_normal,
  [1910] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    STATE(103), 1,
      sym__linebreak,
    ACTIONS(378), 2,
      anon_sym_LF,
      anon_sym_CR,
  [1921] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(376), 1,
      aux_sym_text_normal_token1,
    STATE(116), 2,
      sym__text_inside_sty_normal,
      sym_text_normal,
  [1932] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(376), 1,
      aux_sym_text_normal_token1,
    STATE(120), 2,
      sym__text_inside_sty_normal,
      sym_text_normal,
  [1943] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(376), 1,
      aux_sym_text_normal_token1,
    STATE(108), 2,
      sym__text_inside_sty_normal,
      sym_text_normal,
  [1954] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(353), 1,
      aux_sym_title_token1,
    STATE(46), 1,
      sym_title,
    STATE(55), 1,
      aux_sym_title_repeat1,
  [1967] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(382), 1,
      aux_sym_title_token1,
    ACTIONS(380), 2,
      sym_priority,
      sym_headline_comment,
  [1978] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(384), 1,
      aux_sym_filename_token2,
    ACTIONS(386), 1,
      aux_sym_filename_token3,
    STATE(91), 1,
      aux_sym_filename_repeat1,
  [1991] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    ACTIONS(390), 1,
      aux_sym_id_link_token1,
    STATE(89), 1,
      aux_sym_id_link_repeat1,
  [2004] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    ACTIONS(395), 1,
      aux_sym_regular_link_protocol_path_token1,
    STATE(90), 1,
      aux_sym_regular_link_protocol_path_repeat1,
  [2017] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(398), 1,
      aux_sym_filename_token2,
    ACTIONS(401), 1,
      aux_sym_filename_token3,
    STATE(91), 1,
      aux_sym_filename_repeat1,
  [2030] = 4,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(403), 1,
      aux_sym_regular_link_protocol_path_token1,
    STATE(78), 1,
      aux_sym_regular_link_protocol_path_repeat1,
    STATE(109), 1,
      sym_regular_link_protocol_path,
  [2043] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(255), 1,
      aux_sym_fn_inline_def_token1,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      sym_fn_inline_def,
  [2056] = 3,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(405), 1,
      aux_sym_id_link_token1,
    STATE(77), 1,
      aux_sym_id_link_repeat1,
  [2066] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(407), 1,
      aux_sym__affiliated_value_token1,
    STATE(30), 1,
      sym__affiliated_value,
  [2076] = 3,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(409), 1,
      anon_sym_COLON,
    ACTIONS(411), 1,
      aux_sym__affiliated_keys_token1,
  [2086] = 3,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(413), 1,
      aux_sym_filename_token1,
    STATE(109), 1,
      sym_filename,
  [2096] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(415), 1,
      aux_sym__property_value_token1,
    STATE(82), 1,
      sym__property_value,
  [2106] = 3,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(417), 1,
      aux_sym__plain_link_pre_token1,
    STATE(29), 1,
      sym__plain_link_post,
  [2116] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(419), 1,
      aux_sym_title_token1,
    ACTIONS(421), 1,
      aux_sym__drawer_end_token1,
  [2126] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(423), 1,
      aux_sym_title_token1,
    ACTIONS(425), 1,
      aux_sym__drawer_end_token1,
  [2136] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(376), 1,
      aux_sym_text_normal_token1,
    STATE(121), 1,
      sym_text_normal,
  [2146] = 3,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(427), 1,
      aux_sym__drawer_end_token1,
    ACTIONS(429), 1,
      aux_sym__property_name_token1,
  [2156] = 3,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(431), 1,
      aux_sym_plain_link_path_token1,
    STATE(99), 1,
      sym_plain_link_path,
  [2166] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(433), 1,
      aux_sym_angle_link_path_token1,
    STATE(124), 1,
      sym_angle_link_path,
  [2176] = 3,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(435), 1,
      aux_sym_filename_token2,
    STATE(88), 1,
      aux_sym_filename_repeat1,
  [2186] = 3,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(437), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(71), 1,
      aux_sym__char_num_underscore_hyphen,
  [2196] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(439), 1,
      anon_sym_STAR,
  [2203] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
  [2210] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(443), 1,
      anon_sym_RBRACK,
  [2217] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
  [2224] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(445), 1,
      anon_sym_PLUS,
  [2231] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(447), 1,
      anon_sym_RBRACK,
  [2238] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(449), 1,
      anon_sym_COLON,
  [2245] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(451), 1,
      aux_sym__plain_link_pre_token1,
  [2252] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(453), 1,
      anon_sym__,
  [2259] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(455), 1,
      anon_sym_COLON,
  [2266] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(457), 1,
      anon_sym_COLON,
  [2273] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
  [2280] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(461), 1,
      anon_sym_SLASH,
  [2287] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
  [2294] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
  [2301] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
  [2308] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(469), 1,
      anon_sym_GT,
  [2315] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(471), 1,
      anon_sym_COLON,
  [2322] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(473), 1,
      anon_sym_COLON,
  [2329] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
  [2336] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
  [2343] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
  [2350] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(479), 1,
      anon_sym_COLON,
  [2357] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(481), 1,
      anon_sym_GT,
  [2364] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(483), 1,
      aux_sym_regular_link_protocol_path_token1,
  [2371] = 2,
    ACTIONS(76), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 178,
  [SMALL_STATE(5)] = 229,
  [SMALL_STATE(6)] = 286,
  [SMALL_STATE(7)] = 325,
  [SMALL_STATE(8)] = 364,
  [SMALL_STATE(9)] = 409,
  [SMALL_STATE(10)] = 441,
  [SMALL_STATE(11)] = 473,
  [SMALL_STATE(12)] = 507,
  [SMALL_STATE(13)] = 539,
  [SMALL_STATE(14)] = 571,
  [SMALL_STATE(15)] = 603,
  [SMALL_STATE(16)] = 631,
  [SMALL_STATE(17)] = 659,
  [SMALL_STATE(18)] = 687,
  [SMALL_STATE(19)] = 719,
  [SMALL_STATE(20)] = 747,
  [SMALL_STATE(21)] = 775,
  [SMALL_STATE(22)] = 803,
  [SMALL_STATE(23)] = 831,
  [SMALL_STATE(24)] = 859,
  [SMALL_STATE(25)] = 887,
  [SMALL_STATE(26)] = 915,
  [SMALL_STATE(27)] = 943,
  [SMALL_STATE(28)] = 971,
  [SMALL_STATE(29)] = 999,
  [SMALL_STATE(30)] = 1027,
  [SMALL_STATE(31)] = 1055,
  [SMALL_STATE(32)] = 1083,
  [SMALL_STATE(33)] = 1111,
  [SMALL_STATE(34)] = 1130,
  [SMALL_STATE(35)] = 1146,
  [SMALL_STATE(36)] = 1162,
  [SMALL_STATE(37)] = 1178,
  [SMALL_STATE(38)] = 1194,
  [SMALL_STATE(39)] = 1210,
  [SMALL_STATE(40)] = 1226,
  [SMALL_STATE(41)] = 1256,
  [SMALL_STATE(42)] = 1281,
  [SMALL_STATE(43)] = 1306,
  [SMALL_STATE(44)] = 1327,
  [SMALL_STATE(45)] = 1348,
  [SMALL_STATE(46)] = 1369,
  [SMALL_STATE(47)] = 1390,
  [SMALL_STATE(48)] = 1410,
  [SMALL_STATE(49)] = 1430,
  [SMALL_STATE(50)] = 1450,
  [SMALL_STATE(51)] = 1470,
  [SMALL_STATE(52)] = 1490,
  [SMALL_STATE(53)] = 1507,
  [SMALL_STATE(54)] = 1522,
  [SMALL_STATE(55)] = 1533,
  [SMALL_STATE(56)] = 1548,
  [SMALL_STATE(57)] = 1567,
  [SMALL_STATE(58)] = 1582,
  [SMALL_STATE(59)] = 1599,
  [SMALL_STATE(60)] = 1616,
  [SMALL_STATE(61)] = 1633,
  [SMALL_STATE(62)] = 1645,
  [SMALL_STATE(63)] = 1657,
  [SMALL_STATE(64)] = 1671,
  [SMALL_STATE(65)] = 1687,
  [SMALL_STATE(66)] = 1699,
  [SMALL_STATE(67)] = 1715,
  [SMALL_STATE(68)] = 1727,
  [SMALL_STATE(69)] = 1743,
  [SMALL_STATE(70)] = 1757,
  [SMALL_STATE(71)] = 1769,
  [SMALL_STATE(72)] = 1782,
  [SMALL_STATE(73)] = 1795,
  [SMALL_STATE(74)] = 1808,
  [SMALL_STATE(75)] = 1821,
  [SMALL_STATE(76)] = 1834,
  [SMALL_STATE(77)] = 1847,
  [SMALL_STATE(78)] = 1860,
  [SMALL_STATE(79)] = 1873,
  [SMALL_STATE(80)] = 1886,
  [SMALL_STATE(81)] = 1899,
  [SMALL_STATE(82)] = 1910,
  [SMALL_STATE(83)] = 1921,
  [SMALL_STATE(84)] = 1932,
  [SMALL_STATE(85)] = 1943,
  [SMALL_STATE(86)] = 1954,
  [SMALL_STATE(87)] = 1967,
  [SMALL_STATE(88)] = 1978,
  [SMALL_STATE(89)] = 1991,
  [SMALL_STATE(90)] = 2004,
  [SMALL_STATE(91)] = 2017,
  [SMALL_STATE(92)] = 2030,
  [SMALL_STATE(93)] = 2043,
  [SMALL_STATE(94)] = 2056,
  [SMALL_STATE(95)] = 2066,
  [SMALL_STATE(96)] = 2076,
  [SMALL_STATE(97)] = 2086,
  [SMALL_STATE(98)] = 2096,
  [SMALL_STATE(99)] = 2106,
  [SMALL_STATE(100)] = 2116,
  [SMALL_STATE(101)] = 2126,
  [SMALL_STATE(102)] = 2136,
  [SMALL_STATE(103)] = 2146,
  [SMALL_STATE(104)] = 2156,
  [SMALL_STATE(105)] = 2166,
  [SMALL_STATE(106)] = 2176,
  [SMALL_STATE(107)] = 2186,
  [SMALL_STATE(108)] = 2196,
  [SMALL_STATE(109)] = 2203,
  [SMALL_STATE(110)] = 2210,
  [SMALL_STATE(111)] = 2217,
  [SMALL_STATE(112)] = 2224,
  [SMALL_STATE(113)] = 2231,
  [SMALL_STATE(114)] = 2238,
  [SMALL_STATE(115)] = 2245,
  [SMALL_STATE(116)] = 2252,
  [SMALL_STATE(117)] = 2259,
  [SMALL_STATE(118)] = 2266,
  [SMALL_STATE(119)] = 2273,
  [SMALL_STATE(120)] = 2280,
  [SMALL_STATE(121)] = 2287,
  [SMALL_STATE(122)] = 2294,
  [SMALL_STATE(123)] = 2301,
  [SMALL_STATE(124)] = 2308,
  [SMALL_STATE(125)] = 2315,
  [SMALL_STATE(126)] = 2322,
  [SMALL_STATE(127)] = 2329,
  [SMALL_STATE(128)] = 2336,
  [SMALL_STATE(129)] = 2343,
  [SMALL_STATE(130)] = 2350,
  [SMALL_STATE(131)] = 2357,
  [SMALL_STATE(132)] = 2364,
  [SMALL_STATE(133)] = 2371,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(40),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(40),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(6),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(7),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(4),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(25),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(11),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 7),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 7),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 6),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 6),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_link_regular, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_link_regular, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_link_regular, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_link_regular, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_drawer, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_drawer, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_link_angle, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_link_angle, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote_link, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote_link, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_drawer, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_drawer, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_link, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_link, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drawer, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drawer, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_normal, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_normal, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_styled, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_styled, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote_link, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote_link, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drawer, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drawer, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_link_plain, 5),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_link_plain, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_affiliated_properties, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_affiliated_properties, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote_link, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote_link, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote_link, 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote_link, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_sty_strikethrough, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_sty_underlined, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_sty_code, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_sty_verbatim, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_sty_italic, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_sty_bold, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__char_num_underscore_hyphen, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__char_num_underscore_hyphen, 2),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__char_num_underscore_hyphen, 2), SHIFT_REPEAT(52),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__characters, 2), SHIFT_REPEAT(53),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__characters, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_repeat1, 2), SHIFT_REPEAT(57),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__drawer_lines, 2), SHIFT_REPEAT(48),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__drawer_lines, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_drawer_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_drawer_repeat1, 2), SHIFT_REPEAT(98),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_label, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_label, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2), SHIFT_REPEAT(63),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stars, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stars, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__char_num_underscore_hyphen, 2), SHIFT_REPEAT(73),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_backend, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_link, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_link_protocol_path, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline_keyword, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline_keyword, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_link_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_link_repeat1, 2), SHIFT_REPEAT(89),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_regular_link_protocol_path_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regular_link_protocol_path_repeat1, 2), SHIFT_REPEAT(90),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(91),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affiliated_keys, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__drawer_begin, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__drawer_begin, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_property, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_property, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_link_path, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affiliated_attr_keys, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_link_path, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affiliated_keys, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_link_path, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_protocol, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_link_description, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_inline_def, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_link_path, 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_protocol, 1),
  [485] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_org(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
