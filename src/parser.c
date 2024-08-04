#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 8
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 7
#define ALIAS_COUNT 0
#define TOKEN_COUNT 3
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_keyword = 2,
  sym_source_file = 3,
  sym_line = 4,
  aux_sym_source_file_repeat1 = 5,
  aux_sym_line_repeat1 = 6,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_keyword] = "keyword",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_keyword] = sym_keyword,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '@') ADVANCE(3);
      if (lookahead == '|') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 'v') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == '5') ADVANCE(28);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '@') ADVANCE(3);
      if (lookahead == '|') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym_line] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_keyword] = ACTIONS(5),
  },
  [2] = {
    [sym_line] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_keyword] = ACTIONS(5),
  },
  [3] = {
    [sym_line] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_keyword] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(14), 1,
      anon_sym_LF,
    ACTIONS(16), 1,
      sym_keyword,
    STATE(5), 1,
      aux_sym_line_repeat1,
  [10] = 3,
    ACTIONS(18), 1,
      anon_sym_LF,
    ACTIONS(20), 1,
      sym_keyword,
    STATE(5), 1,
      aux_sym_line_repeat1,
  [20] = 1,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_keyword,
  [25] = 1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 25,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2, 0, 0),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_uxn(void) {
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
