/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: "uxn",

  rules: {
    source_file: ($) => repeat($.line),

    line: ($) =>
      seq(repeat1(choice($.keyword, $.function, $.value, $.identifier)), "\n"),

    keyword: ($) => token(seq("|", repeat1(/[a-zA-Z0-9_]+/))),
    function: ($) => token(seq("@", repeat1(/[a-zA-Z0-9_-]+/))),
    subroutine_call: ($) => token(seq(";", repeat1(/[a-zA-Z0-9_-]+/))),
    value: ($) => token(seq("$", repeat1(/[a-zA-Z0-9_]+/))),
    string: ($) => token(seq('"', /[^\s"]+/)),
    identifier: ($) => token(seq("&", repeat1(/[a-zA-Z0-9_]+/))),
  },
});
