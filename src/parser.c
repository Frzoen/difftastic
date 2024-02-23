#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_DQUOTE = 2,
  aux_sym_string_token1 = 3,
  aux_sym_string_token2 = 4,
  anon_sym_SQUOTE = 5,
  aux_sym_string_token3 = 6,
  sym_number = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_sexp = 10,
  sym__sexp = 11,
  sym_string = 12,
  sym_list = 13,
  aux_sym_string_repeat1 = 14,
  aux_sym_string_repeat2 = 15,
  aux_sym_list_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token3] = "string_token3",
  [sym_number] = "number",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_sexp] = "sexp",
  [sym__sexp] = "_sexp",
  [sym_string] = "string",
  [sym_list] = "list",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_number] = sym_number,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_sexp] = sym_sexp,
  [sym__sexp] = sym__sexp,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_sexp] = {
    .visible = true,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(18);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_sexp] = STATE(15),
    [sym__sexp] = STATE(16),
    [sym_string] = STATE(16),
    [sym_list] = STATE(16),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
  [2] = {
    [sym__sexp] = STATE(3),
    [sym_string] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(13),
  },
  [3] = {
    [sym__sexp] = STATE(4),
    [sym_string] = STATE(4),
    [sym_list] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(17),
  },
  [4] = {
    [sym__sexp] = STATE(4),
    [sym_string] = STATE(4),
    [sym_list] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10] = 1,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [20] = 1,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [30] = 1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [40] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_string_repeat1,
    ACTIONS(43), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [51] = 3,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      aux_sym_string_repeat2,
    ACTIONS(45), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [62] = 3,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      aux_sym_string_repeat1,
    ACTIONS(49), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [73] = 3,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      aux_sym_string_repeat2,
    ACTIONS(51), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [84] = 3,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      aux_sym_string_repeat1,
    ACTIONS(55), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [95] = 3,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      aux_sym_string_repeat2,
    ACTIONS(58), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [106] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [110] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 10,
  [SMALL_STATE(7)] = 20,
  [SMALL_STATE(8)] = 30,
  [SMALL_STATE(9)] = 40,
  [SMALL_STATE(10)] = 51,
  [SMALL_STATE(11)] = 62,
  [SMALL_STATE(12)] = 73,
  [SMALL_STATE(13)] = 84,
  [SMALL_STATE(14)] = 95,
  [SMALL_STATE(15)] = 106,
  [SMALL_STATE(16)] = 110,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(13),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sexp(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
