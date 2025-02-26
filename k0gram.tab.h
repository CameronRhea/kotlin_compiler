/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_K0GRAM_TAB_H_INCLUDED
# define YY_YY_K0GRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    RESERVED = 258,                /* RESERVED  */
    DOT = 259,                     /* DOT  */
    COMMA = 260,                   /* COMMA  */
    LPAREN = 261,                  /* LPAREN  */
    RPAREN = 262,                  /* RPAREN  */
    LSQUARE = 263,                 /* LSQUARE  */
    RSQUARE = 264,                 /* RSQUARE  */
    LCURL = 265,                   /* LCURL  */
    RCURL = 266,                   /* RCURL  */
    MULT = 267,                    /* MULT  */
    MOD = 268,                     /* MOD  */
    DIV = 269,                     /* DIV  */
    ADD = 270,                     /* ADD  */
    SUB = 271,                     /* SUB  */
    INCR = 272,                    /* INCR  */
    DECR = 273,                    /* DECR  */
    CONJ = 274,                    /* CONJ  */
    DISJ = 275,                    /* DISJ  */
    EXCL_WS = 276,                 /* EXCL_WS  */
    EXCL_NO_WS = 277,              /* EXCL_NO_WS  */
    COLON = 278,                   /* COLON  */
    SEMICOLON = 279,               /* SEMICOLON  */
    ASSIGNMENT = 280,              /* ASSIGNMENT  */
    ADD_ASSIGNMENT = 281,          /* ADD_ASSIGNMENT  */
    SUB_ASSIGNMENT = 282,          /* SUB_ASSIGNMENT  */
    MULT_ASSIGNMENT = 283,         /* MULT_ASSIGNMENT  */
    DIV_ASSIGNMENT = 284,          /* DIV_ASSIGNMENT  */
    MOD_ASSIGNMENT = 285,          /* MOD_ASSIGNMENT  */
    ARROW = 286,                   /* ARROW  */
    DOUBLE_ARROW = 287,            /* DOUBLE_ARROW  */
    RANGE = 288,                   /* RANGE  */
    RANGE_UNTIL = 289,             /* RANGE_UNTIL  */
    COLONCOLON = 290,              /* COLONCOLON  */
    DOUBLE_SEMICOLON = 291,        /* DOUBLE_SEMICOLON  */
    HASH = 292,                    /* HASH  */
    AT_NO_WS = 293,                /* AT_NO_WS  */
    AT_POST_WS = 294,              /* AT_POST_WS  */
    AT_PRE_WS = 295,               /* AT_PRE_WS  */
    AT_BOTH_WS = 296,              /* AT_BOTH_WS  */
    QUEST_WS = 297,                /* QUEST_WS  */
    QUEST_NO_WS = 298,             /* QUEST_NO_WS  */
    LANGLE = 299,                  /* LANGLE  */
    RANGLE = 300,                  /* RANGLE  */
    LE = 301,                      /* LE  */
    GE = 302,                      /* GE  */
    EXCL_EQ = 303,                 /* EXCL_EQ  */
    EXCL_EQEQ = 304,               /* EXCL_EQEQ  */
    AS_SAFE = 305,                 /* AS_SAFE  */
    EQEQ = 306,                    /* EQEQ  */
    EQEQEQ = 307,                  /* EQEQEQ  */
    SINGLE_QUOTE = 308,            /* SINGLE_QUOTE  */
    AMP = 309,                     /* AMP  */
    RETURN_AT = 310,               /* RETURN_AT  */
    CONTINUE_AT = 311,             /* CONTINUE_AT  */
    BREAK_AT = 312,                /* BREAK_AT  */
    THIS_AT = 313,                 /* THIS_AT  */
    SUPER_AT = 314,                /* SUPER_AT  */
    K0FILE = 315,                  /* K0FILE  */
    FIELD = 316,                   /* FIELD  */
    PROPERTY = 317,                /* PROPERTY  */
    GET = 318,                     /* GET  */
    SET = 319,                     /* SET  */
    RECIEVER = 320,                /* RECIEVER  */
    PARAM = 321,                   /* PARAM  */
    SETPARAM = 322,                /* SETPARAM  */
    DELEGATE = 323,                /* DELEGATE  */
    PACKAGE = 324,                 /* PACKAGE  */
    IMPORT = 325,                  /* IMPORT  */
    CLASS = 326,                   /* CLASS  */
    INTERFACE = 327,               /* INTERFACE  */
    FUN = 328,                     /* FUN  */
    OBJECT = 329,                  /* OBJECT  */
    VAL = 330,                     /* VAL  */
    VAR = 331,                     /* VAR  */
    TYPE_ALIAS = 332,              /* TYPE_ALIAS  */
    CONSTRUCTOR = 333,             /* CONSTRUCTOR  */
    BY = 334,                      /* BY  */
    COMPANION = 335,               /* COMPANION  */
    INIT = 336,                    /* INIT  */
    THIS = 337,                    /* THIS  */
    SUPER = 338,                   /* SUPER  */
    TYPEOF = 339,                  /* TYPEOF  */
    WHERE = 340,                   /* WHERE  */
    IF = 341,                      /* IF  */
    ELSE = 342,                    /* ELSE  */
    WHEN = 343,                    /* WHEN  */
    TRY = 344,                     /* TRY  */
    CATCH = 345,                   /* CATCH  */
    FINALLY = 346,                 /* FINALLY  */
    FOR = 347,                     /* FOR  */
    DO = 348,                      /* DO  */
    WHILE = 349,                   /* WHILE  */
    THROW = 350,                   /* THROW  */
    RETURN = 351,                  /* RETURN  */
    CONTINUE = 352,                /* CONTINUE  */
    BREAK = 353,                   /* BREAK  */
    AS = 354,                      /* AS  */
    IS = 355,                      /* IS  */
    IN = 356,                      /* IN  */
    NOT_IS = 357,                  /* NOT_IS  */
    NOT_IN = 358,                  /* NOT_IN  */
    OUT = 359,                     /* OUT  */
    DYNAMIC = 360,                 /* DYNAMIC  */
    PUBLIC = 361,                  /* PUBLIC  */
    PRIVATE = 362,                 /* PRIVATE  */
    PROTECTED = 363,               /* PROTECTED  */
    INTERNAL = 364,                /* INTERNAL  */
    ENUM = 365,                    /* ENUM  */
    SEALED = 366,                  /* SEALED  */
    ANNOTATION = 367,              /* ANNOTATION  */
    DATA = 368,                    /* DATA  */
    INNER = 369,                   /* INNER  */
    VALUE = 370,                   /* VALUE  */
    TAILREC = 371,                 /* TAILREC  */
    OPERATOR = 372,                /* OPERATOR  */
    INLINE = 373,                  /* INLINE  */
    INFIX = 374,                   /* INFIX  */
    EXTERNAL = 375,                /* EXTERNAL  */
    SUSPEND = 376,                 /* SUSPEND  */
    OVERRIDE = 377,                /* OVERRIDE  */
    ABSTRACT = 378,                /* ABSTRACT  */
    FINAL = 379,                   /* FINAL  */
    OPEN = 380,                    /* OPEN  */
    CONST = 381,                   /* CONST  */
    LATEINIT = 382,                /* LATEINIT  */
    VARARG = 383,                  /* VARARG  */
    NOINLINE = 384,                /* NOINLINE  */
    CROSSINLINE = 385,             /* CROSSINLINE  */
    REIFIED = 386,                 /* REIFIED  */
    EXPECT = 387,                  /* EXPECT  */
    ACTUAL = 388,                  /* ACTUAL  */
    BOOLEAN = 389,                 /* BOOLEAN  */
    CASE = 390,                    /* CASE  */
    DEFAULT = 391,                 /* DEFAULT  */
    DOUBLE = 392,                  /* DOUBLE  */
    FLOAT = 393,                   /* FLOAT  */
    INSTANCEOF = 394,              /* INSTANCEOF  */
    INT = 395,                     /* INT  */
    LONG = 396,                    /* LONG  */
    NEW = 397,                     /* NEW  */
    STATIC = 398,                  /* STATIC  */
    SWITCH = 399,                  /* SWITCH  */
    VOID = 400,                    /* VOID  */
    DecDigitNoZero = 401,          /* DecDigitNoZero  */
    DecDigit = 402,                /* DecDigit  */
    DoubleExponent = 403,          /* DoubleExponent  */
    HexDigit = 404,                /* HexDigit  */
    HexDigitOrSeparator = 405,     /* HexDigitOrSeparator  */
    HexLiteral = 406,              /* HexLiteral  */
    UnsignedLiteral = 407,         /* UnsignedLiteral  */
    NullLiteral = 408,             /* NullLiteral  */
    UniCharacterLiteral = 409,     /* UniCharacterLiteral  */
    EscapedIdentifier = 410,       /* EscapedIdentifier  */
    EscapeSeq = 411,               /* EscapeSeq  */
    Letter = 412,                  /* Letter  */
    QuotedSymbol = 413,            /* QuotedSymbol  */
    UnicodeDigit = 414,            /* UnicodeDigit  */
    Identifier = 415,              /* Identifier  */
    IdentifierOrSoftKey = 416,     /* IdentifierOrSoftKey  */
    QUOTE_OPEN = 417,              /* QUOTE_OPEN  */
    TRIPLE_QUOTE_OPEN = 418,       /* TRIPLE_QUOTE_OPEN  */
    FieldIdentifier = 419,         /* FieldIdentifier  */
    QUOTE_CLOSE = 420,             /* QUOTE_CLOSE  */
    LineStrRef = 421,              /* LineStrRef  */
    LineStrText = 422,             /* LineStrText  */
    LineStrEscapedChar = 423,      /* LineStrEscapedChar  */
    LineStrExprStart = 424,        /* LineStrExprStart  */
    TRIPLE_QUOTE_CLOSE = 425,      /* TRIPLE_QUOTE_CLOSE  */
    MultilineStringQuote = 426,    /* MultilineStringQuote  */
    MultiLineStrRef = 427,         /* MultiLineStrRef  */
    MultiLineStrText = 428,        /* MultiLineStrText  */
    MultiLineStrExprStart = 429,   /* MultiLineStrExprStart  */
    STRING = 430,                  /* STRING  */
    MULTISTRING = 431,             /* MULTISTRING  */
    KotlinToken = 432,             /* KotlinToken  */
    IntegerLiteral = 433,          /* IntegerLiteral  */
    RealLiteral = 434,             /* RealLiteral  */
    DecDigitOrSeparator = 435,     /* DecDigitOrSeparator  */
    TRUE = 436,                    /* TRUE  */
    FALSE = 437,                   /* FALSE  */
    LOWER_THAN_ELSE = 438,         /* LOWER_THAN_ELSE  */
    c = 439                        /* c  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "k0gram.y"

   struct tree *treeptr;

#line 252 "k0gram.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_K0GRAM_TAB_H_INCLUDED  */
