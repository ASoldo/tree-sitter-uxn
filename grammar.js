/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "uxn",

  conflicts: ($) => [[$.instruction, $.block]],

  rules: {
    source_file: ($) => repeat($.statement),

    statement: ($) =>
      choice(
        $.console_command,
        $.label,
        $.instruction,
        $.block,
        $.string_literal,
        $.empty_line,
      ),

    console_command: ($) => token(seq("|", /\d+/)),

    label: ($) => token(seq("@", /[\w-]+/)),

    instruction: ($) =>
      seq(
        "@",
        $.identifier,
        "(",
        repeat(choice($.identifier, $.string_literal, $.number)),
        ")",
        optional($.instruction_body),
      ),

    instruction_body: ($) =>
      seq(repeat(seq($.opcode, repeat($.operand))), $.end_instruction),

    block: ($) =>
      prec.right(
        seq(
          "@",
          $.identifier,
          "(",
          repeat(choice($.identifier, $.string_literal, $.number)),
          ")",
          repeat($.statement),
        ),
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    opcode: ($) => choice("BRK", "JMP2r", "LDAk", "DEO", "INC2", "POP2"),

    operand: ($) =>
      choice(
        seq("&", $.identifier),
        seq("$", $.number),
        seq(".", $.identifier, "/", $.identifier),
      ),

    end_instruction: ($) => "->",

    number: ($) => /\d+/,

    string_literal: ($) => /".*?"/,

    empty_line: ($) => /\s*[\r\n]/,
  },
});
