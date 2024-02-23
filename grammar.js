///////////////////////////////////////////////////////////////////////////////
//
// Tokens
//
///////////////////////////////////////////////////////////////////////////////
const PARENS_LEFT = "(";
const PARENS_RIGHT = ")";

///////////////////////////////////////////////////////////////////////////////
//
// Precedences
//
///////////////////////////////////////////////////////////////////////////////
const PREC = {};

///////////////////////////////////////////////////////////////////////////////
//
// Combinators
//
///////////////////////////////////////////////////////////////////////////////
const delim = (open, x, close) => seq(open, x, close);

///////////////////////////////////////////////////////////////////////////////
//
// Grammar
//
///////////////////////////////////////////////////////////////////////////////
module.exports = grammar({
  name: "sexp",

  rules: {
    sexp: ($) => $._sexp,


    _sexp: ($) => choice(
      $.identifier,
      $.string,
      $.number,
      $.list
    ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: ($) => choice(
      seq('"', repeat(choice(/[^"]/, /\\./)), '"'),
      seq("'", repeat(choice(/[^']/, /\\./)), "'")
    ),

    number: _ => {
      const decimal_digits = /\d+/;
      const signed_integer = seq(optional('-'), decimal_digits);
      const exponent_part = seq(choice('e', 'E'), signed_integer);

      const decimal_integer_literal = seq(
        optional('-'),
        choice(
          '0',
          seq(/[1-9]/, optional(decimal_digits)),
        ),
      );

      const decimal_literal = choice(
        seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
        seq(decimal_integer_literal, optional(exponent_part)),
      );

      return token(decimal_literal);
    },


    list: ($) => delim(PARENS_LEFT, repeat($._sexp), PARENS_RIGHT),
  },
});
