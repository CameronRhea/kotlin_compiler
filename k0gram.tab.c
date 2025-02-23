/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "k0gram.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include "tree.h"
    int yylex(void);
    int yyerror(char* s){ fprintf (stderr, "%s\n", s); exit(1); }

#line 79 "k0gram.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


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
    DecDigitOrSeparator = 435      /* DecDigitOrSeparator  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "k0gram.y"

   struct tree *treeptr;

#line 310 "k0gram.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_RESERVED = 3,                   /* RESERVED  */
  YYSYMBOL_DOT = 4,                        /* DOT  */
  YYSYMBOL_COMMA = 5,                      /* COMMA  */
  YYSYMBOL_LPAREN = 6,                     /* LPAREN  */
  YYSYMBOL_RPAREN = 7,                     /* RPAREN  */
  YYSYMBOL_LSQUARE = 8,                    /* LSQUARE  */
  YYSYMBOL_RSQUARE = 9,                    /* RSQUARE  */
  YYSYMBOL_LCURL = 10,                     /* LCURL  */
  YYSYMBOL_RCURL = 11,                     /* RCURL  */
  YYSYMBOL_MULT = 12,                      /* MULT  */
  YYSYMBOL_MOD = 13,                       /* MOD  */
  YYSYMBOL_DIV = 14,                       /* DIV  */
  YYSYMBOL_ADD = 15,                       /* ADD  */
  YYSYMBOL_SUB = 16,                       /* SUB  */
  YYSYMBOL_INCR = 17,                      /* INCR  */
  YYSYMBOL_DECR = 18,                      /* DECR  */
  YYSYMBOL_CONJ = 19,                      /* CONJ  */
  YYSYMBOL_DISJ = 20,                      /* DISJ  */
  YYSYMBOL_EXCL_WS = 21,                   /* EXCL_WS  */
  YYSYMBOL_EXCL_NO_WS = 22,                /* EXCL_NO_WS  */
  YYSYMBOL_COLON = 23,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 24,                 /* SEMICOLON  */
  YYSYMBOL_ASSIGNMENT = 25,                /* ASSIGNMENT  */
  YYSYMBOL_ADD_ASSIGNMENT = 26,            /* ADD_ASSIGNMENT  */
  YYSYMBOL_SUB_ASSIGNMENT = 27,            /* SUB_ASSIGNMENT  */
  YYSYMBOL_MULT_ASSIGNMENT = 28,           /* MULT_ASSIGNMENT  */
  YYSYMBOL_DIV_ASSIGNMENT = 29,            /* DIV_ASSIGNMENT  */
  YYSYMBOL_MOD_ASSIGNMENT = 30,            /* MOD_ASSIGNMENT  */
  YYSYMBOL_ARROW = 31,                     /* ARROW  */
  YYSYMBOL_DOUBLE_ARROW = 32,              /* DOUBLE_ARROW  */
  YYSYMBOL_RANGE = 33,                     /* RANGE  */
  YYSYMBOL_RANGE_UNTIL = 34,               /* RANGE_UNTIL  */
  YYSYMBOL_COLONCOLON = 35,                /* COLONCOLON  */
  YYSYMBOL_DOUBLE_SEMICOLON = 36,          /* DOUBLE_SEMICOLON  */
  YYSYMBOL_HASH = 37,                      /* HASH  */
  YYSYMBOL_AT_NO_WS = 38,                  /* AT_NO_WS  */
  YYSYMBOL_AT_POST_WS = 39,                /* AT_POST_WS  */
  YYSYMBOL_AT_PRE_WS = 40,                 /* AT_PRE_WS  */
  YYSYMBOL_AT_BOTH_WS = 41,                /* AT_BOTH_WS  */
  YYSYMBOL_QUEST_WS = 42,                  /* QUEST_WS  */
  YYSYMBOL_QUEST_NO_WS = 43,               /* QUEST_NO_WS  */
  YYSYMBOL_LANGLE = 44,                    /* LANGLE  */
  YYSYMBOL_RANGLE = 45,                    /* RANGLE  */
  YYSYMBOL_LE = 46,                        /* LE  */
  YYSYMBOL_GE = 47,                        /* GE  */
  YYSYMBOL_EXCL_EQ = 48,                   /* EXCL_EQ  */
  YYSYMBOL_EXCL_EQEQ = 49,                 /* EXCL_EQEQ  */
  YYSYMBOL_AS_SAFE = 50,                   /* AS_SAFE  */
  YYSYMBOL_EQEQ = 51,                      /* EQEQ  */
  YYSYMBOL_EQEQEQ = 52,                    /* EQEQEQ  */
  YYSYMBOL_SINGLE_QUOTE = 53,              /* SINGLE_QUOTE  */
  YYSYMBOL_AMP = 54,                       /* AMP  */
  YYSYMBOL_RETURN_AT = 55,                 /* RETURN_AT  */
  YYSYMBOL_CONTINUE_AT = 56,               /* CONTINUE_AT  */
  YYSYMBOL_BREAK_AT = 57,                  /* BREAK_AT  */
  YYSYMBOL_THIS_AT = 58,                   /* THIS_AT  */
  YYSYMBOL_SUPER_AT = 59,                  /* SUPER_AT  */
  YYSYMBOL_K0FILE = 60,                    /* K0FILE  */
  YYSYMBOL_FIELD = 61,                     /* FIELD  */
  YYSYMBOL_PROPERTY = 62,                  /* PROPERTY  */
  YYSYMBOL_GET = 63,                       /* GET  */
  YYSYMBOL_SET = 64,                       /* SET  */
  YYSYMBOL_RECIEVER = 65,                  /* RECIEVER  */
  YYSYMBOL_PARAM = 66,                     /* PARAM  */
  YYSYMBOL_SETPARAM = 67,                  /* SETPARAM  */
  YYSYMBOL_DELEGATE = 68,                  /* DELEGATE  */
  YYSYMBOL_PACKAGE = 69,                   /* PACKAGE  */
  YYSYMBOL_IMPORT = 70,                    /* IMPORT  */
  YYSYMBOL_CLASS = 71,                     /* CLASS  */
  YYSYMBOL_INTERFACE = 72,                 /* INTERFACE  */
  YYSYMBOL_FUN = 73,                       /* FUN  */
  YYSYMBOL_OBJECT = 74,                    /* OBJECT  */
  YYSYMBOL_VAL = 75,                       /* VAL  */
  YYSYMBOL_VAR = 76,                       /* VAR  */
  YYSYMBOL_TYPE_ALIAS = 77,                /* TYPE_ALIAS  */
  YYSYMBOL_CONSTRUCTOR = 78,               /* CONSTRUCTOR  */
  YYSYMBOL_BY = 79,                        /* BY  */
  YYSYMBOL_COMPANION = 80,                 /* COMPANION  */
  YYSYMBOL_INIT = 81,                      /* INIT  */
  YYSYMBOL_THIS = 82,                      /* THIS  */
  YYSYMBOL_SUPER = 83,                     /* SUPER  */
  YYSYMBOL_TYPEOF = 84,                    /* TYPEOF  */
  YYSYMBOL_WHERE = 85,                     /* WHERE  */
  YYSYMBOL_IF = 86,                        /* IF  */
  YYSYMBOL_ELSE = 87,                      /* ELSE  */
  YYSYMBOL_WHEN = 88,                      /* WHEN  */
  YYSYMBOL_TRY = 89,                       /* TRY  */
  YYSYMBOL_CATCH = 90,                     /* CATCH  */
  YYSYMBOL_FINALLY = 91,                   /* FINALLY  */
  YYSYMBOL_FOR = 92,                       /* FOR  */
  YYSYMBOL_DO = 93,                        /* DO  */
  YYSYMBOL_WHILE = 94,                     /* WHILE  */
  YYSYMBOL_THROW = 95,                     /* THROW  */
  YYSYMBOL_RETURN = 96,                    /* RETURN  */
  YYSYMBOL_CONTINUE = 97,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 98,                     /* BREAK  */
  YYSYMBOL_AS = 99,                        /* AS  */
  YYSYMBOL_IS = 100,                       /* IS  */
  YYSYMBOL_IN = 101,                       /* IN  */
  YYSYMBOL_NOT_IS = 102,                   /* NOT_IS  */
  YYSYMBOL_NOT_IN = 103,                   /* NOT_IN  */
  YYSYMBOL_OUT = 104,                      /* OUT  */
  YYSYMBOL_DYNAMIC = 105,                  /* DYNAMIC  */
  YYSYMBOL_PUBLIC = 106,                   /* PUBLIC  */
  YYSYMBOL_PRIVATE = 107,                  /* PRIVATE  */
  YYSYMBOL_PROTECTED = 108,                /* PROTECTED  */
  YYSYMBOL_INTERNAL = 109,                 /* INTERNAL  */
  YYSYMBOL_ENUM = 110,                     /* ENUM  */
  YYSYMBOL_SEALED = 111,                   /* SEALED  */
  YYSYMBOL_ANNOTATION = 112,               /* ANNOTATION  */
  YYSYMBOL_DATA = 113,                     /* DATA  */
  YYSYMBOL_INNER = 114,                    /* INNER  */
  YYSYMBOL_VALUE = 115,                    /* VALUE  */
  YYSYMBOL_TAILREC = 116,                  /* TAILREC  */
  YYSYMBOL_OPERATOR = 117,                 /* OPERATOR  */
  YYSYMBOL_INLINE = 118,                   /* INLINE  */
  YYSYMBOL_INFIX = 119,                    /* INFIX  */
  YYSYMBOL_EXTERNAL = 120,                 /* EXTERNAL  */
  YYSYMBOL_SUSPEND = 121,                  /* SUSPEND  */
  YYSYMBOL_OVERRIDE = 122,                 /* OVERRIDE  */
  YYSYMBOL_ABSTRACT = 123,                 /* ABSTRACT  */
  YYSYMBOL_FINAL = 124,                    /* FINAL  */
  YYSYMBOL_OPEN = 125,                     /* OPEN  */
  YYSYMBOL_CONST = 126,                    /* CONST  */
  YYSYMBOL_LATEINIT = 127,                 /* LATEINIT  */
  YYSYMBOL_VARARG = 128,                   /* VARARG  */
  YYSYMBOL_NOINLINE = 129,                 /* NOINLINE  */
  YYSYMBOL_CROSSINLINE = 130,              /* CROSSINLINE  */
  YYSYMBOL_REIFIED = 131,                  /* REIFIED  */
  YYSYMBOL_EXPECT = 132,                   /* EXPECT  */
  YYSYMBOL_ACTUAL = 133,                   /* ACTUAL  */
  YYSYMBOL_BOOLEAN = 134,                  /* BOOLEAN  */
  YYSYMBOL_CASE = 135,                     /* CASE  */
  YYSYMBOL_DEFAULT = 136,                  /* DEFAULT  */
  YYSYMBOL_DOUBLE = 137,                   /* DOUBLE  */
  YYSYMBOL_FLOAT = 138,                    /* FLOAT  */
  YYSYMBOL_INSTANCEOF = 139,               /* INSTANCEOF  */
  YYSYMBOL_INT = 140,                      /* INT  */
  YYSYMBOL_LONG = 141,                     /* LONG  */
  YYSYMBOL_NEW = 142,                      /* NEW  */
  YYSYMBOL_STATIC = 143,                   /* STATIC  */
  YYSYMBOL_SWITCH = 144,                   /* SWITCH  */
  YYSYMBOL_VOID = 145,                     /* VOID  */
  YYSYMBOL_DecDigitNoZero = 146,           /* DecDigitNoZero  */
  YYSYMBOL_DecDigit = 147,                 /* DecDigit  */
  YYSYMBOL_DoubleExponent = 148,           /* DoubleExponent  */
  YYSYMBOL_HexDigit = 149,                 /* HexDigit  */
  YYSYMBOL_HexDigitOrSeparator = 150,      /* HexDigitOrSeparator  */
  YYSYMBOL_HexLiteral = 151,               /* HexLiteral  */
  YYSYMBOL_UnsignedLiteral = 152,          /* UnsignedLiteral  */
  YYSYMBOL_NullLiteral = 153,              /* NullLiteral  */
  YYSYMBOL_UniCharacterLiteral = 154,      /* UniCharacterLiteral  */
  YYSYMBOL_EscapedIdentifier = 155,        /* EscapedIdentifier  */
  YYSYMBOL_EscapeSeq = 156,                /* EscapeSeq  */
  YYSYMBOL_Letter = 157,                   /* Letter  */
  YYSYMBOL_QuotedSymbol = 158,             /* QuotedSymbol  */
  YYSYMBOL_UnicodeDigit = 159,             /* UnicodeDigit  */
  YYSYMBOL_Identifier = 160,               /* Identifier  */
  YYSYMBOL_IdentifierOrSoftKey = 161,      /* IdentifierOrSoftKey  */
  YYSYMBOL_QUOTE_OPEN = 162,               /* QUOTE_OPEN  */
  YYSYMBOL_TRIPLE_QUOTE_OPEN = 163,        /* TRIPLE_QUOTE_OPEN  */
  YYSYMBOL_FieldIdentifier = 164,          /* FieldIdentifier  */
  YYSYMBOL_QUOTE_CLOSE = 165,              /* QUOTE_CLOSE  */
  YYSYMBOL_LineStrRef = 166,               /* LineStrRef  */
  YYSYMBOL_LineStrText = 167,              /* LineStrText  */
  YYSYMBOL_LineStrEscapedChar = 168,       /* LineStrEscapedChar  */
  YYSYMBOL_LineStrExprStart = 169,         /* LineStrExprStart  */
  YYSYMBOL_TRIPLE_QUOTE_CLOSE = 170,       /* TRIPLE_QUOTE_CLOSE  */
  YYSYMBOL_MultilineStringQuote = 171,     /* MultilineStringQuote  */
  YYSYMBOL_MultiLineStrRef = 172,          /* MultiLineStrRef  */
  YYSYMBOL_MultiLineStrText = 173,         /* MultiLineStrText  */
  YYSYMBOL_MultiLineStrExprStart = 174,    /* MultiLineStrExprStart  */
  YYSYMBOL_STRING = 175,                   /* STRING  */
  YYSYMBOL_MULTISTRING = 176,              /* MULTISTRING  */
  YYSYMBOL_KotlinToken = 177,              /* KotlinToken  */
  YYSYMBOL_IntegerLiteral = 178,           /* IntegerLiteral  */
  YYSYMBOL_RealLiteral = 179,              /* RealLiteral  */
  YYSYMBOL_DecDigitOrSeparator = 180,      /* DecDigitOrSeparator  */
  YYSYMBOL_181_true_ = 181,                /* "true"  */
  YYSYMBOL_182_false_ = 182,               /* "false"  */
  YYSYMBOL_183_l_ = 183,                   /* 'l'  */
  YYSYMBOL_184_L_ = 184,                   /* 'L'  */
  YYSYMBOL_YYACCEPT = 185,                 /* $accept  */
  YYSYMBOL_kotlinFile = 186,               /* kotlinFile  */
  YYSYMBOL_optional_topLevelObjectSequence = 187 /* optional_topLevelObjectSequence  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   0

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  185
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  3
/* YYNRULES -- Number of rules.  */
#define YYNRULES  3
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  4

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   437


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   184,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   183,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   194,   194,   199
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "RESERVED", "DOT",
  "COMMA", "LPAREN", "RPAREN", "LSQUARE", "RSQUARE", "LCURL", "RCURL",
  "MULT", "MOD", "DIV", "ADD", "SUB", "INCR", "DECR", "CONJ", "DISJ",
  "EXCL_WS", "EXCL_NO_WS", "COLON", "SEMICOLON", "ASSIGNMENT",
  "ADD_ASSIGNMENT", "SUB_ASSIGNMENT", "MULT_ASSIGNMENT", "DIV_ASSIGNMENT",
  "MOD_ASSIGNMENT", "ARROW", "DOUBLE_ARROW", "RANGE", "RANGE_UNTIL",
  "COLONCOLON", "DOUBLE_SEMICOLON", "HASH", "AT_NO_WS", "AT_POST_WS",
  "AT_PRE_WS", "AT_BOTH_WS", "QUEST_WS", "QUEST_NO_WS", "LANGLE", "RANGLE",
  "LE", "GE", "EXCL_EQ", "EXCL_EQEQ", "AS_SAFE", "EQEQ", "EQEQEQ",
  "SINGLE_QUOTE", "AMP", "RETURN_AT", "CONTINUE_AT", "BREAK_AT", "THIS_AT",
  "SUPER_AT", "K0FILE", "FIELD", "PROPERTY", "GET", "SET", "RECIEVER",
  "PARAM", "SETPARAM", "DELEGATE", "PACKAGE", "IMPORT", "CLASS",
  "INTERFACE", "FUN", "OBJECT", "VAL", "VAR", "TYPE_ALIAS", "CONSTRUCTOR",
  "BY", "COMPANION", "INIT", "THIS", "SUPER", "TYPEOF", "WHERE", "IF",
  "ELSE", "WHEN", "TRY", "CATCH", "FINALLY", "FOR", "DO", "WHILE", "THROW",
  "RETURN", "CONTINUE", "BREAK", "AS", "IS", "IN", "NOT_IS", "NOT_IN",
  "OUT", "DYNAMIC", "PUBLIC", "PRIVATE", "PROTECTED", "INTERNAL", "ENUM",
  "SEALED", "ANNOTATION", "DATA", "INNER", "VALUE", "TAILREC", "OPERATOR",
  "INLINE", "INFIX", "EXTERNAL", "SUSPEND", "OVERRIDE", "ABSTRACT",
  "FINAL", "OPEN", "CONST", "LATEINIT", "VARARG", "NOINLINE",
  "CROSSINLINE", "REIFIED", "EXPECT", "ACTUAL", "BOOLEAN", "CASE",
  "DEFAULT", "DOUBLE", "FLOAT", "INSTANCEOF", "INT", "LONG", "NEW",
  "STATIC", "SWITCH", "VOID", "DecDigitNoZero", "DecDigit",
  "DoubleExponent", "HexDigit", "HexDigitOrSeparator", "HexLiteral",
  "UnsignedLiteral", "NullLiteral", "UniCharacterLiteral",
  "EscapedIdentifier", "EscapeSeq", "Letter", "QuotedSymbol",
  "UnicodeDigit", "Identifier", "IdentifierOrSoftKey", "QUOTE_OPEN",
  "TRIPLE_QUOTE_OPEN", "FieldIdentifier", "QUOTE_CLOSE", "LineStrRef",
  "LineStrText", "LineStrEscapedChar", "LineStrExprStart",
  "TRIPLE_QUOTE_CLOSE", "MultilineStringQuote", "MultiLineStrRef",
  "MultiLineStrText", "MultiLineStrExprStart", "STRING", "MULTISTRING",
  "KotlinToken", "IntegerLiteral", "RealLiteral", "DecDigitOrSeparator",
  "\"true\"", "\"false\"", "'l'", "'L'", "$accept", "kotlinFile",
  "optional_topLevelObjectSequence", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -1,     0,    -1,    -1
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     2,     1
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
      -1,    -1,    -1
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       3
};

static const yytype_int8 yycheck[] =
{
       0
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   186,   187,     0
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   185,   186,   187
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1510 "k0gram.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

