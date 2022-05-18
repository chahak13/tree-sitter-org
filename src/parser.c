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
#define STATE_COUNT 168
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 168
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
  aux_sym__property_key_token1 = 31,
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
  sym__org_block = 115,
  sym_drawer = 116,
  sym__drawer_begin = 117,
  aux_sym__drawer_lines = 118,
  sym__drawer_end = 119,
  sym_property_drawer = 120,
  sym__property_drawer_begin = 121,
  sym_node_property = 122,
  sym__property_key = 123,
  sym__property_value = 124,
  sym_footnote_link = 125,
  sym_fn_label = 126,
  sym_fn_inline_def = 127,
  sym_text = 128,
  sym__text_styled = 129,
  sym_text_sty_bold = 130,
  sym_text_sty_italic = 131,
  sym_text_sty_underlined = 132,
  sym_text_sty_strikethrough = 133,
  sym_text_sty_verbatim = 134,
  sym_text_sty_code = 135,
  sym__text_markup_pre = 136,
  sym__text_markup_post = 137,
  sym__text_inside_sty_normal = 138,
  sym_text_link = 139,
  sym_text_link_angle = 140,
  sym_link_protocol = 141,
  sym_angle_link_path = 142,
  sym_text_link_plain = 143,
  sym__plain_link_pre = 144,
  sym__plain_link_post = 145,
  sym_plain_link_path = 146,
  sym_text_link_regular = 147,
  sym_regular_link_path = 148,
  sym_filename = 149,
  sym_regular_link_protocol_path = 150,
  sym_id_link = 151,
  sym_regular_link_description = 152,
  sym_text_normal = 153,
  sym_horizontal_rule = 154,
  sym__line = 155,
  aux_sym__characters = 156,
  sym__linebreak = 157,
  aux_sym__char_num_underscore_hyphen = 158,
  aux_sym_document_repeat1 = 159,
  aux_sym_heading_repeat1 = 160,
  aux_sym_title_repeat1 = 161,
  aux_sym_tags_repeat1 = 162,
  aux_sym_property_drawer_repeat1 = 163,
  aux_sym_text_repeat1 = 164,
  aux_sym_filename_repeat1 = 165,
  aux_sym_regular_link_protocol_path_repeat1 = 166,
  aux_sym_id_link_repeat1 = 167,
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
  [aux_sym__property_key_token1] = "_property_key_token1",
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
  [sym__org_block] = "_org_block",
  [sym_drawer] = "drawer",
  [sym__drawer_begin] = "_drawer_begin",
  [aux_sym__drawer_lines] = "_drawer_lines",
  [sym__drawer_end] = "_drawer_end",
  [sym_property_drawer] = "property_drawer",
  [sym__property_drawer_begin] = "_property_drawer_begin",
  [sym_node_property] = "node_property",
  [sym__property_key] = "_property_key",
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
  [aux_sym__property_key_token1] = aux_sym__property_key_token1,
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
  [sym__org_block] = sym__org_block,
  [sym_drawer] = sym_drawer,
  [sym__drawer_begin] = sym__drawer_begin,
  [aux_sym__drawer_lines] = aux_sym__drawer_lines,
  [sym__drawer_end] = sym__drawer_end,
  [sym_property_drawer] = sym_property_drawer,
  [sym__property_drawer_begin] = sym__property_drawer_begin,
  [sym_node_property] = sym_node_property,
  [sym__property_key] = sym__property_key,
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
  [aux_sym__property_key_token1] = {
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
  [sym__org_block] = {
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
  [sym_node_property] = {
    .visible = true,
    .named = true,
  },
  [sym__property_key] = {
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

static inline bool aux_sym_text_normal_token1_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ')' || c == '.'))
    : (c <= '9' || (c < '^'
      ? (c < '?'
        ? c == ';'
        : c <= 'Z')
      : (c <= '^' || (c >= '`' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(271);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == '\r') ADVANCE(418);
      if (lookahead == '!') ADVANCE(353);
      if (lookahead == '"') ADVANCE(338);
      if (lookahead == '#') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(355);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == ';') ADVANCE(352);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '>') ADVANCE(359);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(62);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'b') ADVANCE(411);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead == 'd') ADVANCE(409);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'f') ADVANCE(410);
      if (lookahead == 'h') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'k') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '}') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '_' &&
          (lookahead < 'g' || 'z' < lookahead)) ADVANCE(391);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == '\r') ADVANCE(418);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == '\r') ADVANCE(418);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == '\r') ADVANCE(418);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == 'C') ADVANCE(279);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(281);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == 'C') ADVANCE(280);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == 'C') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']') ADVANCE(390);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(317);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(415);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'k') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(400);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '~') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      if (('-' <= lookahead && lookahead <= '0') ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(400);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(400);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(318);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(321);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '+') ADVANCE(14);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(319);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(119);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(301);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(292);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(304);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == 'H') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 56:
      if (lookahead == 'H') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 62:
      if (lookahead == 'L') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 63:
      if (lookahead == 'L') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(47);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 68:
      if (lookahead == 'M') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 69:
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 70:
      if (lookahead == 'M') ADVANCE(46);
      END_STATE();
    case 71:
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(307);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(109);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(75);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 81:
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 84:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 86:
      if (lookahead == 'P') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 87:
      if (lookahead == 'P') ADVANCE(117);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(298);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(289);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(126);
      END_STATE();
    case 96:
      if (lookahead == 'S') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 97:
      if (lookahead == 'S') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 98:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 99:
      if (lookahead == 'S') ADVANCE(121);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(311);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == 'U') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(295);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(275);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == 'U') ADVANCE(107);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(95);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(100);
      END_STATE();
    case 119:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 120:
      if (lookahead == 'U') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 121:
      if (lookahead == 'U') ADVANCE(67);
      END_STATE();
    case 122:
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      END_STATE();
    case 123:
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(404);
      END_STATE();
    case 124:
      if (lookahead == ']') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      if (lookahead == ']') ADVANCE(274);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(314);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(315);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 140:
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'b') ADVANCE(243);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 171:
      if (lookahead == 'f') ADVANCE(361);
      END_STATE();
    case 172:
      if (lookahead == 'g') ADVANCE(369);
      END_STATE();
    case 173:
      if (lookahead == 'g') ADVANCE(376);
      END_STATE();
    case 174:
      if (lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 175:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(168);
      END_STATE();
    case 177:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 178:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 186:
      if (lookahead == 'k') ADVANCE(138);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 198:
      if (lookahead == 'm') ADVANCE(375);
      END_STATE();
    case 199:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 200:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(389);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(374);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 249:
      if (lookahead == 'v') ADVANCE(362);
      END_STATE();
    case 250:
      if (lookahead == 'w') ADVANCE(225);
      END_STATE();
    case 251:
      if (lookahead == 'x') ADVANCE(360);
      END_STATE();
    case 252:
      if (lookahead == 'y') ADVANCE(227);
      END_STATE();
    case 253:
      if (lookahead == '~') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 254:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 255:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 258:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '=') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 259:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '~') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 260:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(348);
      if (('!' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('`' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 261:
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
    case 262:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(266);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 266:
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
          lookahead != '>') ADVANCE(266);
      END_STATE();
    case 267:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(258);
      END_STATE();
    case 268:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '~') ADVANCE(259);
      END_STATE();
    case 269:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(124);
      END_STATE();
    case 270:
      if (eof) ADVANCE(271);
      if (lookahead == '!') ADVANCE(353);
      if (lookahead == '"') ADVANCE(338);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == ')') ADVANCE(355);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '+') ADVANCE(329);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == ';') ADVANCE(352);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '>') ADVANCE(359);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'H') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(61);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == '_') ADVANCE(328);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'h') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'k') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead == '}') ADVANCE(356);
      if (lookahead == '~') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_stars_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_headline_keyword_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_priority);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_headline_comment);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_headline_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_title_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '#') ADVANCE(263);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__tag);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_POUND_PLUS);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'P') ADVANCE(88);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_HEADER);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_HEADER);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_NAME);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_NAME);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_PLOT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_PLOT);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_plot);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_AUTHOR);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_AUTHOR);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_author);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DATE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_DATE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_TITLE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_TITLE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_CAPTION);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_CAPTION);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_caption);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__affiliated_keys_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_RESULTS);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_RESULTS);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_results);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_ATTR_);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_attr_);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__affiliated_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__drawer_end_token1);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_COLONPROPERTIES_COLON);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__property_key_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__property_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LBRACKfn_COLON);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_fn_inline_def_token1);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '0' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_fn_inline_def_token1);
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_fn_inline_def_token1);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_text_sty_verbatim_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '=') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_text_sty_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '~') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__text_markup_pre_token1);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__text_markup_pre_token1);
      if (aux_sym_text_normal_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (aux_sym_text_normal_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (aux_sym_text_normal_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (aux_sym_text_normal_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(271);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == '\r') ADVANCE(419);
      if (lookahead == '"') ADVANCE(339);
      if (lookahead == '#') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(341);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '[') ADVANCE(395);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (('!' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '`') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(391);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(271);
      if (lookahead == '"') ADVANCE(339);
      if (lookahead == '#') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(341);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '[') ADVANCE(395);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(348);
      if (('!' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '`') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(391);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(271);
      if (lookahead == '"') ADVANCE(339);
      if (lookahead == '#') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(341);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '[') ADVANCE(395);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(348);
      if (('!' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '`') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(391);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_);
      if (eof) ADVANCE(271);
      if (lookahead == '"') ADVANCE(339);
      if (lookahead == '#') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(341);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '[') ADVANCE(395);
      if (lookahead == '{') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(348);
      if (('!' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '?' ||
          lookahead == '@' ||
          lookahead == '^' ||
          lookahead == '`') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(391);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__text_markup_post_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__text_markup_post_token1);
      if (aux_sym_text_normal_token1_character_set_1(lookahead)) ADVANCE(414);
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
      if (lookahead == '-') ADVANCE(193);
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
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_org);
      if (lookahead == 'i') ADVANCE(234);
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
      if (lookahead == '+') ADVANCE(169);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '+') ADVANCE(169);
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
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__plain_link_pre_token1);
      if (lookahead == '+') ADVANCE(285);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__plain_link_pre_token1);
      if (lookahead == '+') ADVANCE(285);
      if (aux_sym_text_normal_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__plain_link_pre_token1);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__plain_link_pre_token1);
      if (aux_sym_text_normal_token1_character_set_1(lookahead)) ADVANCE(414);
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
          lookahead != '>') ADVANCE(266);
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
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_id_link_token1);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_text_normal_token1);
      if (aux_sym_text_normal_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_LF);
      if (aux_sym_text_normal_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_CR);
      if (aux_sym_text_normal_token1_character_set_1(lookahead)) ADVANCE(414);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__char_num_underscore_hyphen_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 346},
  [2] = {.lex_state = 344},
  [3] = {.lex_state = 346},
  [4] = {.lex_state = 270},
  [5] = {.lex_state = 270},
  [6] = {.lex_state = 346},
  [7] = {.lex_state = 345},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 345},
  [13] = {.lex_state = 345},
  [14] = {.lex_state = 346},
  [15] = {.lex_state = 346},
  [16] = {.lex_state = 343},
  [17] = {.lex_state = 345},
  [18] = {.lex_state = 343},
  [19] = {.lex_state = 343},
  [20] = {.lex_state = 343},
  [21] = {.lex_state = 343},
  [22] = {.lex_state = 343},
  [23] = {.lex_state = 345},
  [24] = {.lex_state = 270},
  [25] = {.lex_state = 346},
  [26] = {.lex_state = 346},
  [27] = {.lex_state = 346},
  [28] = {.lex_state = 345},
  [29] = {.lex_state = 345},
  [30] = {.lex_state = 345},
  [31] = {.lex_state = 345},
  [32] = {.lex_state = 345},
  [33] = {.lex_state = 345},
  [34] = {.lex_state = 345},
  [35] = {.lex_state = 345},
  [36] = {.lex_state = 345},
  [37] = {.lex_state = 346},
  [38] = {.lex_state = 346},
  [39] = {.lex_state = 346},
  [40] = {.lex_state = 346},
  [41] = {.lex_state = 346},
  [42] = {.lex_state = 346},
  [43] = {.lex_state = 346},
  [44] = {.lex_state = 346},
  [45] = {.lex_state = 346},
  [46] = {.lex_state = 346},
  [47] = {.lex_state = 346},
  [48] = {.lex_state = 346},
  [49] = {.lex_state = 346},
  [50] = {.lex_state = 346},
  [51] = {.lex_state = 346},
  [52] = {.lex_state = 346},
  [53] = {.lex_state = 346},
  [54] = {.lex_state = 346},
  [55] = {.lex_state = 346},
  [56] = {.lex_state = 270},
  [57] = {.lex_state = 270},
  [58] = {.lex_state = 270},
  [59] = {.lex_state = 270},
  [60] = {.lex_state = 270},
  [61] = {.lex_state = 270},
  [62] = {.lex_state = 270},
  [63] = {.lex_state = 270},
  [64] = {.lex_state = 270},
  [65] = {.lex_state = 270},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 323},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 26},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 323},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 26},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 323},
  [84] = {.lex_state = 270},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 323},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 123},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 122},
  [101] = {.lex_state = 123},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 260},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 260},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 270},
  [110] = {.lex_state = 123},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 122},
  [113] = {.lex_state = 260},
  [114] = {.lex_state = 260},
  [115] = {.lex_state = 324},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 324},
  [119] = {.lex_state = 270},
  [120] = {.lex_state = 122},
  [121] = {.lex_state = 262},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 262},
  [125] = {.lex_state = 261},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 261},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 260},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 18},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 270},
  [138] = {.lex_state = 270},
  [139] = {.lex_state = 270},
  [140] = {.lex_state = 270},
  [141] = {.lex_state = 270},
  [142] = {.lex_state = 270},
  [143] = {.lex_state = 270},
  [144] = {.lex_state = 270},
  [145] = {.lex_state = 123},
  [146] = {.lex_state = 270},
  [147] = {.lex_state = 270},
  [148] = {.lex_state = 270},
  [149] = {.lex_state = 270},
  [150] = {.lex_state = 270},
  [151] = {.lex_state = 270},
  [152] = {.lex_state = 270},
  [153] = {.lex_state = 270},
  [154] = {.lex_state = 270},
  [155] = {.lex_state = 270},
  [156] = {.lex_state = 270},
  [157] = {.lex_state = 270},
  [158] = {.lex_state = 270},
  [159] = {.lex_state = 270},
  [160] = {.lex_state = 270},
  [161] = {.lex_state = 270},
  [162] = {.lex_state = 261},
  [163] = {.lex_state = 270},
  [164] = {.lex_state = 270},
  [165] = {.lex_state = 270},
  [166] = {.lex_state = 270},
  [167] = {.lex_state = 270},
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
    [sym_document] = STATE(151),
    [sym_heading] = STATE(2),
    [sym_stars] = STATE(71),
    [sym_affiliated_properties] = STATE(6),
    [sym__org_block] = STATE(6),
    [sym_footnote_link] = STATE(6),
    [sym_text] = STATE(6),
    [sym__text_styled] = STATE(14),
    [sym__text_markup_pre] = STATE(56),
    [sym_text_link] = STATE(14),
    [sym_text_link_angle] = STATE(41),
    [sym_text_link_plain] = STATE(41),
    [sym__plain_link_pre] = STATE(11),
    [sym_text_link_regular] = STATE(41),
    [sym_text_normal] = STATE(14),
    [sym_horizontal_rule] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_text_repeat1] = STATE(14),
    [aux_sym_stars_token1] = ACTIONS(5),
    [anon_sym_POUND_PLUS] = ACTIONS(7),
    [anon_sym_LBRACKfn_COLON] = ACTIONS(9),
    [aux_sym__text_markup_pre_token1] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_] = ACTIONS(11),
    [aux_sym__text_markup_post_token1] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(15),
    [aux_sym__plain_link_pre_token1] = ACTIONS(17),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(19),
    [aux_sym_text_normal_token1] = ACTIONS(21),
    [aux_sym_horizontal_rule_token1] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLONPROPERTIES_COLON,
    STATE(2), 1,
      sym_heading,
    STATE(7), 1,
      sym_property_drawer,
    STATE(8), 1,
      sym__plain_link_pre,
    STATE(17), 1,
      sym_text,
    STATE(27), 1,
      sym_drawer,
    STATE(52), 1,
      sym__org_block,
    STATE(59), 1,
      sym__text_markup_pre,
    STATE(71), 1,
      sym_stars,
    STATE(74), 1,
      sym__property_drawer_begin,
    STATE(76), 1,
      sym__drawer_begin,
    STATE(34), 3,
      sym_text_link_angle,
      sym_text_link_plain,
      sym_text_link_regular,
    STATE(12), 4,
      sym__text_styled,
      sym_text_link,
      sym_text_normal,
      aux_sym_text_repeat1,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(31), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [71] = 19,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_stars_token1,
    ACTIONS(38), 1,
      anon_sym_POUND_PLUS,
    ACTIONS(41), 1,
      anon_sym_LBRACKfn_COLON,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      aux_sym__plain_link_pre_token1,
    ACTIONS(56), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(59), 1,
      aux_sym_text_normal_token1,
    ACTIONS(62), 1,
      aux_sym_horizontal_rule_token1,
    STATE(2), 1,
      sym_heading,
    STATE(11), 1,
      sym__plain_link_pre,
    STATE(56), 1,
      sym__text_markup_pre,
    STATE(71), 1,
      sym_stars,
    STATE(41), 3,
      sym_text_link_angle,
      sym_text_link_plain,
      sym_text_link_regular,
    STATE(14), 4,
      sym__text_styled,
      sym_text_link,
      sym_text_normal,
      aux_sym_text_repeat1,
    ACTIONS(44), 6,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
    STATE(3), 6,
      sym_affiliated_properties,
      sym__org_block,
      sym_footnote_link,
      sym_text,
      sym_horizontal_rule,
      aux_sym_document_repeat1,
  [144] = 8,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(71), 1,
      anon_sym_file_COLON,
    ACTIONS(73), 1,
      anon_sym_id_COLON,
    STATE(98), 1,
      sym_link_protocol,
    STATE(142), 1,
      sym_id_link,
    STATE(143), 1,
      sym_regular_link_path,
    ACTIONS(69), 7,
      anon_sym_orgit,
      anon_sym_id,
      anon_sym_doom_DASHmodule,
      anon_sym_doom,
      anon_sym_org,
      anon_sym_http,
      anon_sym_file,
    ACTIONS(67), 21,
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
  [195] = 8,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(71), 1,
      anon_sym_file_COLON,
    ACTIONS(73), 1,
      anon_sym_id_COLON,
    STATE(98), 1,
      sym_link_protocol,
    STATE(142), 1,
      sym_id_link,
    STATE(160), 1,
      sym_regular_link_path,
    ACTIONS(69), 7,
      anon_sym_orgit,
      anon_sym_id,
      anon_sym_doom_DASHmodule,
      anon_sym_doom,
      anon_sym_org,
      anon_sym_http,
      anon_sym_file,
    ACTIONS(67), 21,
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
  [246] = 19,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(5), 1,
      aux_sym_stars_token1,
    ACTIONS(7), 1,
      anon_sym_POUND_PLUS,
    ACTIONS(9), 1,
      anon_sym_LBRACKfn_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      aux_sym__plain_link_pre_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(21), 1,
      aux_sym_text_normal_token1,
    ACTIONS(23), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_heading,
    STATE(11), 1,
      sym__plain_link_pre,
    STATE(56), 1,
      sym__text_markup_pre,
    STATE(71), 1,
      sym_stars,
    STATE(41), 3,
      sym_text_link_angle,
      sym_text_link_plain,
      sym_text_link_regular,
    STATE(14), 4,
      sym__text_styled,
      sym_text_link,
      sym_text_normal,
      aux_sym_text_repeat1,
    ACTIONS(11), 6,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
    STATE(3), 6,
      sym_affiliated_properties,
      sym__org_block,
      sym_footnote_link,
      sym_text,
      sym_horizontal_rule,
      aux_sym_document_repeat1,
  [319] = 14,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(79), 1,
      anon_sym_COLON,
    STATE(2), 1,
      sym_heading,
    STATE(8), 1,
      sym__plain_link_pre,
    STATE(23), 1,
      sym_text,
    STATE(26), 1,
      sym_drawer,
    STATE(43), 1,
      sym__org_block,
    STATE(59), 1,
      sym__text_markup_pre,
    STATE(71), 1,
      sym_stars,
    STATE(76), 1,
      sym__drawer_begin,
    STATE(34), 3,
      sym_text_link_angle,
      sym_text_link_plain,
      sym_text_link_regular,
    STATE(12), 4,
      sym__text_styled,
      sym_text_link,
      sym_text_normal,
      aux_sym_text_repeat1,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(81), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [381] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    STATE(165), 1,
      sym_link_protocol,
    ACTIONS(85), 6,
      anon_sym_orgit,
      anon_sym_doom_DASHmodule,
      anon_sym_doom,
      anon_sym_org,
      anon_sym_http,
      anon_sym_file,
    ACTIONS(83), 22,
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
  [420] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    STATE(149), 1,
      sym_link_protocol,
    ACTIONS(85), 6,
      anon_sym_orgit,
      anon_sym_doom_DASHmodule,
      anon_sym_doom,
      anon_sym_org,
      anon_sym_http,
      anon_sym_file,
    ACTIONS(83), 22,
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
  [459] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    STATE(164), 1,
      sym_link_protocol,
    ACTIONS(85), 6,
      anon_sym_orgit,
      anon_sym_doom_DASHmodule,
      anon_sym_doom,
      anon_sym_org,
      anon_sym_http,
      anon_sym_file,
    ACTIONS(83), 22,
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
  [498] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    STATE(158), 1,
      sym_link_protocol,
    ACTIONS(85), 6,
      anon_sym_orgit,
      anon_sym_doom_DASHmodule,
      anon_sym_doom,
      anon_sym_org,
      anon_sym_http,
      anon_sym_file,
    ACTIONS(83), 22,
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
  [537] = 12,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(95), 1,
      aux_sym__plain_link_pre_token1,
    ACTIONS(97), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(99), 1,
      aux_sym_text_normal_token1,
    STATE(8), 1,
      sym__plain_link_pre,
    STATE(59), 1,
      sym__text_markup_pre,
    STATE(34), 3,
      sym_text_link_angle,
      sym_text_link_plain,
      sym_text_link_regular,
    STATE(13), 4,
      sym__text_styled,
      sym_text_link,
      sym_text_normal,
      aux_sym_text_repeat1,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_LBRACKfn_COLON,
      aux_sym_horizontal_rule_token1,
    ACTIONS(89), 6,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
  [589] = 12,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(106), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(112), 1,
      aux_sym__plain_link_pre_token1,
    ACTIONS(115), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(118), 1,
      aux_sym_text_normal_token1,
    STATE(8), 1,
      sym__plain_link_pre,
    STATE(59), 1,
      sym__text_markup_pre,
    STATE(34), 3,
      sym_text_link_angle,
      sym_text_link_plain,
      sym_text_link_regular,
    STATE(13), 4,
      sym__text_styled,
      sym_text_link,
      sym_text_normal,
      aux_sym_text_repeat1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_LBRACKfn_COLON,
      aux_sym_horizontal_rule_token1,
    ACTIONS(103), 6,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
  [641] = 12,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      aux_sym__plain_link_pre_token1,
    ACTIONS(19), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(21), 1,
      aux_sym_text_normal_token1,
    STATE(11), 1,
      sym__plain_link_pre,
    STATE(56), 1,
      sym__text_markup_pre,
    STATE(41), 3,
      sym_text_link_angle,
      sym_text_link_plain,
      sym_text_link_regular,
    STATE(15), 4,
      sym__text_styled,
      sym_text_link,
      sym_text_normal,
      aux_sym_text_repeat1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      aux_sym_horizontal_rule_token1,
    ACTIONS(11), 6,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
  [692] = 12,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(130), 1,
      aux_sym__plain_link_pre_token1,
    ACTIONS(133), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(136), 1,
      aux_sym_text_normal_token1,
    STATE(11), 1,
      sym__plain_link_pre,
    STATE(56), 1,
      sym__text_markup_pre,
    STATE(41), 3,
      sym_text_link_angle,
      sym_text_link_plain,
      sym_text_link_regular,
    STATE(15), 4,
      sym__text_styled,
      sym_text_link,
      sym_text_normal,
      aux_sym_text_repeat1,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      aux_sym_horizontal_rule_token1,
    ACTIONS(121), 6,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
  [743] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(19), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(139), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLONPROPERTIES_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(141), 9,
      anon_sym_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [777] = 9,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(79), 1,
      anon_sym_COLON,
    STATE(2), 1,
      sym_heading,
    STATE(26), 1,
      sym_drawer,
    STATE(43), 1,
      sym__org_block,
    STATE(71), 1,
      sym_stars,
    STATE(76), 1,
      sym__drawer_begin,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(81), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [819] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(19), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(145), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLONPROPERTIES_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(147), 9,
      anon_sym_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [853] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(153), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(19), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLONPROPERTIES_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(151), 9,
      anon_sym_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [887] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(19), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(156), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLONPROPERTIES_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(158), 9,
      anon_sym_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [921] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(19), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(160), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLONPROPERTIES_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(162), 9,
      anon_sym_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [955] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(19), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(164), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLONPROPERTIES_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(166), 9,
      anon_sym_COLON,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [989] = 9,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(79), 1,
      anon_sym_COLON,
    STATE(2), 1,
      sym_heading,
    STATE(25), 1,
      sym_drawer,
    STATE(49), 1,
      sym__org_block,
    STATE(71), 1,
      sym_stars,
    STATE(76), 1,
      sym__drawer_begin,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(170), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1031] = 5,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(176), 2,
      anon_sym_ATTR_,
      anon_sym_attr_,
    STATE(159), 2,
      sym__affiliated_keys,
      sym__affiliated_attr_keys,
    ACTIONS(174), 4,
      anon_sym_CAPTION,
      anon_sym_caption,
      anon_sym_RESULTS,
      anon_sym_results,
    ACTIONS(172), 12,
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
  [1063] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    STATE(2), 1,
      sym_heading,
    STATE(45), 1,
      sym__org_block,
    STATE(71), 1,
      sym_stars,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(180), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1096] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    STATE(2), 1,
      sym_heading,
    STATE(49), 1,
      sym__org_block,
    STATE(71), 1,
      sym_stars,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(170), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1129] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    STATE(2), 1,
      sym_heading,
    STATE(43), 1,
      sym__org_block,
    STATE(71), 1,
      sym_stars,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(81), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1162] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(184), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
    ACTIONS(182), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
  [1187] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(188), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
    ACTIONS(186), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
  [1212] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(192), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
  [1237] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(196), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
    ACTIONS(194), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
  [1262] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(200), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
    ACTIONS(198), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
  [1287] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(204), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
    ACTIONS(202), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
  [1312] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(208), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
    ACTIONS(206), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
  [1337] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(212), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
    ACTIONS(210), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
  [1362] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(216), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
    ACTIONS(214), 9,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
  [1387] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(218), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(220), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1411] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(210), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(212), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1435] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(222), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(224), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1459] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(186), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(188), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1483] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(206), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(208), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1507] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(202), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(204), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1531] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(170), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1555] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(226), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(228), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1579] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(230), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(232), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1603] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(192), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1627] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(194), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(196), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1651] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(234), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(236), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1675] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(180), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1699] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(238), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(240), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1723] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(242), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(244), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1747] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(81), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1771] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(246), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(248), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1795] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(198), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(200), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1819] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(250), 8,
      ts_builtin_sym_end,
      aux_sym_stars_token1,
      anon_sym_POUND_PLUS,
      anon_sym_LBRACKfn_COLON,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK_LBRACK,
      aux_sym_horizontal_rule_token1,
    ACTIONS(252), 8,
      aux_sym__text_markup_pre_token1,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_,
      aux_sym__plain_link_pre_token1,
      aux_sym_text_normal_token1,
  [1843] = 8,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(254), 1,
      anon_sym_STAR,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    ACTIONS(258), 1,
      anon_sym__,
    ACTIONS(260), 1,
      anon_sym_PLUS,
    ACTIONS(262), 1,
      aux_sym_text_sty_verbatim_token1,
    ACTIONS(264), 1,
      aux_sym_text_sty_code_token1,
    STATE(57), 6,
      sym_text_sty_bold,
      sym_text_sty_italic,
      sym_text_sty_underlined,
      sym_text_sty_strikethrough,
      sym_text_sty_verbatim,
      sym_text_sty_code,
  [1873] = 2,
    STATE(42), 1,
      sym__text_markup_post,
    ACTIONS(266), 12,
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
  [1891] = 2,
    STATE(33), 1,
      sym__text_markup_post,
    ACTIONS(268), 12,
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
  [1909] = 8,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(254), 1,
      anon_sym_STAR,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    ACTIONS(258), 1,
      anon_sym__,
    ACTIONS(260), 1,
      anon_sym_PLUS,
    ACTIONS(262), 1,
      aux_sym_text_sty_verbatim_token1,
    ACTIONS(264), 1,
      aux_sym_text_sty_code_token1,
    STATE(58), 6,
      sym_text_sty_bold,
      sym_text_sty_italic,
      sym_text_sty_underlined,
      sym_text_sty_strikethrough,
      sym_text_sty_verbatim,
      sym_text_sty_code,
  [1939] = 1,
    ACTIONS(270), 12,
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
  [1954] = 1,
    ACTIONS(272), 12,
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
  [1969] = 1,
    ACTIONS(274), 12,
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
  [1984] = 1,
    ACTIONS(276), 12,
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
  [1999] = 1,
    ACTIONS(278), 12,
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
  [2014] = 1,
    ACTIONS(280), 12,
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
  [2029] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(282), 1,
      sym__tag,
    STATE(91), 1,
      aux_sym_tags_repeat1,
    STATE(95), 1,
      sym_tags,
    ACTIONS(284), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(16), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [2050] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(282), 1,
      sym__tag,
    STATE(91), 1,
      aux_sym_tags_repeat1,
    STATE(94), 1,
      sym_tags,
    ACTIONS(286), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(20), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [2071] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(282), 1,
      sym__tag,
    STATE(90), 1,
      sym_tags,
    STATE(91), 1,
      aux_sym_tags_repeat1,
    ACTIONS(288), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(21), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [2092] = 8,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(290), 1,
      anon_sym_COLON,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    ACTIONS(294), 1,
      aux_sym_fn_inline_def_token1,
    ACTIONS(296), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(83), 1,
      aux_sym__char_num_underscore_hyphen,
    STATE(92), 1,
      sym_fn_label,
    STATE(137), 1,
      sym_fn_inline_def,
  [2117] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(282), 1,
      sym__tag,
    STATE(89), 1,
      sym_tags,
    STATE(91), 1,
      aux_sym_tags_repeat1,
    ACTIONS(298), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(18), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [2138] = 8,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(300), 1,
      aux_sym_headline_keyword_token1,
    ACTIONS(302), 1,
      sym_priority,
    ACTIONS(304), 1,
      sym_headline_comment,
    ACTIONS(306), 1,
      aux_sym_title_token1,
    STATE(67), 1,
      sym_title,
    STATE(80), 1,
      aux_sym_title_repeat1,
    STATE(81), 1,
      sym_headline_keyword,
  [2163] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(308), 1,
      aux_sym_title_token1,
    ACTIONS(310), 1,
      aux_sym__drawer_end_token1,
    STATE(48), 1,
      sym__drawer_end,
    STATE(73), 1,
      aux_sym__characters,
    STATE(82), 2,
      aux_sym__drawer_lines,
      sym__line,
  [2183] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(312), 1,
      aux_sym_title_token1,
    ACTIONS(314), 1,
      aux_sym__drawer_end_token1,
    STATE(78), 1,
      aux_sym__characters,
    STATE(135), 1,
      sym__linebreak,
    ACTIONS(316), 2,
      anon_sym_LF,
      anon_sym_CR,
  [2203] = 6,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(318), 1,
      aux_sym__drawer_end_token1,
    ACTIONS(320), 1,
      aux_sym__property_key_token1,
    STATE(36), 1,
      sym__drawer_end,
    STATE(136), 1,
      sym__property_key,
    STATE(75), 2,
      sym_node_property,
      aux_sym_property_drawer_repeat1,
  [2223] = 6,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(320), 1,
      aux_sym__property_key_token1,
    ACTIONS(322), 1,
      aux_sym__drawer_end_token1,
    STATE(28), 1,
      sym__drawer_end,
    STATE(136), 1,
      sym__property_key,
    STATE(79), 2,
      sym_node_property,
      aux_sym_property_drawer_repeat1,
  [2243] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(308), 1,
      aux_sym_title_token1,
    ACTIONS(324), 1,
      aux_sym__drawer_end_token1,
    STATE(44), 1,
      sym__drawer_end,
    STATE(73), 1,
      aux_sym__characters,
    STATE(72), 2,
      aux_sym__drawer_lines,
      sym__line,
  [2263] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    ACTIONS(330), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(77), 1,
      aux_sym__char_num_underscore_hyphen,
    ACTIONS(326), 2,
      anon_sym_COLON,
      aux_sym_fn_inline_def_token1,
  [2280] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(333), 1,
      aux_sym_title_token1,
    STATE(78), 1,
      aux_sym__characters,
    ACTIONS(336), 3,
      aux_sym__drawer_end_token1,
      anon_sym_LF,
      anon_sym_CR,
  [2295] = 5,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(338), 1,
      aux_sym__drawer_end_token1,
    ACTIONS(340), 1,
      aux_sym__property_key_token1,
    STATE(136), 1,
      sym__property_key,
    STATE(79), 2,
      sym_node_property,
      aux_sym_property_drawer_repeat1,
  [2312] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(343), 1,
      aux_sym_title_token1,
    STATE(85), 1,
      aux_sym_title_repeat1,
    ACTIONS(345), 3,
      sym__tag,
      anon_sym_LF,
      anon_sym_CR,
  [2327] = 6,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(306), 1,
      aux_sym_title_token1,
    ACTIONS(347), 1,
      sym_priority,
    ACTIONS(349), 1,
      sym_headline_comment,
    STATE(70), 1,
      sym_title,
    STATE(80), 1,
      aux_sym_title_repeat1,
  [2346] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(351), 1,
      aux_sym_title_token1,
    ACTIONS(354), 1,
      aux_sym__drawer_end_token1,
    STATE(73), 1,
      aux_sym__characters,
    STATE(82), 2,
      aux_sym__drawer_lines,
      sym__line,
  [2363] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    ACTIONS(360), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(77), 1,
      aux_sym__char_num_underscore_hyphen,
    ACTIONS(356), 2,
      anon_sym_COLON,
      aux_sym_fn_inline_def_token1,
  [2380] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(210), 5,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym__,
      anon_sym_PLUS,
  [2391] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(362), 1,
      aux_sym_title_token1,
    STATE(85), 1,
      aux_sym_title_repeat1,
    ACTIONS(365), 3,
      sym__tag,
      anon_sym_LF,
      anon_sym_CR,
  [2406] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(306), 1,
      aux_sym_title_token1,
    ACTIONS(349), 1,
      sym_headline_comment,
    STATE(70), 1,
      sym_title,
    STATE(80), 1,
      aux_sym_title_repeat1,
  [2422] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(306), 1,
      aux_sym_title_token1,
    ACTIONS(367), 1,
      sym_headline_comment,
    STATE(68), 1,
      sym_title,
    STATE(80), 1,
      aux_sym_title_repeat1,
  [2438] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(369), 1,
      sym__tag,
    STATE(88), 1,
      aux_sym_tags_repeat1,
    ACTIONS(372), 2,
      anon_sym_LF,
      anon_sym_CR,
  [2452] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(288), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(21), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [2464] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(284), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(16), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [2476] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(374), 1,
      sym__tag,
    STATE(88), 1,
      aux_sym_tags_repeat1,
    ACTIONS(376), 2,
      anon_sym_LF,
      anon_sym_CR,
  [2490] = 5,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(294), 1,
      aux_sym_fn_inline_def_token1,
    ACTIONS(378), 1,
      anon_sym_COLON,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_fn_inline_def,
  [2506] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(382), 2,
      aux_sym_headline_keyword_token1,
      sym_priority,
    ACTIONS(384), 2,
      sym_headline_comment,
      aux_sym_title_token1,
  [2518] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(298), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(18), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [2530] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(386), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(22), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [2542] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(388), 1,
      aux_sym_title_token1,
    STATE(70), 1,
      sym_title,
    STATE(80), 1,
      aux_sym_title_repeat1,
  [2555] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(390), 1,
      anon_sym_COLON,
    ACTIONS(392), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(107), 1,
      aux_sym__char_num_underscore_hyphen,
  [2568] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(394), 1,
      aux_sym_regular_link_protocol_path_token1,
    STATE(110), 1,
      aux_sym_regular_link_protocol_path_repeat1,
    STATE(167), 1,
      sym_regular_link_protocol_path,
  [2581] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(396), 1,
      aux_sym_filename_token2,
    ACTIONS(398), 1,
      aux_sym_filename_token3,
    STATE(116), 1,
      aux_sym_filename_repeat1,
  [2594] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(400), 1,
      anon_sym_RBRACK,
    ACTIONS(402), 1,
      aux_sym_id_link_token1,
    STATE(100), 1,
      aux_sym_id_link_repeat1,
  [2607] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
    ACTIONS(407), 1,
      aux_sym_regular_link_protocol_path_token1,
    STATE(101), 1,
      aux_sym_regular_link_protocol_path_repeat1,
  [2620] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(412), 1,
      aux_sym_title_token1,
    ACTIONS(410), 2,
      sym_priority,
      sym_headline_comment,
  [2631] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(392), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    ACTIONS(414), 1,
      anon_sym_COLON,
    STATE(107), 1,
      aux_sym__char_num_underscore_hyphen,
  [2644] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(416), 1,
      aux_sym_text_normal_token1,
    STATE(146), 2,
      sym__text_inside_sty_normal,
      sym_text_normal,
  [2655] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(388), 1,
      aux_sym_title_token1,
    STATE(68), 1,
      sym_title,
    STATE(80), 1,
      aux_sym_title_repeat1,
  [2668] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(416), 1,
      aux_sym_text_normal_token1,
    STATE(141), 2,
      sym__text_inside_sty_normal,
      sym_text_normal,
  [2679] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(328), 1,
      anon_sym_COLON,
    ACTIONS(418), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(107), 1,
      aux_sym__char_num_underscore_hyphen,
  [2692] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(421), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(103), 1,
      aux_sym__char_num_underscore_hyphen,
    STATE(166), 1,
      sym__attr_backend,
  [2705] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    STATE(139), 1,
      sym_regular_link_description,
  [2718] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
    ACTIONS(429), 1,
      aux_sym_regular_link_protocol_path_token1,
    STATE(101), 1,
      aux_sym_regular_link_protocol_path_repeat1,
  [2731] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    STATE(133), 1,
      sym__linebreak,
    ACTIONS(431), 2,
      anon_sym_LF,
      anon_sym_CR,
  [2742] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    ACTIONS(435), 1,
      aux_sym_id_link_token1,
    STATE(100), 1,
      aux_sym_id_link_repeat1,
  [2755] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(416), 1,
      aux_sym_text_normal_token1,
    STATE(163), 2,
      sym__text_inside_sty_normal,
      sym_text_normal,
  [2766] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(416), 1,
      aux_sym_text_normal_token1,
    STATE(155), 2,
      sym__text_inside_sty_normal,
      sym_text_normal,
  [2777] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(294), 1,
      aux_sym_fn_inline_def_token1,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_fn_inline_def,
  [2790] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(437), 1,
      aux_sym_filename_token2,
    ACTIONS(440), 1,
      aux_sym_filename_token3,
    STATE(116), 1,
      aux_sym_filename_repeat1,
  [2803] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(388), 1,
      aux_sym_title_token1,
    STATE(66), 1,
      sym_title,
    STATE(80), 1,
      aux_sym_title_repeat1,
  [2816] = 4,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(294), 1,
      aux_sym_fn_inline_def_token1,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_fn_inline_def,
  [2829] = 4,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_regular_link_description,
  [2842] = 3,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(446), 1,
      aux_sym_id_link_token1,
    STATE(112), 1,
      aux_sym_id_link_repeat1,
  [2852] = 3,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(448), 1,
      aux_sym_plain_link_path_token1,
    STATE(125), 1,
      sym_plain_link_path,
  [2862] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(450), 1,
      aux_sym__affiliated_value_token1,
    STATE(39), 1,
      sym__affiliated_value,
  [2872] = 3,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(452), 1,
      anon_sym_COLON,
    ACTIONS(454), 1,
      aux_sym__affiliated_keys_token1,
  [2882] = 3,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(448), 1,
      aux_sym_plain_link_path_token1,
    STATE(127), 1,
      sym_plain_link_path,
  [2892] = 3,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(456), 1,
      aux_sym__plain_link_pre_token1,
    STATE(40), 1,
      sym__plain_link_post,
  [2902] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(458), 1,
      aux_sym_angle_link_path_token1,
    STATE(156), 1,
      sym_angle_link_path,
  [2912] = 3,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(460), 1,
      aux_sym__plain_link_pre_token1,
    STATE(29), 1,
      sym__plain_link_post,
  [2922] = 3,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(462), 1,
      aux_sym_filename_token1,
    STATE(167), 1,
      sym_filename,
  [2932] = 3,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(464), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(97), 1,
      aux_sym__char_num_underscore_hyphen,
  [2942] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(416), 1,
      aux_sym_text_normal_token1,
    STATE(140), 1,
      sym_text_normal,
  [2952] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(458), 1,
      aux_sym_angle_link_path_token1,
    STATE(144), 1,
      sym_angle_link_path,
  [2962] = 3,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(466), 1,
      aux_sym_filename_token2,
    STATE(99), 1,
      aux_sym_filename_repeat1,
  [2972] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(468), 2,
      aux_sym__drawer_end_token1,
      aux_sym__property_key_token1,
  [2980] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(470), 1,
      aux_sym_title_token1,
    ACTIONS(472), 1,
      aux_sym__drawer_end_token1,
  [2990] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(474), 1,
      aux_sym_title_token1,
    ACTIONS(476), 1,
      aux_sym__drawer_end_token1,
  [3000] = 3,
    ACTIONS(3), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(478), 1,
      aux_sym__property_value_token1,
    STATE(111), 1,
      sym__property_value,
  [3010] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
  [3017] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
  [3024] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
  [3031] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
  [3038] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(486), 1,
      anon_sym_SLASH,
  [3045] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
  [3052] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
  [3059] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(492), 1,
      anon_sym_GT,
  [3066] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(494), 1,
      aux_sym_regular_link_protocol_path_token1,
  [3073] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(496), 1,
      anon_sym_STAR,
  [3080] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(498), 1,
      anon_sym_GT,
  [3087] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
  [3094] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(502), 1,
      anon_sym_COLON,
  [3101] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
  [3108] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
  [3115] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
  [3122] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(510), 1,
      anon_sym_COLON,
  [3129] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
  [3136] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(512), 1,
      anon_sym_PLUS,
  [3143] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(514), 1,
      anon_sym_GT,
  [3150] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
  [3157] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(518), 1,
      anon_sym_COLON,
  [3164] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(520), 1,
      anon_sym_COLON,
  [3171] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
  [3178] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(524), 1,
      anon_sym_COLON,
  [3185] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(526), 1,
      aux_sym__plain_link_pre_token1,
  [3192] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(528), 1,
      anon_sym__,
  [3199] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(530), 1,
      anon_sym_COLON,
  [3206] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(532), 1,
      anon_sym_COLON,
  [3213] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(534), 1,
      anon_sym_COLON,
  [3220] = 2,
    ACTIONS(65), 1,
      aux_sym__text_markup_post_token1,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 246,
  [SMALL_STATE(7)] = 319,
  [SMALL_STATE(8)] = 381,
  [SMALL_STATE(9)] = 420,
  [SMALL_STATE(10)] = 459,
  [SMALL_STATE(11)] = 498,
  [SMALL_STATE(12)] = 537,
  [SMALL_STATE(13)] = 589,
  [SMALL_STATE(14)] = 641,
  [SMALL_STATE(15)] = 692,
  [SMALL_STATE(16)] = 743,
  [SMALL_STATE(17)] = 777,
  [SMALL_STATE(18)] = 819,
  [SMALL_STATE(19)] = 853,
  [SMALL_STATE(20)] = 887,
  [SMALL_STATE(21)] = 921,
  [SMALL_STATE(22)] = 955,
  [SMALL_STATE(23)] = 989,
  [SMALL_STATE(24)] = 1031,
  [SMALL_STATE(25)] = 1063,
  [SMALL_STATE(26)] = 1096,
  [SMALL_STATE(27)] = 1129,
  [SMALL_STATE(28)] = 1162,
  [SMALL_STATE(29)] = 1187,
  [SMALL_STATE(30)] = 1212,
  [SMALL_STATE(31)] = 1237,
  [SMALL_STATE(32)] = 1262,
  [SMALL_STATE(33)] = 1287,
  [SMALL_STATE(34)] = 1312,
  [SMALL_STATE(35)] = 1337,
  [SMALL_STATE(36)] = 1362,
  [SMALL_STATE(37)] = 1387,
  [SMALL_STATE(38)] = 1411,
  [SMALL_STATE(39)] = 1435,
  [SMALL_STATE(40)] = 1459,
  [SMALL_STATE(41)] = 1483,
  [SMALL_STATE(42)] = 1507,
  [SMALL_STATE(43)] = 1531,
  [SMALL_STATE(44)] = 1555,
  [SMALL_STATE(45)] = 1579,
  [SMALL_STATE(46)] = 1603,
  [SMALL_STATE(47)] = 1627,
  [SMALL_STATE(48)] = 1651,
  [SMALL_STATE(49)] = 1675,
  [SMALL_STATE(50)] = 1699,
  [SMALL_STATE(51)] = 1723,
  [SMALL_STATE(52)] = 1747,
  [SMALL_STATE(53)] = 1771,
  [SMALL_STATE(54)] = 1795,
  [SMALL_STATE(55)] = 1819,
  [SMALL_STATE(56)] = 1843,
  [SMALL_STATE(57)] = 1873,
  [SMALL_STATE(58)] = 1891,
  [SMALL_STATE(59)] = 1909,
  [SMALL_STATE(60)] = 1939,
  [SMALL_STATE(61)] = 1954,
  [SMALL_STATE(62)] = 1969,
  [SMALL_STATE(63)] = 1984,
  [SMALL_STATE(64)] = 1999,
  [SMALL_STATE(65)] = 2014,
  [SMALL_STATE(66)] = 2029,
  [SMALL_STATE(67)] = 2050,
  [SMALL_STATE(68)] = 2071,
  [SMALL_STATE(69)] = 2092,
  [SMALL_STATE(70)] = 2117,
  [SMALL_STATE(71)] = 2138,
  [SMALL_STATE(72)] = 2163,
  [SMALL_STATE(73)] = 2183,
  [SMALL_STATE(74)] = 2203,
  [SMALL_STATE(75)] = 2223,
  [SMALL_STATE(76)] = 2243,
  [SMALL_STATE(77)] = 2263,
  [SMALL_STATE(78)] = 2280,
  [SMALL_STATE(79)] = 2295,
  [SMALL_STATE(80)] = 2312,
  [SMALL_STATE(81)] = 2327,
  [SMALL_STATE(82)] = 2346,
  [SMALL_STATE(83)] = 2363,
  [SMALL_STATE(84)] = 2380,
  [SMALL_STATE(85)] = 2391,
  [SMALL_STATE(86)] = 2406,
  [SMALL_STATE(87)] = 2422,
  [SMALL_STATE(88)] = 2438,
  [SMALL_STATE(89)] = 2452,
  [SMALL_STATE(90)] = 2464,
  [SMALL_STATE(91)] = 2476,
  [SMALL_STATE(92)] = 2490,
  [SMALL_STATE(93)] = 2506,
  [SMALL_STATE(94)] = 2518,
  [SMALL_STATE(95)] = 2530,
  [SMALL_STATE(96)] = 2542,
  [SMALL_STATE(97)] = 2555,
  [SMALL_STATE(98)] = 2568,
  [SMALL_STATE(99)] = 2581,
  [SMALL_STATE(100)] = 2594,
  [SMALL_STATE(101)] = 2607,
  [SMALL_STATE(102)] = 2620,
  [SMALL_STATE(103)] = 2631,
  [SMALL_STATE(104)] = 2644,
  [SMALL_STATE(105)] = 2655,
  [SMALL_STATE(106)] = 2668,
  [SMALL_STATE(107)] = 2679,
  [SMALL_STATE(108)] = 2692,
  [SMALL_STATE(109)] = 2705,
  [SMALL_STATE(110)] = 2718,
  [SMALL_STATE(111)] = 2731,
  [SMALL_STATE(112)] = 2742,
  [SMALL_STATE(113)] = 2755,
  [SMALL_STATE(114)] = 2766,
  [SMALL_STATE(115)] = 2777,
  [SMALL_STATE(116)] = 2790,
  [SMALL_STATE(117)] = 2803,
  [SMALL_STATE(118)] = 2816,
  [SMALL_STATE(119)] = 2829,
  [SMALL_STATE(120)] = 2842,
  [SMALL_STATE(121)] = 2852,
  [SMALL_STATE(122)] = 2862,
  [SMALL_STATE(123)] = 2872,
  [SMALL_STATE(124)] = 2882,
  [SMALL_STATE(125)] = 2892,
  [SMALL_STATE(126)] = 2902,
  [SMALL_STATE(127)] = 2912,
  [SMALL_STATE(128)] = 2922,
  [SMALL_STATE(129)] = 2932,
  [SMALL_STATE(130)] = 2942,
  [SMALL_STATE(131)] = 2952,
  [SMALL_STATE(132)] = 2962,
  [SMALL_STATE(133)] = 2972,
  [SMALL_STATE(134)] = 2980,
  [SMALL_STATE(135)] = 2990,
  [SMALL_STATE(136)] = 3000,
  [SMALL_STATE(137)] = 3010,
  [SMALL_STATE(138)] = 3017,
  [SMALL_STATE(139)] = 3024,
  [SMALL_STATE(140)] = 3031,
  [SMALL_STATE(141)] = 3038,
  [SMALL_STATE(142)] = 3045,
  [SMALL_STATE(143)] = 3052,
  [SMALL_STATE(144)] = 3059,
  [SMALL_STATE(145)] = 3066,
  [SMALL_STATE(146)] = 3073,
  [SMALL_STATE(147)] = 3080,
  [SMALL_STATE(148)] = 3087,
  [SMALL_STATE(149)] = 3094,
  [SMALL_STATE(150)] = 3101,
  [SMALL_STATE(151)] = 3108,
  [SMALL_STATE(152)] = 3115,
  [SMALL_STATE(153)] = 3122,
  [SMALL_STATE(154)] = 3129,
  [SMALL_STATE(155)] = 3136,
  [SMALL_STATE(156)] = 3143,
  [SMALL_STATE(157)] = 3150,
  [SMALL_STATE(158)] = 3157,
  [SMALL_STATE(159)] = 3164,
  [SMALL_STATE(160)] = 3171,
  [SMALL_STATE(161)] = 3178,
  [SMALL_STATE(162)] = 3185,
  [SMALL_STATE(163)] = 3192,
  [SMALL_STATE(164)] = 3199,
  [SMALL_STATE(165)] = 3206,
  [SMALL_STATE(166)] = 3213,
  [SMALL_STATE(167)] = 3220,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__org_block, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__org_block, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__org_block, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__org_block, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(59),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(59),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(10),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(8),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(5),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(35),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(56),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(56),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(9),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(11),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(4),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(38),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 6),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 6),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(19),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 7),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__org_block, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__org_block, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__org_block, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__org_block, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_drawer, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_drawer, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_link_plain, 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_link_plain, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_link_regular, 5),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_link_regular, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_link_angle, 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_link_angle, 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_link_regular, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_link_regular, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_styled, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_styled, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_link, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_link, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_normal, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_normal, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_drawer, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_drawer, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_affiliated_properties, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_affiliated_properties, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drawer, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drawer, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__org_block, 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__org_block, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drawer, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drawer, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote_link, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote_link, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote_link, 5),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote_link, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote_link, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote_link, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote_link, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote_link, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_sty_italic, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_sty_bold, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_sty_underlined, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_sty_strikethrough, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_sty_code, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_sty_verbatim, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__char_num_underscore_hyphen, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__char_num_underscore_hyphen, 2),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__char_num_underscore_hyphen, 2), SHIFT_REPEAT(77),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__characters, 2), SHIFT_REPEAT(78),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__characters, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_drawer_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_drawer_repeat1, 2), SHIFT_REPEAT(136),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__drawer_lines, 2), SHIFT_REPEAT(73),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__drawer_lines, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_label, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_label, 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_repeat1, 2), SHIFT_REPEAT(85),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2), SHIFT_REPEAT(88),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stars, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stars, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_link_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_link_repeat1, 2), SHIFT_REPEAT(100),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_regular_link_protocol_path_repeat1, 2),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regular_link_protocol_path_repeat1, 2), SHIFT_REPEAT(101),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline_keyword, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline_keyword, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_backend, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__char_num_underscore_hyphen, 2), SHIFT_REPEAT(107),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_link_protocol_path, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_link, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(116),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affiliated_keys, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_property, 3),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__drawer_begin, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__drawer_begin, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_link_path, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_protocol, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_link_path, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_inline_def, 1),
  [506] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_link_description, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_protocol, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affiliated_keys, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_link_path, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affiliated_attr_keys, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_link_path, 2),
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
