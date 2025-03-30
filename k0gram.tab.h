/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_K0GRAM_TAB_H_INCLUDED
# define YY_YY_K0GRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    RESERVED = 258,
    DOT = 259,
    COMMA = 260,
    LPAREN = 261,
    RPAREN = 262,
    LSQUARE = 263,
    RSQUARE = 264,
    LCURL = 265,
    RCURL = 266,
    INCR = 267,
    DECR = 268,
    CONJ = 269,
    DISJ = 270,
    EXCL_WS = 271,
    EXCL_NO_WS = 272,
    COLON = 273,
    SEMICOLON = 274,
    ASSIGNMENT = 275,
    ADD_ASSIGNMENT = 276,
    SUB_ASSIGNMENT = 277,
    MULT_ASSIGNMENT = 278,
    DIV_ASSIGNMENT = 279,
    MOD_ASSIGNMENT = 280,
    ARROW = 281,
    DOUBLE_ARROW = 282,
    RANGE = 283,
    COLONCOLON = 284,
    DOUBLE_SEMICOLON = 285,
    HASH = 286,
    AT_NO_WS = 287,
    AT_POST_WS = 288,
    AT_PRE_WS = 289,
    AT_BOTH_WS = 290,
    QUEST_WS = 291,
    QUEST_NO_WS = 292,
    LANGLE = 293,
    RANGLE = 294,
    LE = 295,
    GE = 296,
    QUEST_DOT = 297,
    EXCL_EQ = 298,
    EXCL_EQEQ = 299,
    AS_SAFE = 300,
    EQEQ = 301,
    EQEQEQ = 302,
    SINGLE_QUOTE = 303,
    RETURN_AT = 304,
    CONTINUE_AT = 305,
    BREAK_AT = 306,
    THIS_AT = 307,
    SUPER_AT = 308,
    FILES = 309,
    FIELD = 310,
    PROPERTY = 311,
    GET = 312,
    QUEST_COLON = 313,
    SET = 314,
    RECEIVER = 315,
    PARAM = 316,
    SETPARAM = 317,
    DELEGATE = 318,
    PACKAGE = 319,
    IMPORT = 320,
    CLASS = 321,
    INTERFACE = 322,
    FUN = 323,
    OBJECT = 324,
    VAL = 325,
    VAR = 326,
    TYPEALIAS = 327,
    CONSTRUCTOR = 328,
    BY = 329,
    COMPANION = 330,
    INIT = 331,
    THIS = 332,
    SUPER = 333,
    TYPEOF = 334,
    WHERE = 335,
    IF = 336,
    ELSE = 337,
    WHEN = 338,
    TRY = 339,
    CATCH = 340,
    FINALLY = 341,
    FOR = 342,
    DO = 343,
    WHILE = 344,
    THROW = 345,
    RETURN = 346,
    CONTINUE = 347,
    BREAK = 348,
    AS = 349,
    IS = 350,
    IN = 351,
    OUT = 352,
    DYNAMIC = 353,
    PUBLIC = 354,
    PRIVATE = 355,
    PROTECTED = 356,
    INTERNAL = 357,
    ENUM = 358,
    SEALED = 359,
    ANNOTATION = 360,
    DATA = 361,
    INNER = 362,
    TAILREC = 363,
    OPERATOR = 364,
    INLINE = 365,
    INFIX = 366,
    EXTERNAL = 367,
    SUSPEND = 368,
    OVERRIDE = 369,
    ABSTRACT = 370,
    NULL_LITERAL = 371,
    FINAL = 372,
    OPEN = 373,
    CONST = 374,
    LATEINIT = 375,
    VARARG = 376,
    NOINLINE = 377,
    CROSSINLINE = 378,
    REIFIED = 379,
    EXPECT = 380,
    ACTUAL = 381,
    REAL_LITERAL = 382,
    FLOAT_LITERAL = 383,
    DOUBLE_LITERAL = 384,
    INTEGER_LITERAL = 385,
    CHARACTER_LITERAL = 386,
    HEX_LITERAL = 387,
    BIN_LITERAL = 388,
    UNSIGNED_LITERAL = 389,
    LONG_LITERAL = 390,
    BOOLEAN_LITERAL = 391,
    STRING_LITERAL = 392,
    INT = 393,
    FLOAT = 394,
    BOOLEAN = 395,
    CHAR = 396,
    STRING = 397,
    BYTE = 398,
    T_EOF = 399,
    TYPELITERAL = 400,
    MULT = 401,
    MOD = 402,
    DIV = 403,
    ADD = 404,
    SUB = 405,
    IDENTIFIER = 406,
    NOT_IS = 407,
    NOT_IN = 408,
    K0FILE = 409,
    VALUE = 410,
    RANGE_UNTIL = 411,
    UNICHARACTER_LITERAL = 412,
    AND = 413,
    OR = 414,
    LOWER_THAN_ELSE = 415
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "k0gram.y"

   struct tree *treeptr;

#line 222 "k0gram.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_K0GRAM_TAB_H_INCLUDED  */
