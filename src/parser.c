#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_console_command = 1,
  sym_label = 2,
  anon_sym_AT = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  sym_identifier = 6,
  anon_sym_BRK = 7,
  anon_sym_JMP2r = 8,
  anon_sym_LDAk = 9,
  anon_sym_DEO = 10,
  anon_sym_INC2 = 11,
  anon_sym_POP2 = 12,
  anon_sym_AMP = 13,
  anon_sym_DOLLAR = 14,
  anon_sym_DOT = 15,
  anon_sym_SLASH = 16,
  sym_end_instruction = 17,
  sym_number = 18,
  sym_string_literal = 19,
  sym_empty_line = 20,
  sym_source_file = 21,
  sym_statement = 22,
  sym_instruction = 23,
  sym_instruction_body = 24,
  sym_block = 25,
  sym_opcode = 26,
  sym_operand = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_instruction_repeat1 = 29,
  aux_sym_instruction_body_repeat1 = 30,
  aux_sym_instruction_body_repeat2 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_console_command] = "console_command",
  [sym_label] = "label",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [anon_sym_BRK] = "BRK",
  [anon_sym_JMP2r] = "JMP2r",
  [anon_sym_LDAk] = "LDAk",
  [anon_sym_DEO] = "DEO",
  [anon_sym_INC2] = "INC2",
  [anon_sym_POP2] = "POP2",
  [anon_sym_AMP] = "&",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [sym_end_instruction] = "end_instruction",
  [sym_number] = "number",
  [sym_string_literal] = "string_literal",
  [sym_empty_line] = "empty_line",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_instruction] = "instruction",
  [sym_instruction_body] = "instruction_body",
  [sym_block] = "block",
  [sym_opcode] = "opcode",
  [sym_operand] = "operand",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_instruction_body_repeat1] = "instruction_body_repeat1",
  [aux_sym_instruction_body_repeat2] = "instruction_body_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_console_command] = sym_console_command,
  [sym_label] = sym_label,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [anon_sym_BRK] = anon_sym_BRK,
  [anon_sym_JMP2r] = anon_sym_JMP2r,
  [anon_sym_LDAk] = anon_sym_LDAk,
  [anon_sym_DEO] = anon_sym_DEO,
  [anon_sym_INC2] = anon_sym_INC2,
  [anon_sym_POP2] = anon_sym_POP2,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_end_instruction] = sym_end_instruction,
  [sym_number] = sym_number,
  [sym_string_literal] = sym_string_literal,
  [sym_empty_line] = sym_empty_line,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_instruction] = sym_instruction,
  [sym_instruction_body] = sym_instruction_body,
  [sym_block] = sym_block,
  [sym_opcode] = sym_opcode,
  [sym_operand] = sym_operand,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_instruction_body_repeat1] = aux_sym_instruction_body_repeat1,
  [aux_sym_instruction_body_repeat2] = aux_sym_instruction_body_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_console_command] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BRK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JMP2r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LDAk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INC2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POP2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_end_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_line] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_body] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_body_repeat2] = {
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 3,
        '$', 38,
        '&', 37,
        '(', 28,
        ')', 29,
        '-', 7,
        '.', 39,
        '/', 40,
        '@', 27,
        'B', 19,
        'D', 11,
        'I', 14,
        'J', 13,
        'L', 10,
        'P', 16,
        '|', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ')') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '-', 7,
        '@', 27,
        'B', 19,
        'D', 11,
        'I', 14,
        'J', 13,
        'L', 10,
        'P', 16,
        '|', 22,
        '\n', 44,
        '\r', 44,
        '\t', 2,
        0x0b, 2,
        '\f', 2,
        ' ', 2,
      );
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'K') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'M') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(5);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 3,
        '-', 7,
        '@', 27,
        'B', 19,
        'D', 11,
        'I', 14,
        'J', 13,
        'L', 10,
        'P', 16,
        '|', 22,
        '\n', 44,
        '\r', 44,
        '\t', 2,
        0x0b, 2,
        '\f', 2,
        ' ', 2,
      );
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_console_command);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BRK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_JMP2r);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LDAk);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DEO);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_INC2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POP2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_end_instruction);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_empty_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_console_command] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BRK] = ACTIONS(1),
    [anon_sym_JMP2r] = ACTIONS(1),
    [anon_sym_LDAk] = ACTIONS(1),
    [anon_sym_DEO] = ACTIONS(1),
    [anon_sym_INC2] = ACTIONS(1),
    [anon_sym_POP2] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_end_instruction] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_statement] = STATE(9),
    [sym_instruction] = STATE(17),
    [sym_block] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_console_command] = ACTIONS(5),
    [sym_label] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [sym_string_literal] = ACTIONS(5),
    [sym_empty_line] = ACTIONS(9),
  },
  [2] = {
    [sym_statement] = STATE(13),
    [sym_instruction] = STATE(17),
    [sym_instruction_body] = STATE(16),
    [sym_block] = STATE(17),
    [sym_opcode] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym_instruction_body_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_console_command] = ACTIONS(14),
    [sym_label] = ACTIONS(14),
    [anon_sym_AT] = ACTIONS(18),
    [anon_sym_BRK] = ACTIONS(22),
    [anon_sym_JMP2r] = ACTIONS(22),
    [anon_sym_LDAk] = ACTIONS(22),
    [anon_sym_DEO] = ACTIONS(22),
    [anon_sym_INC2] = ACTIONS(22),
    [anon_sym_POP2] = ACTIONS(22),
    [sym_end_instruction] = ACTIONS(24),
    [sym_string_literal] = ACTIONS(14),
    [sym_empty_line] = ACTIONS(26),
  },
  [3] = {
    [sym_statement] = STATE(10),
    [sym_instruction] = STATE(17),
    [sym_instruction_body] = STATE(20),
    [sym_block] = STATE(17),
    [sym_opcode] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_instruction_body_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(30),
    [sym_console_command] = ACTIONS(33),
    [sym_label] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(37),
    [anon_sym_BRK] = ACTIONS(22),
    [anon_sym_JMP2r] = ACTIONS(22),
    [anon_sym_LDAk] = ACTIONS(22),
    [anon_sym_DEO] = ACTIONS(22),
    [anon_sym_INC2] = ACTIONS(22),
    [anon_sym_POP2] = ACTIONS(22),
    [sym_end_instruction] = ACTIONS(24),
    [sym_string_literal] = ACTIONS(33),
    [sym_empty_line] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    STATE(6), 2,
      sym_operand,
      aux_sym_instruction_body_repeat1,
    ACTIONS(45), 7,
      anon_sym_BRK,
      anon_sym_JMP2r,
      anon_sym_LDAk,
      anon_sym_DEO,
      anon_sym_INC2,
      anon_sym_POP2,
      sym_end_instruction,
  [23] = 5,
    ACTIONS(55), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(5), 2,
      sym_operand,
      aux_sym_instruction_body_repeat1,
    ACTIONS(53), 7,
      anon_sym_BRK,
      anon_sym_JMP2r,
      anon_sym_LDAk,
      anon_sym_DEO,
      anon_sym_INC2,
      anon_sym_POP2,
      sym_end_instruction,
  [46] = 5,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOT,
    STATE(5), 2,
      sym_operand,
      aux_sym_instruction_body_repeat1,
    ACTIONS(64), 7,
      anon_sym_BRK,
      anon_sym_JMP2r,
      anon_sym_LDAk,
      anon_sym_DEO,
      anon_sym_INC2,
      anon_sym_POP2,
      sym_end_instruction,
  [69] = 1,
    ACTIONS(66), 10,
      anon_sym_BRK,
      anon_sym_JMP2r,
      anon_sym_LDAk,
      anon_sym_DEO,
      anon_sym_INC2,
      anon_sym_POP2,
      anon_sym_AMP,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      sym_end_instruction,
  [82] = 1,
    ACTIONS(68), 10,
      anon_sym_BRK,
      anon_sym_JMP2r,
      anon_sym_LDAk,
      anon_sym_DEO,
      anon_sym_INC2,
      anon_sym_POP2,
      anon_sym_AMP,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      sym_end_instruction,
  [95] = 6,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_empty_line,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_instruction,
      sym_block,
    ACTIONS(5), 3,
      sym_console_command,
      sym_label,
      sym_string_literal,
  [118] = 6,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_empty_line,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_instruction,
      sym_block,
    ACTIONS(5), 3,
      sym_console_command,
      sym_label,
      sym_string_literal,
  [141] = 6,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      anon_sym_AT,
    ACTIONS(82), 1,
      sym_empty_line,
    STATE(11), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_instruction,
      sym_block,
    ACTIONS(76), 3,
      sym_console_command,
      sym_label,
      sym_string_literal,
  [164] = 1,
    ACTIONS(85), 10,
      anon_sym_BRK,
      anon_sym_JMP2r,
      anon_sym_LDAk,
      anon_sym_DEO,
      anon_sym_INC2,
      anon_sym_POP2,
      anon_sym_AMP,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      sym_end_instruction,
  [177] = 6,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_empty_line,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_instruction,
      sym_block,
    ACTIONS(5), 3,
      sym_console_command,
      sym_label,
      sym_string_literal,
  [200] = 4,
    ACTIONS(64), 1,
      sym_end_instruction,
    STATE(4), 1,
      sym_opcode,
    STATE(14), 1,
      aux_sym_instruction_body_repeat2,
    ACTIONS(89), 6,
      anon_sym_BRK,
      anon_sym_JMP2r,
      anon_sym_LDAk,
      anon_sym_DEO,
      anon_sym_INC2,
      anon_sym_POP2,
  [218] = 4,
    ACTIONS(94), 1,
      sym_end_instruction,
    STATE(4), 1,
      sym_opcode,
    STATE(14), 1,
      aux_sym_instruction_body_repeat2,
    ACTIONS(92), 6,
      anon_sym_BRK,
      anon_sym_JMP2r,
      anon_sym_LDAk,
      anon_sym_DEO,
      anon_sym_INC2,
      anon_sym_POP2,
  [236] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_empty_line,
    ACTIONS(98), 4,
      sym_console_command,
      sym_label,
      anon_sym_AT,
      sym_string_literal,
  [247] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym_empty_line,
    ACTIONS(102), 4,
      sym_console_command,
      sym_label,
      anon_sym_AT,
      sym_string_literal,
  [258] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_empty_line,
    ACTIONS(106), 4,
      sym_console_command,
      sym_label,
      anon_sym_AT,
      sym_string_literal,
  [269] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_empty_line,
    ACTIONS(110), 4,
      sym_console_command,
      sym_label,
      anon_sym_AT,
      sym_string_literal,
  [280] = 2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_empty_line,
    ACTIONS(114), 4,
      sym_console_command,
      sym_label,
      anon_sym_AT,
      sym_string_literal,
  [291] = 3,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(118), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [303] = 3,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(123), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [315] = 3,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(127), 3,
      sym_identifier,
      sym_number,
      sym_string_literal,
  [327] = 1,
    ACTIONS(129), 1,
      sym_identifier,
  [331] = 1,
    ACTIONS(129), 1,
      sym_number,
  [335] = 1,
    ACTIONS(131), 1,
      sym_identifier,
  [339] = 1,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
  [343] = 1,
    ACTIONS(135), 1,
      anon_sym_SLASH,
  [347] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [351] = 1,
    ACTIONS(139), 1,
      sym_identifier,
  [355] = 1,
    ACTIONS(141), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 23,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 141,
  [SMALL_STATE(12)] = 164,
  [SMALL_STATE(13)] = 177,
  [SMALL_STATE(14)] = 200,
  [SMALL_STATE(15)] = 218,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 247,
  [SMALL_STATE(18)] = 258,
  [SMALL_STATE(19)] = 269,
  [SMALL_STATE(20)] = 280,
  [SMALL_STATE(21)] = 291,
  [SMALL_STATE(22)] = 303,
  [SMALL_STATE(23)] = 315,
  [SMALL_STATE(24)] = 327,
  [SMALL_STATE(25)] = 331,
  [SMALL_STATE(26)] = 335,
  [SMALL_STATE(27)] = 339,
  [SMALL_STATE(28)] = 343,
  [SMALL_STATE(29)] = 347,
  [SMALL_STATE(30)] = 351,
  [SMALL_STATE(31)] = 355,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 0), REDUCE(sym_block, 4, 0, 0),
  [14] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_instruction, 4, 0, 0), REDUCE(sym_block, 4, 0, 0), SHIFT(17),
  [18] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_instruction, 4, 0, 0), REDUCE(sym_block, 4, 0, 0), SHIFT(31),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [26] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 0), REDUCE(sym_block, 4, 0, 0), SHIFT(17),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_instruction, 5, 0, 0), REDUCE(sym_block, 5, 0, 0),
  [33] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_instruction, 5, 0, 0), REDUCE(sym_block, 5, 0, 0), SHIFT(17),
  [37] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_instruction, 5, 0, 0), REDUCE(sym_block, 5, 0, 0), SHIFT(31),
  [41] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_instruction, 5, 0, 0), REDUCE(sym_block, 5, 0, 0), SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_body_repeat2, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_body_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_body_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_body_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_body_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_body_repeat2, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_body_repeat2, 2, 0, 0), SHIFT_REPEAT(12),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 5, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_body, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_body, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_body, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_body, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 6, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
