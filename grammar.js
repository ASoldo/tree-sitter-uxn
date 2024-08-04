/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: "uxn",

  rules: {
    source_file: ($) => repeat($.line),

    line: ($) => seq($.keyword, "\n"),

    keyword: ($) => token("function"),
  },
});
