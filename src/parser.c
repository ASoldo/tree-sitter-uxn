#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_PIPE10 = 2,
  anon_sym_PIPE100 = 3,
  anon_sym_ATConsole = 4,
  anon_sym_AMPvector = 5,
  anon_sym_AMPread = 6,
  anon_sym_AMPpad = 7,
  anon_sym_AMPwrite = 8,
  anon_sym_AMPerror = 9,
  anon_sym_DOLLAR1 = 10,
  anon_sym_DOLLAR2 = 11,
  anon_sym_DOLLAR5 = 12,
  sym_source_file = 13,
  sym_line = 14,
  sym_keyword = 15,
  sym_function = 16,
  sym_value = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_line_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_PIPE10] = "|10",
  [anon_sym_PIPE100] = "|100",
  [anon_sym_ATConsole] = "@Console",
  [anon_sym_AMPvector] = "&vector",
  [anon_sym_AMPread] = "&read",
  [anon_sym_AMPpad] = "&pad",
  [anon_sym_AMPwrite] = "&write",
  [anon_sym_AMPerror] = "&error",
  [anon_sym_DOLLAR1] = "$1",
  [anon_sym_DOLLAR2] = "$2",
  [anon_sym_DOLLAR5] = "$5",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_keyword] = "keyword",
  [sym_function] = "function",
  [sym_value] = "value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_PIPE10] = anon_sym_PIPE10,
  [anon_sym_PIPE100] = anon_sym_PIPE100,
  [anon_sym_ATConsole] = anon_sym_ATConsole,
  [anon_sym_AMPvector] = anon_sym_AMPvector,
  [anon_sym_AMPread] = anon_sym_AMPread,
  [anon_sym_AMPpad] = anon_sym_AMPpad,
  [anon_sym_AMPwrite] = anon_sym_AMPwrite,
  [anon_sym_AMPerror] = anon_sym_AMPerror,
  [anon_sym_DOLLAR1] = anon_sym_DOLLAR1,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR2,
  [anon_sym_DOLLAR5] = anon_sym_DOLLAR5,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_keyword] = sym_keyword,
  [sym_function] = sym_function,
  [sym_value] = sym_value,
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
  [anon_sym_PIPE10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE100] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATConsole] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPvector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPread] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPpad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPwrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMPerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR5] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
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
  [8] = 8,
  [9] = 9,
  [10] = 10,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '|') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(41);
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == '5') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '|') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE10);
      if (lookahead == '0') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE100);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_ATConsole);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AMPvector);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AMPread);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_AMPpad);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AMPwrite);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AMPerror);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOLLAR1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOLLAR5);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_PIPE10] = ACTIONS(1),
    [anon_sym_PIPE100] = ACTIONS(1),
    [anon_sym_ATConsole] = ACTIONS(1),
    [anon_sym_AMPvector] = ACTIONS(1),
    [anon_sym_AMPread] = ACTIONS(1),
    [anon_sym_AMPpad] = ACTIONS(1),
    [anon_sym_AMPwrite] = ACTIONS(1),
    [anon_sym_AMPerror] = ACTIONS(1),
    [anon_sym_DOLLAR1] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_DOLLAR5] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym_line] = STATE(2),
    [sym_keyword] = STATE(4),
    [sym_function] = STATE(4),
    [sym_value] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PIPE10] = ACTIONS(5),
    [anon_sym_PIPE100] = ACTIONS(7),
    [anon_sym_ATConsole] = ACTIONS(9),
    [anon_sym_AMPvector] = ACTIONS(9),
    [anon_sym_AMPread] = ACTIONS(9),
    [anon_sym_AMPpad] = ACTIONS(9),
    [anon_sym_AMPwrite] = ACTIONS(9),
    [anon_sym_AMPerror] = ACTIONS(9),
    [anon_sym_DOLLAR1] = ACTIONS(11),
    [anon_sym_DOLLAR2] = ACTIONS(11),
    [anon_sym_DOLLAR5] = ACTIONS(11),
  },
  [2] = {
    [sym_line] = STATE(3),
    [sym_keyword] = STATE(4),
    [sym_function] = STATE(4),
    [sym_value] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_PIPE10] = ACTIONS(5),
    [anon_sym_PIPE100] = ACTIONS(7),
    [anon_sym_ATConsole] = ACTIONS(9),
    [anon_sym_AMPvector] = ACTIONS(9),
    [anon_sym_AMPread] = ACTIONS(9),
    [anon_sym_AMPpad] = ACTIONS(9),
    [anon_sym_AMPwrite] = ACTIONS(9),
    [anon_sym_AMPerror] = ACTIONS(9),
    [anon_sym_DOLLAR1] = ACTIONS(11),
    [anon_sym_DOLLAR2] = ACTIONS(11),
    [anon_sym_DOLLAR5] = ACTIONS(11),
  },
  [3] = {
    [sym_line] = STATE(3),
    [sym_keyword] = STATE(4),
    [sym_function] = STATE(4),
    [sym_value] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_PIPE10] = ACTIONS(17),
    [anon_sym_PIPE100] = ACTIONS(20),
    [anon_sym_ATConsole] = ACTIONS(23),
    [anon_sym_AMPvector] = ACTIONS(23),
    [anon_sym_AMPread] = ACTIONS(23),
    [anon_sym_AMPpad] = ACTIONS(23),
    [anon_sym_AMPwrite] = ACTIONS(23),
    [anon_sym_AMPerror] = ACTIONS(23),
    [anon_sym_DOLLAR1] = ACTIONS(26),
    [anon_sym_DOLLAR2] = ACTIONS(26),
    [anon_sym_DOLLAR5] = ACTIONS(26),
  },
  [4] = {
    [sym_keyword] = STATE(5),
    [sym_function] = STATE(5),
    [sym_value] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_PIPE10] = ACTIONS(5),
    [anon_sym_PIPE100] = ACTIONS(5),
    [anon_sym_ATConsole] = ACTIONS(31),
    [anon_sym_AMPvector] = ACTIONS(31),
    [anon_sym_AMPread] = ACTIONS(31),
    [anon_sym_AMPpad] = ACTIONS(31),
    [anon_sym_AMPwrite] = ACTIONS(31),
    [anon_sym_AMPerror] = ACTIONS(31),
    [anon_sym_DOLLAR1] = ACTIONS(33),
    [anon_sym_DOLLAR2] = ACTIONS(33),
    [anon_sym_DOLLAR5] = ACTIONS(33),
  },
  [5] = {
    [sym_keyword] = STATE(5),
    [sym_function] = STATE(5),
    [sym_value] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(35),
    [anon_sym_PIPE10] = ACTIONS(37),
    [anon_sym_PIPE100] = ACTIONS(37),
    [anon_sym_ATConsole] = ACTIONS(40),
    [anon_sym_AMPvector] = ACTIONS(40),
    [anon_sym_AMPread] = ACTIONS(40),
    [anon_sym_AMPpad] = ACTIONS(40),
    [anon_sym_AMPwrite] = ACTIONS(40),
    [anon_sym_AMPerror] = ACTIONS(40),
    [anon_sym_DOLLAR1] = ACTIONS(43),
    [anon_sym_DOLLAR2] = ACTIONS(43),
    [anon_sym_DOLLAR5] = ACTIONS(43),
  },
  [6] = {
    [anon_sym_LF] = ACTIONS(46),
    [anon_sym_PIPE10] = ACTIONS(48),
    [anon_sym_PIPE100] = ACTIONS(48),
    [anon_sym_ATConsole] = ACTIONS(48),
    [anon_sym_AMPvector] = ACTIONS(48),
    [anon_sym_AMPread] = ACTIONS(48),
    [anon_sym_AMPpad] = ACTIONS(48),
    [anon_sym_AMPwrite] = ACTIONS(48),
    [anon_sym_AMPerror] = ACTIONS(48),
    [anon_sym_DOLLAR1] = ACTIONS(48),
    [anon_sym_DOLLAR2] = ACTIONS(48),
    [anon_sym_DOLLAR5] = ACTIONS(48),
  },
  [7] = {
    [anon_sym_LF] = ACTIONS(50),
    [anon_sym_PIPE10] = ACTIONS(52),
    [anon_sym_PIPE100] = ACTIONS(52),
    [anon_sym_ATConsole] = ACTIONS(52),
    [anon_sym_AMPvector] = ACTIONS(52),
    [anon_sym_AMPread] = ACTIONS(52),
    [anon_sym_AMPpad] = ACTIONS(52),
    [anon_sym_AMPwrite] = ACTIONS(52),
    [anon_sym_AMPerror] = ACTIONS(52),
    [anon_sym_DOLLAR1] = ACTIONS(52),
    [anon_sym_DOLLAR2] = ACTIONS(52),
    [anon_sym_DOLLAR5] = ACTIONS(52),
  },
  [8] = {
    [anon_sym_LF] = ACTIONS(54),
    [anon_sym_PIPE10] = ACTIONS(56),
    [anon_sym_PIPE100] = ACTIONS(56),
    [anon_sym_ATConsole] = ACTIONS(56),
    [anon_sym_AMPvector] = ACTIONS(56),
    [anon_sym_AMPread] = ACTIONS(56),
    [anon_sym_AMPpad] = ACTIONS(56),
    [anon_sym_AMPwrite] = ACTIONS(56),
    [anon_sym_AMPerror] = ACTIONS(56),
    [anon_sym_DOLLAR1] = ACTIONS(56),
    [anon_sym_DOLLAR2] = ACTIONS(56),
    [anon_sym_DOLLAR5] = ACTIONS(56),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_PIPE10] = ACTIONS(60),
    [anon_sym_PIPE100] = ACTIONS(58),
    [anon_sym_ATConsole] = ACTIONS(58),
    [anon_sym_AMPvector] = ACTIONS(58),
    [anon_sym_AMPread] = ACTIONS(58),
    [anon_sym_AMPpad] = ACTIONS(58),
    [anon_sym_AMPwrite] = ACTIONS(58),
    [anon_sym_AMPerror] = ACTIONS(58),
    [anon_sym_DOLLAR1] = ACTIONS(58),
    [anon_sym_DOLLAR2] = ACTIONS(58),
    [anon_sym_DOLLAR5] = ACTIONS(58),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
