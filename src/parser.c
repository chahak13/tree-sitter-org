#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_STAR = 1,
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
  aux_sym_horizontal_rule_token1 = 33,
  anon_sym_LF = 34,
  anon_sym_CR = 35,
  aux_sym__char_num_underscore_hyphen_token1 = 36,
  sym_document = 37,
  sym_heading = 38,
  sym_stars = 39,
  sym_headline_keyword = 40,
  sym_title = 41,
  sym_tags = 42,
  sym_affiliated_properties = 43,
  sym__affiliated_keys = 44,
  sym__affiliated_attr_keys = 45,
  sym__attr_backend = 46,
  sym__affiliated_value = 47,
  sym_drawer = 48,
  sym__drawer_begin = 49,
  aux_sym__drawer_lines = 50,
  sym__drawer_end = 51,
  sym_property_drawer = 52,
  sym__property_drawer_begin = 53,
  sym__node_property = 54,
  sym__property_name = 55,
  sym__property_value = 56,
  sym_horizontal_rule = 57,
  sym__line = 58,
  aux_sym__characters = 59,
  sym__linebreak = 60,
  aux_sym__char_num_underscore_hyphen = 61,
  aux_sym_document_repeat1 = 62,
  aux_sym_heading_repeat1 = 63,
  aux_sym_stars_repeat1 = 64,
  aux_sym_headline_keyword_repeat1 = 65,
  aux_sym_title_repeat1 = 66,
  aux_sym_tags_repeat1 = 67,
  aux_sym_property_drawer_repeat1 = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_STAR] = "*",
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
  [sym_horizontal_rule] = "horizontal_rule",
  [sym__line] = "_line",
  [aux_sym__characters] = "_characters",
  [sym__linebreak] = "_linebreak",
  [aux_sym__char_num_underscore_hyphen] = "_char_num_underscore_hyphen",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_heading_repeat1] = "heading_repeat1",
  [aux_sym_stars_repeat1] = "stars_repeat1",
  [aux_sym_headline_keyword_repeat1] = "headline_keyword_repeat1",
  [aux_sym_title_repeat1] = "title_repeat1",
  [aux_sym_tags_repeat1] = "tags_repeat1",
  [aux_sym_property_drawer_repeat1] = "property_drawer_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_STAR] = anon_sym_STAR,
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
  [sym_horizontal_rule] = sym_horizontal_rule,
  [sym__line] = sym__line,
  [aux_sym__characters] = aux_sym__characters,
  [sym__linebreak] = sym__linebreak,
  [aux_sym__char_num_underscore_hyphen] = aux_sym__char_num_underscore_hyphen,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_heading_repeat1] = aux_sym_heading_repeat1,
  [aux_sym_stars_repeat1] = aux_sym_stars_repeat1,
  [aux_sym_headline_keyword_repeat1] = aux_sym_headline_keyword_repeat1,
  [aux_sym_title_repeat1] = aux_sym_title_repeat1,
  [aux_sym_tags_repeat1] = aux_sym_tags_repeat1,
  [aux_sym_property_drawer_repeat1] = aux_sym_property_drawer_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
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
  [aux_sym_stars_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_headline_keyword_repeat1] = {
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
      if (eof) ADVANCE(129);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == '0' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(182);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == 'C') ADVANCE(132);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == 'C') ADVANCE(132);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\r') ADVANCE(183);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(171);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(80);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(149);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(174);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(123);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'C') ADVANCE(30);
      if (lookahead == 'D') ADVANCE(31);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(46);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'T') ADVANCE(45);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(175);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(173);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'H') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 'L') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(76);
      END_STATE();
    case 49:
      if (lookahead == 'M') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == 'N') ADVANCE(164);
      END_STATE();
    case 53:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'P') ADVANCE(37);
      END_STATE();
    case 59:
      if (lookahead == 'P') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'R') ADVANCE(158);
      END_STATE();
    case 64:
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 65:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 66:
      if (lookahead == 'S') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == 'S') ADVANCE(167);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(156);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 72:
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == 'U') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 74:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 75:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 76:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 77:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 78:
      if (lookahead == 'U') ADVANCE(48);
      END_STATE();
    case 79:
      if (lookahead == ']') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == ']') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == ']') ADVANCE(133);
      END_STATE();
    case 82:
      if (lookahead == ']') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(169);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(170);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != ':') ADVANCE(16);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 127:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(80);
      END_STATE();
    case 128:
      if (eof) ADVANCE(129);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(182);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128)
      END_STATE();
    case 129:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_headline_keyword_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_headline_keyword_token1);
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_priority);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_headline_comment);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_title_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\r') ADVANCE(183);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '#') ADVANCE(125);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == 'C') ADVANCE(132);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == 'C') ADVANCE(132);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__tag);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_POUND_PLUS);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'P') ADVANCE(60);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_HEADER);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_NAME);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PLOT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_plot);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_AUTHOR);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_author);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DATE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_TITLE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_CAPTION);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_caption);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__affiliated_keys_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_RESULTS);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_results);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_ATTR_);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_attr_);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__affiliated_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__affiliated_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__drawer_end_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COLONPROPERTIES_COLON);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__property_name_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__property_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__property_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\r') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '\r') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '\r') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__char_num_underscore_hyphen_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 128},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 128},
  [4] = {.lex_state = 128},
  [5] = {.lex_state = 128},
  [6] = {.lex_state = 128},
  [7] = {.lex_state = 128},
  [8] = {.lex_state = 128},
  [9] = {.lex_state = 128},
  [10] = {.lex_state = 128},
  [11] = {.lex_state = 128},
  [12] = {.lex_state = 128},
  [13] = {.lex_state = 128},
  [14] = {.lex_state = 128},
  [15] = {.lex_state = 128},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 128},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 128},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 128},
  [42] = {.lex_state = 128},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 128},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 128},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 23},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_headline_keyword_token1] = ACTIONS(1),
    [sym_priority] = ACTIONS(1),
    [anon_sym_POUND_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__affiliated_keys_token1] = ACTIONS(1),
    [anon_sym_COLONPROPERTIES_COLON] = ACTIONS(1),
    [aux_sym__char_num_underscore_hyphen_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(63),
    [sym_heading] = STATE(4),
    [sym_stars] = STATE(16),
    [sym_affiliated_properties] = STATE(4),
    [sym_drawer] = STATE(4),
    [sym__drawer_begin] = STATE(28),
    [sym_property_drawer] = STATE(4),
    [sym__property_drawer_begin] = STATE(27),
    [sym_horizontal_rule] = STATE(4),
    [sym__linebreak] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_stars_repeat1] = STATE(22),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_POUND_PLUS] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_COLONPROPERTIES_COLON] = ACTIONS(9),
    [aux_sym_horizontal_rule_token1] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_CR] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 2,
      anon_sym_ATTR_,
      anon_sym_attr_,
    STATE(62), 2,
      sym__affiliated_keys,
      sym__affiliated_attr_keys,
    ACTIONS(17), 4,
      anon_sym_CAPTION,
      anon_sym_caption,
      anon_sym_RESULTS,
      anon_sym_results,
    ACTIONS(15), 12,
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
  [29] = 12,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(26), 1,
      anon_sym_POUND_PLUS,
    ACTIONS(29), 1,
      anon_sym_COLON,
    ACTIONS(32), 1,
      anon_sym_COLONPROPERTIES_COLON,
    ACTIONS(35), 1,
      aux_sym_horizontal_rule_token1,
    STATE(16), 1,
      sym_stars,
    STATE(22), 1,
      aux_sym_stars_repeat1,
    STATE(27), 1,
      sym__property_drawer_begin,
    STATE(28), 1,
      sym__drawer_begin,
    ACTIONS(38), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(3), 7,
      sym_heading,
      sym_affiliated_properties,
      sym_drawer,
      sym_property_drawer,
      sym_horizontal_rule,
      sym__linebreak,
      aux_sym_document_repeat1,
  [73] = 12,
    ACTIONS(3), 1,
      anon_sym_STAR,
    ACTIONS(5), 1,
      anon_sym_POUND_PLUS,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_COLONPROPERTIES_COLON,
    ACTIONS(11), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_stars,
    STATE(22), 1,
      aux_sym_stars_repeat1,
    STATE(27), 1,
      sym__property_drawer_begin,
    STATE(28), 1,
      sym__drawer_begin,
    ACTIONS(43), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(3), 7,
      sym_heading,
      sym_affiliated_properties,
      sym_drawer,
      sym_property_drawer,
      sym_horizontal_rule,
      sym__linebreak,
      aux_sym_document_repeat1,
  [117] = 3,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(47), 7,
      anon_sym_STAR,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
  [134] = 3,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(51), 7,
      anon_sym_STAR,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
  [151] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(55), 7,
      anon_sym_STAR,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
  [168] = 4,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(8), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(59), 5,
      anon_sym_STAR,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym_horizontal_rule_token1,
  [187] = 3,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(66), 7,
      anon_sym_STAR,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
  [204] = 3,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
    ACTIONS(70), 7,
      anon_sym_STAR,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
  [221] = 2,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 7,
      anon_sym_STAR,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
  [234] = 2,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 7,
      anon_sym_STAR,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
  [247] = 2,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 7,
      anon_sym_STAR,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
  [260] = 2,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 7,
      anon_sym_STAR,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
  [273] = 2,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 7,
      anon_sym_STAR,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
  [286] = 8,
    ACTIONS(92), 1,
      aux_sym_headline_keyword_token1,
    ACTIONS(94), 1,
      sym_priority,
    ACTIONS(96), 1,
      sym_headline_comment,
    ACTIONS(98), 1,
      aux_sym_title_token1,
    STATE(18), 1,
      sym_title,
    STATE(29), 1,
      sym_headline_keyword,
    STATE(30), 1,
      aux_sym_title_repeat1,
    STATE(34), 1,
      aux_sym_headline_keyword_repeat1,
  [311] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 7,
      anon_sym_STAR,
      anon_sym_POUND_PLUS,
      anon_sym_COLON,
      anon_sym_COLONPROPERTIES_COLON,
      aux_sym_horizontal_rule_token1,
      anon_sym_LF,
      anon_sym_CR,
  [324] = 5,
    ACTIONS(104), 1,
      sym__tag,
    STATE(38), 1,
      aux_sym_tags_repeat1,
    STATE(41), 1,
      sym_tags,
    ACTIONS(106), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(7), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [342] = 5,
    ACTIONS(104), 1,
      sym__tag,
    STATE(38), 1,
      aux_sym_tags_repeat1,
    STATE(42), 1,
      sym_tags,
    ACTIONS(108), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(9), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [360] = 5,
    ACTIONS(104), 1,
      sym__tag,
    STATE(38), 1,
      aux_sym_tags_repeat1,
    STATE(39), 1,
      sym_tags,
    ACTIONS(110), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(6), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [378] = 5,
    ACTIONS(104), 1,
      sym__tag,
    STATE(38), 1,
      aux_sym_tags_repeat1,
    STATE(44), 1,
      sym_tags,
    ACTIONS(112), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(5), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [396] = 3,
    ACTIONS(114), 1,
      anon_sym_STAR,
    STATE(26), 1,
      aux_sym_stars_repeat1,
    ACTIONS(116), 4,
      aux_sym_headline_keyword_token1,
      sym_priority,
      sym_headline_comment,
      aux_sym_title_token1,
  [409] = 5,
    ACTIONS(118), 1,
      aux_sym_title_token1,
    ACTIONS(120), 1,
      aux_sym__drawer_end_token1,
    STATE(33), 1,
      aux_sym__characters,
    STATE(57), 1,
      sym__linebreak,
    ACTIONS(122), 2,
      anon_sym_LF,
      anon_sym_CR,
  [426] = 5,
    ACTIONS(124), 1,
      aux_sym_title_token1,
    ACTIONS(126), 1,
      aux_sym__drawer_end_token1,
    STATE(13), 1,
      sym__drawer_end,
    STATE(23), 1,
      aux_sym__characters,
    STATE(31), 2,
      aux_sym__drawer_lines,
      sym__line,
  [443] = 5,
    ACTIONS(128), 1,
      aux_sym__drawer_end_token1,
    ACTIONS(130), 1,
      aux_sym__property_name_token1,
    STATE(12), 1,
      sym__drawer_end,
    STATE(55), 1,
      sym__property_name,
    STATE(32), 2,
      sym__node_property,
      aux_sym_property_drawer_repeat1,
  [460] = 3,
    ACTIONS(132), 1,
      anon_sym_STAR,
    STATE(26), 1,
      aux_sym_stars_repeat1,
    ACTIONS(135), 4,
      aux_sym_headline_keyword_token1,
      sym_priority,
      sym_headline_comment,
      aux_sym_title_token1,
  [473] = 5,
    ACTIONS(130), 1,
      aux_sym__property_name_token1,
    ACTIONS(137), 1,
      aux_sym__drawer_end_token1,
    STATE(15), 1,
      sym__drawer_end,
    STATE(55), 1,
      sym__property_name,
    STATE(25), 2,
      sym__node_property,
      aux_sym_property_drawer_repeat1,
  [490] = 5,
    ACTIONS(124), 1,
      aux_sym_title_token1,
    ACTIONS(139), 1,
      aux_sym__drawer_end_token1,
    STATE(11), 1,
      sym__drawer_end,
    STATE(23), 1,
      aux_sym__characters,
    STATE(24), 2,
      aux_sym__drawer_lines,
      sym__line,
  [507] = 5,
    ACTIONS(98), 1,
      aux_sym_title_token1,
    ACTIONS(141), 1,
      sym_priority,
    ACTIONS(143), 1,
      sym_headline_comment,
    STATE(21), 1,
      sym_title,
    STATE(30), 1,
      aux_sym_title_repeat1,
  [523] = 3,
    ACTIONS(145), 1,
      aux_sym_title_token1,
    STATE(36), 1,
      aux_sym_title_repeat1,
    ACTIONS(147), 3,
      sym__tag,
      anon_sym_LF,
      anon_sym_CR,
  [535] = 4,
    ACTIONS(149), 1,
      aux_sym_title_token1,
    ACTIONS(152), 1,
      aux_sym__drawer_end_token1,
    STATE(23), 1,
      aux_sym__characters,
    STATE(31), 2,
      aux_sym__drawer_lines,
      sym__line,
  [549] = 4,
    ACTIONS(154), 1,
      aux_sym__drawer_end_token1,
    ACTIONS(156), 1,
      aux_sym__property_name_token1,
    STATE(55), 1,
      sym__property_name,
    STATE(32), 2,
      sym__node_property,
      aux_sym_property_drawer_repeat1,
  [563] = 3,
    ACTIONS(159), 1,
      aux_sym_title_token1,
    STATE(33), 1,
      aux_sym__characters,
    ACTIONS(162), 3,
      aux_sym__drawer_end_token1,
      anon_sym_LF,
      anon_sym_CR,
  [575] = 3,
    ACTIONS(164), 1,
      aux_sym_headline_keyword_token1,
    STATE(35), 1,
      aux_sym_headline_keyword_repeat1,
    ACTIONS(166), 3,
      sym_priority,
      sym_headline_comment,
      aux_sym_title_token1,
  [587] = 3,
    ACTIONS(168), 1,
      aux_sym_headline_keyword_token1,
    STATE(35), 1,
      aux_sym_headline_keyword_repeat1,
    ACTIONS(171), 3,
      sym_priority,
      sym_headline_comment,
      aux_sym_title_token1,
  [599] = 3,
    ACTIONS(173), 1,
      aux_sym_title_token1,
    STATE(36), 1,
      aux_sym_title_repeat1,
    ACTIONS(176), 3,
      sym__tag,
      anon_sym_LF,
      anon_sym_CR,
  [611] = 4,
    ACTIONS(98), 1,
      aux_sym_title_token1,
    ACTIONS(143), 1,
      sym_headline_comment,
    STATE(21), 1,
      sym_title,
    STATE(30), 1,
      aux_sym_title_repeat1,
  [624] = 3,
    ACTIONS(178), 1,
      sym__tag,
    STATE(43), 1,
      aux_sym_tags_repeat1,
    ACTIONS(180), 2,
      anon_sym_LF,
      anon_sym_CR,
  [635] = 2,
    ACTIONS(182), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(10), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [644] = 4,
    ACTIONS(98), 1,
      aux_sym_title_token1,
    ACTIONS(184), 1,
      sym_headline_comment,
    STATE(19), 1,
      sym_title,
    STATE(30), 1,
      aux_sym_title_repeat1,
  [657] = 2,
    ACTIONS(112), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(5), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [666] = 2,
    ACTIONS(110), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(6), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [675] = 3,
    ACTIONS(186), 1,
      sym__tag,
    STATE(43), 1,
      aux_sym_tags_repeat1,
    ACTIONS(189), 2,
      anon_sym_LF,
      anon_sym_CR,
  [686] = 2,
    ACTIONS(108), 2,
      anon_sym_LF,
      anon_sym_CR,
    STATE(9), 2,
      sym__linebreak,
      aux_sym_heading_repeat1,
  [695] = 3,
    ACTIONS(191), 1,
      aux_sym_title_token1,
    STATE(21), 1,
      sym_title,
    STATE(30), 1,
      aux_sym_title_repeat1,
  [705] = 3,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(46), 1,
      aux_sym__char_num_underscore_hyphen,
  [715] = 3,
    ACTIONS(191), 1,
      aux_sym_title_token1,
    STATE(19), 1,
      sym_title,
    STATE(30), 1,
      aux_sym_title_repeat1,
  [725] = 3,
    ACTIONS(198), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(50), 1,
      aux_sym__char_num_underscore_hyphen,
    STATE(61), 1,
      sym__attr_backend,
  [735] = 2,
    STATE(56), 1,
      sym__linebreak,
    ACTIONS(200), 2,
      anon_sym_LF,
      anon_sym_CR,
  [743] = 3,
    ACTIONS(202), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(46), 1,
      aux_sym__char_num_underscore_hyphen,
  [753] = 3,
    ACTIONS(204), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    ACTIONS(206), 1,
      anon_sym_COLON,
    STATE(46), 1,
      aux_sym__char_num_underscore_hyphen,
  [763] = 3,
    ACTIONS(191), 1,
      aux_sym_title_token1,
    STATE(20), 1,
      sym_title,
    STATE(30), 1,
      aux_sym_title_repeat1,
  [773] = 2,
    ACTIONS(208), 1,
      aux_sym__char_num_underscore_hyphen_token1,
    STATE(51), 1,
      aux_sym__char_num_underscore_hyphen,
  [780] = 1,
    ACTIONS(210), 2,
      aux_sym_title_token1,
      aux_sym__drawer_end_token1,
  [785] = 2,
    ACTIONS(212), 1,
      aux_sym__property_value_token1,
    STATE(49), 1,
      sym__property_value,
  [792] = 2,
    ACTIONS(214), 1,
      aux_sym__drawer_end_token1,
    ACTIONS(216), 1,
      aux_sym__property_name_token1,
  [799] = 1,
    ACTIONS(218), 2,
      aux_sym_title_token1,
      aux_sym__drawer_end_token1,
  [804] = 2,
    ACTIONS(220), 1,
      anon_sym_COLON,
    ACTIONS(222), 1,
      aux_sym__affiliated_keys_token1,
  [811] = 2,
    ACTIONS(224), 1,
      aux_sym__affiliated_value_token1,
    STATE(14), 1,
      sym__affiliated_value,
  [818] = 1,
    ACTIONS(226), 1,
      anon_sym_COLON,
  [822] = 1,
    ACTIONS(228), 1,
      anon_sym_COLON,
  [826] = 1,
    ACTIONS(230), 1,
      anon_sym_COLON,
  [830] = 1,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 73,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 134,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 187,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 221,
  [SMALL_STATE(12)] = 234,
  [SMALL_STATE(13)] = 247,
  [SMALL_STATE(14)] = 260,
  [SMALL_STATE(15)] = 273,
  [SMALL_STATE(16)] = 286,
  [SMALL_STATE(17)] = 311,
  [SMALL_STATE(18)] = 324,
  [SMALL_STATE(19)] = 342,
  [SMALL_STATE(20)] = 360,
  [SMALL_STATE(21)] = 378,
  [SMALL_STATE(22)] = 396,
  [SMALL_STATE(23)] = 409,
  [SMALL_STATE(24)] = 426,
  [SMALL_STATE(25)] = 443,
  [SMALL_STATE(26)] = 460,
  [SMALL_STATE(27)] = 473,
  [SMALL_STATE(28)] = 490,
  [SMALL_STATE(29)] = 507,
  [SMALL_STATE(30)] = 523,
  [SMALL_STATE(31)] = 535,
  [SMALL_STATE(32)] = 549,
  [SMALL_STATE(33)] = 563,
  [SMALL_STATE(34)] = 575,
  [SMALL_STATE(35)] = 587,
  [SMALL_STATE(36)] = 599,
  [SMALL_STATE(37)] = 611,
  [SMALL_STATE(38)] = 624,
  [SMALL_STATE(39)] = 635,
  [SMALL_STATE(40)] = 644,
  [SMALL_STATE(41)] = 657,
  [SMALL_STATE(42)] = 666,
  [SMALL_STATE(43)] = 675,
  [SMALL_STATE(44)] = 686,
  [SMALL_STATE(45)] = 695,
  [SMALL_STATE(46)] = 705,
  [SMALL_STATE(47)] = 715,
  [SMALL_STATE(48)] = 725,
  [SMALL_STATE(49)] = 735,
  [SMALL_STATE(50)] = 743,
  [SMALL_STATE(51)] = 753,
  [SMALL_STATE(52)] = 763,
  [SMALL_STATE(53)] = 773,
  [SMALL_STATE(54)] = 780,
  [SMALL_STATE(55)] = 785,
  [SMALL_STATE(56)] = 792,
  [SMALL_STATE(57)] = 799,
  [SMALL_STATE(58)] = 804,
  [SMALL_STATE(59)] = 811,
  [SMALL_STATE(60)] = 818,
  [SMALL_STATE(61)] = 822,
  [SMALL_STATE(62)] = 826,
  [SMALL_STATE(63)] = 830,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 6),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heading_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 7),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 7),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drawer, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drawer, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_drawer, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_drawer, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drawer, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_drawer, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_affiliated_properties, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_affiliated_properties, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_drawer, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_drawer, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stars, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stars_repeat1, 2), SHIFT_REPEAT(26),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stars_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 1),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__drawer_lines, 2), SHIFT_REPEAT(23),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__drawer_lines, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_drawer_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_drawer_repeat1, 2), SHIFT_REPEAT(55),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__characters, 2), SHIFT_REPEAT(33),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__characters, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline_keyword, 1),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headline_keyword_repeat1, 2), SHIFT_REPEAT(35),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headline_keyword_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_repeat1, 2), SHIFT_REPEAT(36),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tags_repeat1, 2), SHIFT_REPEAT(43),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__char_num_underscore_hyphen, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__char_num_underscore_hyphen, 2), SHIFT_REPEAT(46),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_backend, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__drawer_begin, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_property, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_property, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affiliated_keys, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affiliated_keys, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__affiliated_attr_keys, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [232] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
