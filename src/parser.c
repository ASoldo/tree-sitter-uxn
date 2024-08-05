#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_pipe_instruction = 2,
  sym_at_instruction = 3,
  sym_amp_instruction = 4,
  sym_dollar_instruction = 5,
  sym_function_instruction = 6,
  sym_string_instruction = 7,
  aux_sym_comment_token1 = 8,
  sym_source_file = 9,
  sym_line = 10,
  sym_instruction = 11,
  aux_sym_source_file_repeat1 = 12,
  aux_sym_line_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_pipe_instruction] = "pipe_instruction",
  [sym_at_instruction] = "at_instruction",
  [sym_amp_instruction] = "amp_instruction",
  [sym_dollar_instruction] = "dollar_instruction",
  [sym_function_instruction] = "function_instruction",
  [sym_string_instruction] = "string_instruction",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_instruction] = "instruction",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_pipe_instruction] = sym_pipe_instruction,
  [sym_at_instruction] = sym_at_instruction,
  [sym_amp_instruction] = sym_amp_instruction,
  [sym_dollar_instruction] = sym_dollar_instruction,
  [sym_function_instruction] = sym_function_instruction,
  [sym_string_instruction] = sym_string_instruction,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_instruction] = sym_instruction,
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
  [sym_pipe_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_at_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_amp_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_dollar_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_function_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_string_instruction] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
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
  [sym_instruction] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == '|') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == '|') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 7:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_pipe_instruction);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_pipe_instruction);
      if (lookahead == '0') ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_at_instruction);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_amp_instruction);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_dollar_instruction);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_string_instruction);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_pipe_instruction] = ACTIONS(1),
    [sym_at_instruction] = ACTIONS(1),
    [sym_amp_instruction] = ACTIONS(1),
    [sym_dollar_instruction] = ACTIONS(1),
    [sym_function_instruction] = ACTIONS(1),
    [sym_string_instruction] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym_line] = STATE(2),
    [sym_instruction] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_pipe_instruction] = ACTIONS(5),
    [sym_at_instruction] = ACTIONS(5),
    [sym_amp_instruction] = ACTIONS(5),
    [sym_dollar_instruction] = ACTIONS(5),
    [sym_function_instruction] = ACTIONS(7),
    [sym_string_instruction] = ACTIONS(5),
  },
  [2] = {
    [sym_line] = STATE(3),
    [sym_instruction] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_pipe_instruction] = ACTIONS(5),
    [sym_at_instruction] = ACTIONS(5),
    [sym_amp_instruction] = ACTIONS(5),
    [sym_dollar_instruction] = ACTIONS(5),
    [sym_function_instruction] = ACTIONS(7),
    [sym_string_instruction] = ACTIONS(5),
  },
  [3] = {
    [sym_line] = STATE(3),
    [sym_instruction] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_pipe_instruction] = ACTIONS(13),
    [sym_at_instruction] = ACTIONS(13),
    [sym_amp_instruction] = ACTIONS(13),
    [sym_dollar_instruction] = ACTIONS(13),
    [sym_function_instruction] = ACTIONS(16),
    [sym_string_instruction] = ACTIONS(13),
  },
  [4] = {
    [sym_instruction] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(19),
    [sym_pipe_instruction] = ACTIONS(7),
    [sym_at_instruction] = ACTIONS(7),
    [sym_amp_instruction] = ACTIONS(7),
    [sym_dollar_instruction] = ACTIONS(7),
    [sym_function_instruction] = ACTIONS(7),
    [sym_string_instruction] = ACTIONS(7),
  },
  [5] = {
    [sym_instruction] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(21),
    [sym_pipe_instruction] = ACTIONS(23),
    [sym_at_instruction] = ACTIONS(23),
    [sym_amp_instruction] = ACTIONS(23),
    [sym_dollar_instruction] = ACTIONS(23),
    [sym_function_instruction] = ACTIONS(23),
    [sym_string_instruction] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(26), 1,
      anon_sym_LF,
    ACTIONS(28), 6,
      sym_pipe_instruction,
      sym_at_instruction,
      sym_amp_instruction,
      sym_dollar_instruction,
      sym_function_instruction,
      sym_string_instruction,
  [12] = 2,
    ACTIONS(32), 1,
      sym_function_instruction,
    ACTIONS(30), 6,
      ts_builtin_sym_end,
      sym_pipe_instruction,
      sym_at_instruction,
      sym_amp_instruction,
      sym_dollar_instruction,
      sym_string_instruction,
  [24] = 1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 12,
  [SMALL_STATE(8)] = 24,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
