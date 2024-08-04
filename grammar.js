module.exports = grammar({
  name: "uxn",

  rules: {
    source_file: ($) => repeat($.line),

    line: ($) => seq(repeat1($.keyword), "\n"),

    keyword: ($) =>
      token(
        choice(
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
        ),
      ),
  },
});
