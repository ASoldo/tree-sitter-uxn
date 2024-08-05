/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const INSTRUCTIONS = [
  "|10",
  "@Console",
  "&vector",
  "$2",
  "&read",
  "$1",
  "&pad",
  "$5",
  "&write",
  "$1",
  "&error",
  "$1",
];

module.exports = grammar({
  name: "uxn",

  rules: {
    source_file: ($) => repeat($.line),

    line: ($) => seq(repeat1($.instruction), "\n"),

    instruction: ($) =>
      choice(
        $.pipe_instruction,
        $.at_instruction,
        $.amp_instruction,
        $.dollar_instruction,
        $.function_instruction,
        $.string_instruction,
      ),

    pipe_instruction: ($) => token(choice("|10", "|100")),
    at_instruction: ($) => token(/@[a-zA-Z_][a-zA-Z0-9_-]*/),
    amp_instruction: ($) => token(/&[a-zA-Z_][a-zA-Z0-9_-]*/),
    dollar_instruction: ($) => token(/\$[0-9]+/),
    function_instruction: ($) =>
      token(choice("&read", "&write", "&error", "&pad", "&vector")),
    string_instruction: ($) => token(/"[^"]*"/),

    comment: ($) => token(/;.*/),

    _comment: ($) => token(/;.*/),
  },
});
