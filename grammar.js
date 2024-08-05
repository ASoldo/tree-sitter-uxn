/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: "uxn",

  rules: {
    source_file: ($) => repeat($.line),

    line: ($) => seq(repeat1(choice($.keyword, $.function)), "\n"),

    keyword: ($) => token("|10"),
    function: ($) => token("@Console"),
  },
});
