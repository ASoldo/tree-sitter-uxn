/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: "uxn",

  rules: {
    source_file: ($) => repeat($.line),

    line: ($) => seq(repeat1(choice($.keyword, $.function, $.value)), "\n"),

    keyword: ($) => choice(token("|10"), token("|100")),

    function: ($) =>
      choice(
        token("@Console"),
        token("&vector"),
        token("&read"),
        token("&pad"),
        token("&write"),
        token("&error"),
      ),

    value: ($) => choice(token("$1"), token("$2"), token("$5")),
  },
});
