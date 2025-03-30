/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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

    extern int yylex(void);
    extern int yyerror(char *s);
    #define YYDEBUG 1
    #include "tree.h"
    struct tree *root;
    #define BAD_TOKEN 257

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 296 "k0gram.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_K0GRAM_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   466

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  161
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  208
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  313

#define YYUNDEFTOK  2
#define YYMAXUTOK   415


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
     155,   156,   157,   158,   159,   160
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    54,    55,    59,    60,    61,    65,    66,
      67,    71,    72,    73,    77,    78,    82,    86,    87,    91,
      92,    96,   100,   104,   105,   109,   113,   114,   115,   119,
     123,   127,   128,   132,   133,   137,   138,   142,   143,   144,
     148,   149,   153,   154,   158,   159,   163,   167,   168,   172,
     173,   177,   178,   182,   186,   190,   191,   195,   196,   200,
     204,   205,   209,   210,   214,   218,   222,   223,   227,   228,
     232,   236,   237,   241,   242,   246,   250,   251,   255,   256,
     260,   261,   265,   266,   270,   271,   272,   273,   274,   278,
     282,   283,   287,   288,   289,   290,   291,   295,   296,   300,
     301,   305,   306,   310,   311,   315,   316,   320,   321,   322,
     323,   327,   331,   332,   336,   337,   341,   342,   346,   347,
     351,   352,   356,   357,   358,   359,   363,   364,   368,   369,
     373,   374,   378,   379,   380,   384,   385,   386,   387,   391,
     395,   396,   400,   401,   402,   403,   404,   408,   412,   413,
     417,   418,   419,   420,   424,   425,   426,   430,   434,   435,
     439,   440,   441,   445,   446,   447,   448,   449,   450,   451,
     452,   456,   460,   464,   465,   466,   470,   474,   478,   479,
     483,   484,   488,   492,   493,   497,   498,   502,   503,   504,
     505,   506,   510,   511,   515,   519,   520,   524,   528,   529,
     530,   534,   538,   539,   543,   544,   548,   549,   553
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RESERVED", "DOT", "COMMA", "LPAREN",
  "RPAREN", "LSQUARE", "RSQUARE", "LCURL", "RCURL", "INCR", "DECR", "CONJ",
  "DISJ", "EXCL_WS", "EXCL_NO_WS", "COLON", "SEMICOLON", "ASSIGNMENT",
  "ADD_ASSIGNMENT", "SUB_ASSIGNMENT", "MULT_ASSIGNMENT", "DIV_ASSIGNMENT",
  "MOD_ASSIGNMENT", "ARROW", "DOUBLE_ARROW", "RANGE", "COLONCOLON",
  "DOUBLE_SEMICOLON", "HASH", "AT_NO_WS", "AT_POST_WS", "AT_PRE_WS",
  "AT_BOTH_WS", "QUEST_WS", "QUEST_NO_WS", "LANGLE", "RANGLE", "LE", "GE",
  "QUEST_DOT", "EXCL_EQ", "EXCL_EQEQ", "AS_SAFE", "EQEQ", "EQEQEQ",
  "SINGLE_QUOTE", "RETURN_AT", "CONTINUE_AT", "BREAK_AT", "THIS_AT",
  "SUPER_AT", "FILES", "FIELD", "PROPERTY", "GET", "QUEST_COLON", "SET",
  "RECEIVER", "PARAM", "SETPARAM", "DELEGATE", "PACKAGE", "IMPORT",
  "CLASS", "INTERFACE", "FUN", "OBJECT", "VAL", "VAR", "TYPEALIAS",
  "CONSTRUCTOR", "BY", "COMPANION", "INIT", "THIS", "SUPER", "TYPEOF",
  "WHERE", "IF", "ELSE", "WHEN", "TRY", "CATCH", "FINALLY", "FOR", "DO",
  "WHILE", "THROW", "RETURN", "CONTINUE", "BREAK", "AS", "IS", "IN", "OUT",
  "DYNAMIC", "PUBLIC", "PRIVATE", "PROTECTED", "INTERNAL", "ENUM",
  "SEALED", "ANNOTATION", "DATA", "INNER", "TAILREC", "OPERATOR", "INLINE",
  "INFIX", "EXTERNAL", "SUSPEND", "OVERRIDE", "ABSTRACT", "NULL_LITERAL",
  "FINAL", "OPEN", "CONST", "LATEINIT", "VARARG", "NOINLINE",
  "CROSSINLINE", "REIFIED", "EXPECT", "ACTUAL", "REAL_LITERAL",
  "FLOAT_LITERAL", "DOUBLE_LITERAL", "INTEGER_LITERAL",
  "CHARACTER_LITERAL", "HEX_LITERAL", "BIN_LITERAL", "UNSIGNED_LITERAL",
  "LONG_LITERAL", "BOOLEAN_LITERAL", "STRING_LITERAL", "INT", "FLOAT",
  "BOOLEAN", "CHAR", "STRING", "BYTE", "T_EOF", "TYPELITERAL", "MULT",
  "MOD", "DIV", "ADD", "SUB", "IDENTIFIER", "NOT_IS", "NOT_IN", "K0FILE",
  "VALUE", "RANGE_UNTIL", "UNICHARACTER_LITERAL", "AND", "OR",
  "LOWER_THAN_ELSE", "$accept", "kotlinFile", "topLevelObjects",
  "topLevelObject", "simpleIdentifier", "declaration", "classDeclaration",
  "classBody", "classMembers", "classMember", "objectDeclaration",
  "objectBody", "functionDeclaration", "functionValueParameters",
  "optional_functionValueParameter", "functionValueParameter", "parameter",
  "multi_comma_functionParameter", "functionBody", "optional_functionBody",
  "propertyDeclaration", "val_var", "optional_modifier",
  "variableDeclaration", "multiVariableDeclaration",
  "multi_comma_variableDeclaration", "multivariable_variableDeclaration",
  "optional_typeParameters", "typeParameters", "typeParameter",
  "multi_typeParameter", "type", "nullableType", "multi_quest",
  "typeRef_parenthesizedType", "parenthesizedType", "userType",
  "simpleUserType", "multi_dot_simpleUserType", "typeArguments",
  "multi_comma_typeProjection", "typeProjection", "block", "statements",
  "optional_statement_sequence", "semis_statement", "semis", "statement",
  "assignment", "directly_assign", "assignmentAndOperator",
  "optional_eq_exp", "loopStatement", "controlStructureBody",
  "control_structure_body_or_comma", "variable_multivariable",
  "jumpExpression", "expression", "disjunction", "conjunction", "equality",
  "equality_operator", "comparison", "comparison_operator",
  "genericCallLikeComparison", "elvisExpression", "rangeExpression",
  "additiveExpression", "multiplicativeExpression",
  "prefixUnaryExpression", "multi_unaryPrefix", "prefixUnaryOperator",
  "postfixUnaryExpression", "multi_postfixUnarySuffix",
  "postfixUnarySuffix", "postfixUnaryOperator", "navigationSuffix",
  "memberAccessOperator", "identifier_expression_class",
  "primaryExpression", "parenthesizedExpression", "functionCall",
  "functionArguments", "callSuffix", "valueArguments",
  "optional_valueArgument", "multi_comma_valueArgument", "valueArgument",
  "optional_simpleIdentifier_EQ", "optional_Multi", "collectionLiteral",
  "multi_comma_expression", "indexingSuffix", "assignableExpression",
  "parenthesizedAssignableExpression", "directlyAssignableExpression",
  "parenthesizedDirectlyAssignableExpression", "assignableSuffix",
  "optional_comma", "optional_colon_type", "receiverType", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415
};
# endif

#define YYPACT_NINF (-266)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-209)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -19,   -52,   -32,  -124,    12,   115,   -19,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,   -32,   -52,    15,  -266,   110,   -52,
    -266,  -266,   116,  -266,  -266,    31,     5,  -266,  -266,  -266,
    -266,  -266,   131,  -266,  -266,   -32,  -266,  -266,   135,  -266,
     107,   136,  -266,   -52,    23,   140,  -266,   119,   167,   -52,
      33,   116,    40,   -52,   141,  -266,   159,   172,  -266,   163,
    -266,  -266,  -266,    31,    97,  -266,   -52,   180,  -266,  -266,
    -266,  -266,   169,  -266,  -266,  -266,  -266,    31,  -266,   183,
     307,  -266,   189,  -266,    62,   307,  -266,  -266,  -266,  -266,
     140,    31,  -266,   -52,   307,   138,   307,  -266,  -266,  -266,
    -266,  -266,   192,  -266,  -266,   186,   190,    39,   221,  -266,
     -42,   175,   -56,   -24,  -266,  -266,  -266,  -266,  -266,    23,
     168,   200,   315,   202,   216,   -10,    25,  -266,  -266,  -266,
    -266,  -266,    67,   213,   206,  -266,  -266,   307,  -266,  -266,
    -266,    11,    22,   193,  -266,   208,  -266,   214,    97,  -266,
    -266,   230,  -266,   104,  -266,   307,   307,   307,  -266,  -266,
     307,  -266,  -266,  -266,  -266,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   405,  -266,  -266,  -266,   315,   237,
      51,   307,  -266,  -266,   -32,  -266,  -266,    47,  -266,  -266,
    -266,   223,  -266,  -266,  -266,  -266,   307,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
     243,  -266,   105,  -266,   124,   190,    39,   221,  -266,   175,
     197,   -56,   -24,   -24,  -266,  -266,  -266,  -266,    46,  -266,
    -266,   239,   253,  -266,  -266,  -266,     6,  -266,  -266,  -266,
     256,   244,    31,  -266,  -266,   171,   258,    51,  -266,   275,
    -266,  -266,  -266,   265,  -266,   307,  -266,   249,   270,  -266,
     126,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,    69,
     307,   233,  -266,  -266,   163,   274,   276,  -266,   277,  -266,
    -266,  -266,  -266,  -266,   279,  -266,   307,   281,   272,  -266,
    -266,  -266,  -266,  -266,   286,    51,   307,   282,    54,  -266,
    -266,    31,   287,   241,  -266,   163,  -266,  -266,  -266,  -266,
    -266,   289,  -266
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    52,     0,     0,     0,     2,     3,     6,     7,
       5,     9,    10,     8,    52,     0,     0,    51,     0,     0,
       1,     4,     0,    54,    56,     0,    67,   208,    61,    62,
      63,    69,     0,    17,    21,    52,    17,    15,   205,    58,
      67,     0,    57,    28,     0,   207,    66,    59,    65,     0,
       0,     0,     0,   204,     0,    64,     0,     0,    32,    98,
      74,    73,    72,     0,    36,    60,     0,     0,    22,    18,
      19,    20,    45,    14,    16,    55,    53,     0,    25,    27,
       0,    29,   205,   206,     0,     0,    35,    24,    33,    68,
     207,     0,    30,    26,     0,     0,   108,   109,   110,   168,
     166,   167,   164,   169,    97,   111,   112,   114,   116,   120,
     126,   128,   130,   132,   135,   149,   163,   165,   170,   204,
       0,     0,   141,     0,     0,    42,   164,   199,    84,    11,
      12,    13,     0,     0,    77,    81,    85,     0,    87,    86,
     195,     0,   135,     0,   196,     0,   200,     0,    36,    44,
      31,     0,   187,     0,   107,   175,     0,     0,   118,   119,
       0,   122,   123,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   147,    71,    70,    88,   141,     0,
       0,     0,    41,    40,    52,    75,    76,    83,    89,   144,
     145,     0,   142,   143,   140,   139,     0,   203,   202,   198,
      92,    93,    94,    95,    96,    91,    90,    34,    23,   171,
       0,   189,     0,   173,     0,   113,   115,   117,   121,   129,
     127,   131,   133,   134,   136,   138,   137,   158,   184,   154,
     155,     0,     0,   148,   150,   153,     0,   152,   176,   151,
       0,   197,     0,   105,   106,     0,     0,     0,    82,     0,
     146,   193,   188,     0,   190,     0,   172,     0,     0,   181,
     186,   156,   159,   162,   160,   157,   161,   197,    48,    45,
       0,     0,    49,    50,    98,    57,     0,    80,   205,   191,
     192,   174,   183,   177,   205,   185,     0,   205,     0,   104,
     101,   102,   103,    99,    39,     0,   204,     0,   184,   178,
     182,   204,     0,     0,    38,    98,   194,   180,    47,    46,
     100,     0,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -266,  -266,  -266,   290,    -1,  -266,   106,   242,   259,  -266,
    -266,  -266,    32,   247,  -266,   207,  -266,  -266,  -266,   162,
    -266,  -266,  -266,    43,   137,  -266,    21,    -9,  -266,   266,
    -266,   -22,   -15,  -266,  -266,  -266,  -266,   252,  -266,   185,
    -266,   210,  -238,  -266,  -266,  -266,  -266,   -77,  -266,  -266,
    -266,  -265,  -266,    28,  -266,  -266,  -266,   -60,  -266,   179,
     182,  -266,   176,  -266,   177,   170,   181,   187,    -6,  -266,
    -266,  -266,   -82,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
     112,  -266,  -266,  -266,  -266,  -266,  -266,    52,  -266,  -266,
    -266,    98,   191,  -114,  -266,  -266,  -266,  -266,   -78,   261,
     125
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    40,   128,   129,    37,    50,    69,
       9,    34,   130,    45,    57,    58,    59,    79,    86,    87,
     131,   184,   132,    71,   273,   287,   274,    16,    17,    24,
      38,    72,    42,    47,    28,    29,    30,    31,    48,    46,
      82,    62,    88,   133,   134,   187,   249,   291,   136,   137,
     205,    81,   138,   292,   293,   245,   103,   139,   105,   106,
     107,   160,   108,   165,   109,   110,   111,   112,   113,   140,
     141,   194,   114,   174,   233,   234,   235,   236,   265,   115,
     116,   117,   214,   237,   238,   258,   284,   259,   260,   286,
     118,   212,   198,   143,   144,   145,   146,   199,    54,    64,
      32
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    27,   142,    41,   120,    22,    15,   135,   179,   294,
     -10,    43,    94,    11,    23,    26,   166,    94,    35,    95,
     104,    25,    61,   189,   190,   147,    51,    18,   191,    25,
     196,   155,    10,   290,   151,   153,   154,    25,    10,    25,
     311,    83,    56,    44,    68,    -8,    25,     1,    67,     2,
       3,    74,    23,  -179,   167,    92,    19,   242,   -78,   195,
      44,  -204,   151,   121,   240,   290,   248,    12,   122,   149,
      95,    11,   263,   -79,  -141,  -141,    55,   188,    19,  -141,
      11,   -79,    70,   127,    70,   158,   159,    91,    11,   224,
     225,   226,    56,   169,   170,   213,    11,    61,    11,    13,
       4,     2,    96,    97,    98,    11,     8,    84,     2,   210,
     253,    11,     8,   211,   254,    20,    11,    85,   151,    11,
      33,   246,   171,   172,   173,    12,    36,    11,     1,   255,
       2,   256,   -43,   -43,    12,    49,   251,   182,   183,    99,
      53,   100,    12,    55,    94,    44,    95,   152,   101,   123,
      12,   124,    12,    96,    97,    98,    65,    13,    63,    12,
     192,   193,   102,   222,   223,    12,    13,   142,    39,    60,
      12,    66,   277,    12,    13,   247,    39,    77,    39,    78,
      76,   125,    13,    80,    13,    39,    43,    91,    93,   142,
      99,    13,   100,   280,   119,   281,    39,    13,   155,   101,
     297,   156,    13,   168,   157,    13,   299,   176,   180,   302,
     288,  -141,  -141,   126,   200,   201,   202,   203,   204,   177,
     269,   142,   181,   243,   185,   186,   300,   257,   206,    96,
      97,    98,   275,   207,   121,   264,   280,   209,   289,   122,
     250,    95,   121,    84,   241,  -141,  -141,   122,   127,    95,
    -141,    84,   252,  -141,  -141,   166,   261,   262,  -141,   161,
     162,   163,   164,   267,  -201,   271,    99,   270,   100,   282,
     127,    94,   285,    95,   279,   101,   121,   283,  -208,   303,
     295,   122,   296,    95,   298,   268,   301,  -141,  -141,   102,
     272,   306,  -141,    73,   309,    52,    21,   257,    11,     1,
     150,     2,   127,   -43,   -43,   304,    11,     1,   312,     2,
     208,   -43,   -43,    94,    90,    95,   305,   244,    89,    75,
     123,   178,   124,    95,    96,    97,    98,   197,   123,   175,
     124,   310,    96,    97,    98,   215,   217,   220,   272,   216,
      11,     1,   218,     2,   308,   -43,   -43,   219,   266,   278,
     307,   148,   125,     0,     0,   221,    96,    97,    98,     0,
     125,    99,   123,   100,   124,   239,    96,    97,    98,    99,
     101,   100,   276,     0,     0,     0,     0,     0,   101,     0,
       0,     0,  -141,  -141,   126,     0,     0,     0,     0,     0,
    -141,  -141,   126,    99,   125,   100,     0,     0,    96,    97,
      98,     0,   101,    99,     0,   100,    96,    97,    98,   227,
       0,   228,   101,   196,     0,     0,   102,   229,   230,     0,
       0,     0,   231,     0,  -141,  -141,   126,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,   100,     0,     0,
       0,     0,   232,    99,   101,   100,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,   102,     0,
       0,     0,     0,     0,     0,     0,   102
};

static const yytype_int16 yycheck[] =
{
       1,    16,    84,    25,    82,    14,    38,    84,   122,   274,
      20,     6,     6,    65,    15,    16,    58,     6,    19,     8,
      80,     6,    44,    12,    13,    85,    35,   151,    17,     6,
       8,     6,     0,   271,    94,    95,    96,     6,     6,     6,
     305,    63,    43,    38,    11,    20,     6,    66,    49,    68,
      69,    11,    53,     7,    96,    77,    66,     6,    11,   141,
      38,     7,   122,     1,   178,   303,    19,   119,     6,    91,
       8,    65,    66,    11,    12,    13,     7,   137,    66,    17,
      65,    19,    50,    84,    52,    46,    47,    18,    65,   171,
     172,   173,    93,   149,   150,   155,    65,   119,    65,   151,
     119,    68,    91,    92,    93,    65,     0,    10,    68,     5,
       5,    65,     6,     9,     9,     0,    65,    20,   178,    65,
      10,   181,   146,   147,   148,   119,    10,    65,    66,     5,
      68,     7,    70,    71,   119,     4,   196,    70,    71,   128,
       5,   130,   119,     7,     6,    38,     8,     9,   137,    87,
     119,    89,   119,    91,    92,    93,    37,   151,    18,   119,
     149,   150,   151,   169,   170,   119,   151,   249,   145,   146,
     119,     4,   249,   119,   151,   184,   145,    18,   145,     7,
      39,   119,   151,    20,   151,   145,     6,    18,     5,   271,
     128,   151,   130,   253,     5,   255,   145,   151,     6,   137,
     278,    15,   151,    28,    14,   151,   284,    39,     6,   287,
     270,   149,   150,   151,    21,    22,    23,    24,    25,    19,
     242,   303,     6,   180,    11,    19,   286,   228,    20,    91,
      92,    93,   247,    19,     1,   236,   296,     7,     5,     6,
      17,     8,     1,    10,     7,    12,    13,     6,   249,     8,
      17,    10,     9,    12,    13,    58,    17,     4,    17,    38,
      39,    40,    41,     7,    20,     7,   128,    96,   130,    20,
     271,     6,   146,     8,     9,   137,     1,     7,     4,     7,
       4,     6,     5,     8,     5,   242,     5,    12,    13,   151,
     247,     9,    17,    51,     7,    36,     6,   298,    65,    66,
      93,    68,   303,    70,    71,    19,    65,    66,    19,    68,
     148,    70,    71,     6,    67,     8,   295,   180,    66,    53,
      87,     6,    89,     8,    91,    92,    93,   142,    87,   119,
      89,   303,    91,    92,    93,   156,   160,   167,   295,   157,
      65,    66,   165,    68,   301,    70,    71,   166,   236,   251,
     298,    90,   119,    -1,    -1,   168,    91,    92,    93,    -1,
     119,   128,    87,   130,    89,   174,    91,    92,    93,   128,
     137,   130,   247,    -1,    -1,    -1,    -1,    -1,   137,    -1,
      -1,    -1,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
     149,   150,   151,   128,   119,   130,    -1,    -1,    91,    92,
      93,    -1,   137,   128,    -1,   130,    91,    92,    93,     4,
      -1,     6,   137,     8,    -1,    -1,   151,    12,    13,    -1,
      -1,    -1,    17,    -1,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   128,    -1,   130,    -1,    -1,
      -1,    -1,    37,   128,   137,   130,    -1,    -1,    -1,    -1,
      -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   151
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    66,    68,    69,   119,   162,   163,   164,   167,   171,
     173,    65,   119,   151,   165,    38,   188,   189,   151,    66,
       0,   164,   188,   165,   190,     6,   165,   193,   195,   196,
     197,   198,   261,    10,   172,   165,    10,   168,   191,   145,
     165,   192,   193,     6,    38,   174,   200,   194,   199,     4,
     169,   188,   169,     5,   259,     7,   165,   175,   176,   177,
     146,   192,   202,    18,   260,    37,     4,   165,    11,   170,
     173,   184,   192,   168,    11,   190,    39,    18,     7,   178,
      20,   212,   201,   192,    10,    20,   179,   180,   203,   198,
     174,    18,   192,     5,     6,     8,    91,    92,    93,   128,
     130,   137,   151,   217,   218,   219,   220,   221,   223,   225,
     226,   227,   228,   229,   233,   240,   241,   242,   251,     5,
     259,     1,     6,    87,    89,   119,   151,   165,   166,   167,
     173,   181,   183,   204,   205,   208,   209,   210,   213,   218,
     230,   231,   233,   254,   255,   256,   257,   218,   260,   192,
     176,   218,     9,   218,   218,     6,    15,    14,    46,    47,
     222,    38,    39,    40,    41,   224,    58,    96,    28,   149,
     150,   146,   147,   148,   234,   202,    39,    19,     6,   254,
       6,     6,    70,    71,   182,    11,    19,   206,   218,    12,
      13,    17,   149,   150,   232,   233,     8,   200,   253,   258,
      21,    22,    23,    24,    25,   211,    20,    19,   180,     7,
       5,     9,   252,   218,   243,   220,   221,   223,   225,   227,
     226,   228,   229,   229,   233,   233,   233,     4,     6,    12,
      13,    17,    37,   235,   236,   237,   238,   244,   245,   253,
     254,     7,     6,   184,   185,   216,   218,   188,    19,   207,
      17,   218,     9,     5,     9,     5,     7,   165,   246,   248,
     249,    17,     4,    66,   165,   239,   241,     7,   184,   192,
      96,     7,   184,   185,   187,   193,   261,   208,   252,     9,
     218,   218,    20,     7,   247,   146,   250,   186,   218,     5,
     203,   208,   214,   215,   212,     4,     5,   259,     5,   259,
     218,     5,   259,     7,    19,   187,     9,   248,   184,     7,
     214,   212,    19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   161,   162,   163,   163,   164,   164,   164,   165,   165,
     165,   166,   166,   166,   167,   167,   168,   169,   169,   170,
     170,   171,   172,   173,   173,   174,   175,   175,   175,   176,
     177,   178,   178,   179,   179,   180,   180,   181,   181,   181,
     182,   182,   183,   183,   184,   184,   185,   186,   186,   187,
     187,   188,   188,   189,   190,   191,   191,   192,   192,   193,
     194,   194,   195,   195,   196,   197,   198,   198,   199,   199,
     200,   201,   201,   202,   202,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   208,   208,   208,   209,
     210,   210,   211,   211,   211,   211,   211,   212,   212,   213,
     213,   214,   214,   215,   215,   216,   216,   217,   217,   217,
     217,   218,   219,   219,   220,   220,   221,   221,   222,   222,
     223,   223,   224,   224,   224,   224,   225,   225,   226,   226,
     227,   227,   228,   228,   228,   229,   229,   229,   229,   230,
     231,   231,   232,   232,   232,   232,   232,   233,   234,   234,
     235,   235,   235,   235,   236,   236,   236,   237,   238,   238,
     239,   239,   239,   240,   240,   240,   240,   240,   240,   240,
     240,   241,   242,   243,   243,   243,   244,   245,   246,   246,
     247,   247,   248,   249,   249,   250,   250,   251,   251,   251,
     251,   251,   252,   252,   253,   254,   254,   255,   256,   256,
     256,   257,   258,   258,   259,   259,   260,   260,   261
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     4,     3,     0,     2,     1,
       1,     3,     3,     8,     6,     3,     3,     2,     0,     2,
       3,     3,     0,     1,     3,     1,     0,     8,     6,     5,
       1,     1,     1,     0,     3,     1,     5,     3,     0,     1,
       1,     1,     0,     5,     1,     3,     0,     1,     1,     2,
       2,     0,     1,     1,     3,     2,     2,     1,     3,     0,
       5,     3,     0,     1,     1,     3,     2,     1,     2,     0,
       3,     0,     1,     0,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     2,     0,     5,
       7,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     2,
       2,     0,     1,     1,     1,     1,     2,     2,     2,     0,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     1,     3,     0,     1,     3,     3,     0,
       3,     0,     3,     2,     0,     1,     0,     2,     4,     3,
       4,     5,     3,     0,     5,     1,     1,     3,     2,     1,
       1,     3,     1,     1,     1,     0,     2,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 50 "k0gram.y"
                    {root = (yyvsp[0].treeptr); treeprint(root, 1);}
#line 1813 "k0gram.tab.c"
    break;

  case 3:
#line 54 "k0gram.y"
                   {(yyval.treeptr) = create_node(1000, "topLevelObjects", 1, (yyvsp[0].treeptr));}
#line 1819 "k0gram.tab.c"
    break;

  case 4:
#line 55 "k0gram.y"
                                     {(yyval.treeptr) = create_node(1000, "topLevelObjects", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1825 "k0gram.tab.c"
    break;

  case 5:
#line 59 "k0gram.y"
                        {(yyval.treeptr) = create_node(1001, "topLevelObject", 1, (yyvsp[0].treeptr));}
#line 1831 "k0gram.tab.c"
    break;

  case 6:
#line 60 "k0gram.y"
                       {(yyval.treeptr) = create_node(1001, "topLevelObject", 1, (yyvsp[0].treeptr));}
#line 1837 "k0gram.tab.c"
    break;

  case 7:
#line 61 "k0gram.y"
                        {(yyval.treeptr) = create_node(1001, "topLevelObject", 1, (yyvsp[0].treeptr));}
#line 1843 "k0gram.tab.c"
    break;

  case 11:
#line 71 "k0gram.y"
                     {(yyval.treeptr) = create_node(1002, "declaration", 1, (yyvsp[0].treeptr));}
#line 1849 "k0gram.tab.c"
    break;

  case 12:
#line 72 "k0gram.y"
                          {(yyval.treeptr) = create_node(1002, "declaration", 1, (yyvsp[0].treeptr));}
#line 1855 "k0gram.tab.c"
    break;

  case 13:
#line 73 "k0gram.y"
                          {(yyval.treeptr) = create_node(1002, "declaration", 1, (yyvsp[0].treeptr));}
#line 1861 "k0gram.tab.c"
    break;

  case 14:
#line 77 "k0gram.y"
                                                                   {(yyval.treeptr) = create_node(1003, "classDeclaration", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1867 "k0gram.tab.c"
    break;

  case 15:
#line 78 "k0gram.y"
                                                               {(yyval.treeptr) = create_node(1003, "classDeclaration", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1873 "k0gram.tab.c"
    break;

  case 16:
#line 82 "k0gram.y"
                             {(yyval.treeptr) = create_node(1004, "classBody", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1879 "k0gram.tab.c"
    break;

  case 17:
#line 86 "k0gram.y"
           {(yyval.treeptr) = NULL;}
#line 1885 "k0gram.tab.c"
    break;

  case 18:
#line 87 "k0gram.y"
                               {(yyval.treeptr) = create_node(1005, "classMembers", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1891 "k0gram.tab.c"
    break;

  case 19:
#line 91 "k0gram.y"
                        {(yyval.treeptr) = create_node(1006, "classMember", 1, (yyvsp[0].treeptr));}
#line 1897 "k0gram.tab.c"
    break;

  case 20:
#line 92 "k0gram.y"
                          {(yyval.treeptr) = create_node(1006, "classMember", 1, (yyvsp[0].treeptr));}
#line 1903 "k0gram.tab.c"
    break;

  case 21:
#line 96 "k0gram.y"
                                 {(yyval.treeptr) = create_node(1007, "objectDeclaration", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1909 "k0gram.tab.c"
    break;

  case 22:
#line 100 "k0gram.y"
                             {(yyval.treeptr) = create_node(1008, "objectBody", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1915 "k0gram.tab.c"
    break;

  case 23:
#line 104 "k0gram.y"
                                                                                                                                    {(yyval.treeptr) = create_node(1009, "functionDeclaration", 8, (yyvsp[-7].treeptr), (yyvsp[-6].treeptr), (yyvsp[-5].treeptr), (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1921 "k0gram.tab.c"
    break;

  case 24:
#line 105 "k0gram.y"
                                                                                                                     {(yyval.treeptr) = create_node(1009, "functionDeclaration", 6, (yyvsp[-5].treeptr), (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1927 "k0gram.tab.c"
    break;

  case 25:
#line 109 "k0gram.y"
                                                  {(yyval.treeptr) = create_node(1010, "functionValueParameters", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1933 "k0gram.tab.c"
    break;

  case 26:
#line 113 "k0gram.y"
                                                               {(yyval.treeptr) = create_node(1011, "optional_functionValueParameter", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1939 "k0gram.tab.c"
    break;

  case 27:
#line 114 "k0gram.y"
                                                           {(yyval.treeptr) = create_node(1011, "optional_functionValueParameter", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1945 "k0gram.tab.c"
    break;

  case 28:
#line 115 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 1951 "k0gram.tab.c"
    break;

  case 29:
#line 119 "k0gram.y"
                              {(yyval.treeptr) = create_node(1012, "functionValueParameter", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1957 "k0gram.tab.c"
    break;

  case 30:
#line 123 "k0gram.y"
                                {(yyval.treeptr) = create_node(1013, "parameter", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1963 "k0gram.tab.c"
    break;

  case 31:
#line 127 "k0gram.y"
                                                               {(yyval.treeptr) = create_node(1014, "multi_comma_functionParameter", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1969 "k0gram.tab.c"
    break;

  case 32:
#line 128 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 1975 "k0gram.tab.c"
    break;

  case 33:
#line 132 "k0gram.y"
          {(yyval.treeptr) = create_node(1015, "functionBody", 1, (yyvsp[0].treeptr));}
#line 1981 "k0gram.tab.c"
    break;

  case 34:
#line 133 "k0gram.y"
                                      {(yyval.treeptr) = create_node(1015, "functionBody", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 1987 "k0gram.tab.c"
    break;

  case 35:
#line 137 "k0gram.y"
                 {(yyval.treeptr) = create_node(1016, "optional_functionBody", 1, (yyvsp[0].treeptr));}
#line 1993 "k0gram.tab.c"
    break;

  case 36:
#line 138 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 1999 "k0gram.tab.c"
    break;

  case 37:
#line 142 "k0gram.y"
                                                                                                                                   {(yyval.treeptr) = create_node(1017, "propertyDeclaration", 8, (yyvsp[-7].treeptr), (yyvsp[-6].treeptr), (yyvsp[-5].treeptr), (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2005 "k0gram.tab.c"
    break;

  case 38:
#line 143 "k0gram.y"
                                                                                                                    {(yyval.treeptr) = create_node(1017, "propertyDeclaration", 6, (yyvsp[-5].treeptr), (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2011 "k0gram.tab.c"
    break;

  case 39:
#line 144 "k0gram.y"
                                                                                                          {(yyval.treeptr) = create_node(1017, "propertyDeclaration", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2017 "k0gram.tab.c"
    break;

  case 40:
#line 148 "k0gram.y"
        {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2023 "k0gram.tab.c"
    break;

  case 41:
#line 149 "k0gram.y"
          {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2029 "k0gram.tab.c"
    break;

  case 42:
#line 153 "k0gram.y"
          {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2035 "k0gram.tab.c"
    break;

  case 43:
#line 154 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2041 "k0gram.tab.c"
    break;

  case 44:
#line 158 "k0gram.y"
                    {(yyval.treeptr) = create_node(1018, "variableDeclaration", 1, (yyvsp[-2].treeptr));}
#line 2047 "k0gram.tab.c"
    break;

  case 45:
#line 159 "k0gram.y"
           {(yyval.treeptr) = create_node(1018, "variableDeclaration", 1, (yyvsp[0].treeptr));}
#line 2053 "k0gram.tab.c"
    break;

  case 46:
#line 163 "k0gram.y"
                                                                                     {(yyval.treeptr) = create_node(1019, "multiVariableDeclaration", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2059 "k0gram.tab.c"
    break;

  case 47:
#line 167 "k0gram.y"
                                                              {(yyval.treeptr) = create_node(1020, "multi_comma_variableDeclaration", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2065 "k0gram.tab.c"
    break;

  case 48:
#line 168 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2071 "k0gram.tab.c"
    break;

  case 49:
#line 172 "k0gram.y"
                        {(yyval.treeptr) = create_node(1021, "multivariable_variableDeclaration", 1, (yyvsp[0].treeptr));}
#line 2077 "k0gram.tab.c"
    break;

  case 50:
#line 173 "k0gram.y"
                               {(yyval.treeptr) = create_node(1021, "multivariable_variableDeclaration", 1, (yyvsp[0].treeptr));}
#line 2083 "k0gram.tab.c"
    break;

  case 51:
#line 177 "k0gram.y"
                   {(yyval.treeptr) = create_node(1022, "optional_typeParameters", 1, (yyvsp[0].treeptr));}
#line 2089 "k0gram.tab.c"
    break;

  case 52:
#line 178 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2095 "k0gram.tab.c"
    break;

  case 53:
#line 182 "k0gram.y"
                                                                   {(yyval.treeptr) = create_node(1023, "typeParameters", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2101 "k0gram.tab.c"
    break;

  case 54:
#line 186 "k0gram.y"
                     {(yyval.treeptr) = create_node(1024, "typeParameter", 1, (yyvsp[0].treeptr));}
#line 2107 "k0gram.tab.c"
    break;

  case 55:
#line 190 "k0gram.y"
                                            {(yyval.treeptr) = create_node(1025, "multi_typeParameter", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2113 "k0gram.tab.c"
    break;

  case 56:
#line 191 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2119 "k0gram.tab.c"
    break;

  case 57:
#line 195 "k0gram.y"
                 {(yyval.treeptr) = create_node(1026, "type", 1, (yyvsp[0].treeptr));}
#line 2125 "k0gram.tab.c"
    break;

  case 58:
#line 196 "k0gram.y"
                  {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2131 "k0gram.tab.c"
    break;

  case 59:
#line 200 "k0gram.y"
                                          {(yyval.treeptr) = create_node(1027, "nullableType", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2137 "k0gram.tab.c"
    break;

  case 60:
#line 204 "k0gram.y"
                            {(yyval.treeptr) = create_node(1028, "multi_quest", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2143 "k0gram.tab.c"
    break;

  case 61:
#line 205 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2149 "k0gram.tab.c"
    break;

  case 62:
#line 209 "k0gram.y"
                      {(yyval.treeptr) = create_node(1029, "typeRef_parenthesizedType", 1, (yyvsp[0].treeptr));}
#line 2155 "k0gram.tab.c"
    break;

  case 63:
#line 210 "k0gram.y"
               {(yyval.treeptr) = create_node(1029, "typeRef_parenthesizedType", 1, (yyvsp[0].treeptr));}
#line 2161 "k0gram.tab.c"
    break;

  case 64:
#line 214 "k0gram.y"
                       {(yyval.treeptr) = create_node(1030, "parenthesizedType", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2167 "k0gram.tab.c"
    break;

  case 65:
#line 218 "k0gram.y"
                                            {(yyval.treeptr) = create_node(1031, "userType", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2173 "k0gram.tab.c"
    break;

  case 66:
#line 222 "k0gram.y"
                                   {(yyval.treeptr) = create_node(1032, "simpleUserType", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2179 "k0gram.tab.c"
    break;

  case 67:
#line 223 "k0gram.y"
                       {(yyval.treeptr) = create_node(1032, "simpleUserType", 1, (yyvsp[0].treeptr));}
#line 2185 "k0gram.tab.c"
    break;

  case 68:
#line 227 "k0gram.y"
                                                {(yyval.treeptr) = create_node(1033, "multi_dot_simpleUserType", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2191 "k0gram.tab.c"
    break;

  case 69:
#line 228 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2197 "k0gram.tab.c"
    break;

  case 70:
#line 232 "k0gram.y"
                                                                           {(yyval.treeptr) = create_node(1034, "typeArguments", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2203 "k0gram.tab.c"
    break;

  case 71:
#line 236 "k0gram.y"
                                                    {(yyval.treeptr) = create_node(1035, "multi_comma_typeProjection", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2209 "k0gram.tab.c"
    break;

  case 72:
#line 237 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2215 "k0gram.tab.c"
    break;

  case 73:
#line 241 "k0gram.y"
         {(yyval.treeptr) = create_node(1036, "typeProjection", 1, (yyvsp[0].treeptr));}
#line 2221 "k0gram.tab.c"
    break;

  case 74:
#line 242 "k0gram.y"
           {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2227 "k0gram.tab.c"
    break;

  case 75:
#line 246 "k0gram.y"
                           {(yyval.treeptr) = create_node(1037, "block", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2233 "k0gram.tab.c"
    break;

  case 76:
#line 250 "k0gram.y"
                                          {(yyval.treeptr) = create_node(1038, "statements", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2239 "k0gram.tab.c"
    break;

  case 77:
#line 251 "k0gram.y"
                                  {(yyval.treeptr) = create_node(1038, "statements", 1, (yyvsp[0].treeptr));}
#line 2245 "k0gram.tab.c"
    break;

  case 78:
#line 255 "k0gram.y"
                              {(yyval.treeptr) = create_node(1039, "optional_statement_sequence", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2251 "k0gram.tab.c"
    break;

  case 79:
#line 256 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2257 "k0gram.tab.c"
    break;

  case 80:
#line 260 "k0gram.y"
                                    {(yyval.treeptr) = create_node(1040, "semis_statement", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2263 "k0gram.tab.c"
    break;

  case 81:
#line 261 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2269 "k0gram.tab.c"
    break;

  case 82:
#line 265 "k0gram.y"
              {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2275 "k0gram.tab.c"
    break;

  case 83:
#line 266 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2281 "k0gram.tab.c"
    break;

  case 84:
#line 270 "k0gram.y"
                {(yyval.treeptr) = create_node(1041, "statement", 1, (yyvsp[0].treeptr));}
#line 2287 "k0gram.tab.c"
    break;

  case 85:
#line 271 "k0gram.y"
                 {(yyval.treeptr) = create_node(1041, "statement", 1, (yyvsp[0].treeptr));}
#line 2293 "k0gram.tab.c"
    break;

  case 86:
#line 272 "k0gram.y"
                 {(yyval.treeptr) = create_node(1041, "statement", 1, (yyvsp[0].treeptr));}
#line 2299 "k0gram.tab.c"
    break;

  case 87:
#line 273 "k0gram.y"
                    {(yyval.treeptr) = create_node(1041, "statement", 1, (yyvsp[0].treeptr));}
#line 2305 "k0gram.tab.c"
    break;

  case 88:
#line 274 "k0gram.y"
                      {(yyval.treeptr) = create_node(1041, "statement", 1, (yyvsp[0].treeptr));}
#line 2311 "k0gram.tab.c"
    break;

  case 89:
#line 278 "k0gram.y"
                               {(yyval.treeptr) = create_node(1042, "assignment", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2317 "k0gram.tab.c"
    break;

  case 90:
#line 282 "k0gram.y"
                                            {(yyval.treeptr) = create_node(1043, "directly_assign", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2323 "k0gram.tab.c"
    break;

  case 91:
#line 283 "k0gram.y"
                                                 {(yyval.treeptr) = create_node(1043, "directly_assign", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2329 "k0gram.tab.c"
    break;

  case 92:
#line 287 "k0gram.y"
                   {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2335 "k0gram.tab.c"
    break;

  case 93:
#line 288 "k0gram.y"
                     {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2341 "k0gram.tab.c"
    break;

  case 94:
#line 289 "k0gram.y"
                      {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2347 "k0gram.tab.c"
    break;

  case 95:
#line 290 "k0gram.y"
                     {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2353 "k0gram.tab.c"
    break;

  case 96:
#line 291 "k0gram.y"
                     {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2359 "k0gram.tab.c"
    break;

  case 97:
#line 295 "k0gram.y"
                          {(yyval.treeptr) = create_node(1044, "optional_eq_exp", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2365 "k0gram.tab.c"
    break;

  case 98:
#line 296 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2371 "k0gram.tab.c"
    break;

  case 99:
#line 300 "k0gram.y"
                                                                   {(yyval.treeptr) = create_node(1045, "loopStatement", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2377 "k0gram.tab.c"
    break;

  case 100:
#line 301 "k0gram.y"
                                                                                  {(yyval.treeptr) = create_node(1045, "loopStatement", 7, (yyvsp[-6].treeptr), (yyvsp[-5].treeptr), (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2383 "k0gram.tab.c"
    break;

  case 101:
#line 305 "k0gram.y"
          {(yyval.treeptr) = create_node(1046, "controlStructureBody", 1, (yyvsp[0].treeptr));}
#line 2389 "k0gram.tab.c"
    break;

  case 102:
#line 306 "k0gram.y"
                {(yyval.treeptr) = create_node(1046, "controlStructureBody", 1, (yyvsp[0].treeptr));}
#line 2395 "k0gram.tab.c"
    break;

  case 103:
#line 310 "k0gram.y"
                         {(yyval.treeptr) = create_node(1047, "control_structure_body_or_comma", 1, (yyvsp[0].treeptr));}
#line 2401 "k0gram.tab.c"
    break;

  case 104:
#line 311 "k0gram.y"
            {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2407 "k0gram.tab.c"
    break;

  case 105:
#line 315 "k0gram.y"
                        {(yyval.treeptr) = create_node(1048, "variable_multivariable", 1, (yyvsp[0].treeptr));}
#line 2413 "k0gram.tab.c"
    break;

  case 106:
#line 316 "k0gram.y"
                               {(yyval.treeptr) = create_node(1048, "variable_multivariable", 1, (yyvsp[0].treeptr));}
#line 2419 "k0gram.tab.c"
    break;

  case 107:
#line 320 "k0gram.y"
                      {(yyval.treeptr) = create_node(1049, "jumpExpression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2425 "k0gram.tab.c"
    break;

  case 108:
#line 321 "k0gram.y"
             {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2431 "k0gram.tab.c"
    break;

  case 109:
#line 322 "k0gram.y"
               {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2437 "k0gram.tab.c"
    break;

  case 110:
#line 323 "k0gram.y"
            {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2443 "k0gram.tab.c"
    break;

  case 111:
#line 327 "k0gram.y"
                {(yyval.treeptr) = create_node(1050, "expression", 1, (yyvsp[0].treeptr));}
#line 2449 "k0gram.tab.c"
    break;

  case 112:
#line 331 "k0gram.y"
                {(yyval.treeptr) = create_node(1051, "disjuction", 1, (yyvsp[0].treeptr));}
#line 2455 "k0gram.tab.c"
    break;

  case 113:
#line 332 "k0gram.y"
                                   {(yyval.treeptr) = create_node(1051, "disjuction", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2461 "k0gram.tab.c"
    break;

  case 114:
#line 336 "k0gram.y"
             {(yyval.treeptr) = create_node(1052, "conjuction", 1, (yyvsp[0].treeptr));}
#line 2467 "k0gram.tab.c"
    break;

  case 115:
#line 337 "k0gram.y"
                                {(yyval.treeptr) = create_node(1052, "conjuction", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2473 "k0gram.tab.c"
    break;

  case 116:
#line 341 "k0gram.y"
               {(yyval.treeptr) = create_node(1053, "equality", 1, (yyvsp[0].treeptr));}
#line 2479 "k0gram.tab.c"
    break;

  case 117:
#line 342 "k0gram.y"
                                            {(yyval.treeptr) = create_node(1053, "equality", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2485 "k0gram.tab.c"
    break;

  case 118:
#line 346 "k0gram.y"
         {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2491 "k0gram.tab.c"
    break;

  case 119:
#line 347 "k0gram.y"
             {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2497 "k0gram.tab.c"
    break;

  case 120:
#line 351 "k0gram.y"
                              {(yyval.treeptr) = create_node(1054, "comparison", 1, (yyvsp[0].treeptr));}
#line 2503 "k0gram.tab.c"
    break;

  case 121:
#line 352 "k0gram.y"
                                                               {(yyval.treeptr) = create_node(1054, "comparison", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2509 "k0gram.tab.c"
    break;

  case 122:
#line 356 "k0gram.y"
           {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2515 "k0gram.tab.c"
    break;

  case 123:
#line 357 "k0gram.y"
             {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2521 "k0gram.tab.c"
    break;

  case 124:
#line 358 "k0gram.y"
         {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2527 "k0gram.tab.c"
    break;

  case 125:
#line 359 "k0gram.y"
         {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2533 "k0gram.tab.c"
    break;

  case 126:
#line 363 "k0gram.y"
                    {(yyval.treeptr) = create_node(1055, "genericCallLikeComparison", 1, (yyvsp[0].treeptr));}
#line 2539 "k0gram.tab.c"
    break;

  case 127:
#line 364 "k0gram.y"
                                         {(yyval.treeptr) = create_node(1055, "genericCallLikeComparison", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2545 "k0gram.tab.c"
    break;

  case 128:
#line 368 "k0gram.y"
                    {(yyval.treeptr) = create_node(1056, "elvisExpression", 1, (yyvsp[0].treeptr));}
#line 2551 "k0gram.tab.c"
    break;

  case 129:
#line 369 "k0gram.y"
                                                  {(yyval.treeptr) = create_node(1056, "elvisExpression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2557 "k0gram.tab.c"
    break;

  case 130:
#line 373 "k0gram.y"
                       {(yyval.treeptr) = create_node(1057, "rangeExpression", 1, (yyvsp[0].treeptr));}
#line 2563 "k0gram.tab.c"
    break;

  case 131:
#line 374 "k0gram.y"
                                               {(yyval.treeptr) = create_node(1057, "rangeExpression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2569 "k0gram.tab.c"
    break;

  case 132:
#line 378 "k0gram.y"
                             {(yyval.treeptr) = create_node(1058, "additiveExpression", 1, (yyvsp[0].treeptr));}
#line 2575 "k0gram.tab.c"
    break;

  case 133:
#line 379 "k0gram.y"
                                                      {(yyval.treeptr) = create_node(1058, "additiveExpression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2581 "k0gram.tab.c"
    break;

  case 134:
#line 380 "k0gram.y"
                                                      {(yyval.treeptr) = create_node(1058, "additiveExpression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2587 "k0gram.tab.c"
    break;

  case 135:
#line 384 "k0gram.y"
                           {(yyval.treeptr) = create_node(1059, "multiplicativeExpression", 1, (yyvsp[0].treeptr));}
#line 2593 "k0gram.tab.c"
    break;

  case 136:
#line 385 "k0gram.y"
                                                           {(yyval.treeptr) = create_node(1059, "multiplicativeExpression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2599 "k0gram.tab.c"
    break;

  case 137:
#line 386 "k0gram.y"
                                                          {(yyval.treeptr) = create_node(1059, "multiplicativeExpression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2605 "k0gram.tab.c"
    break;

  case 138:
#line 387 "k0gram.y"
                                                          {(yyval.treeptr) = create_node(1059, "multiplicativeExpression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2611 "k0gram.tab.c"
    break;

  case 139:
#line 391 "k0gram.y"
                                             {(yyval.treeptr) = create_node(1060, "prefixUnaryExpression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2617 "k0gram.tab.c"
    break;

  case 140:
#line 395 "k0gram.y"
                                          {(yyval.treeptr) = create_node(1061, "multi_unaryPrefix", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2623 "k0gram.tab.c"
    break;

  case 141:
#line 396 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2629 "k0gram.tab.c"
    break;

  case 142:
#line 400 "k0gram.y"
        {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2635 "k0gram.tab.c"
    break;

  case 143:
#line 401 "k0gram.y"
          {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2641 "k0gram.tab.c"
    break;

  case 144:
#line 402 "k0gram.y"
           {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2647 "k0gram.tab.c"
    break;

  case 145:
#line 403 "k0gram.y"
           {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2653 "k0gram.tab.c"
    break;

  case 146:
#line 404 "k0gram.y"
                            {(yyval.treeptr) = create_node(1062, "prefixUnaryOperator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2659 "k0gram.tab.c"
    break;

  case 147:
#line 408 "k0gram.y"
                                               {(yyval.treeptr) = create_node(1063, "postfixUnaryExpression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2665 "k0gram.tab.c"
    break;

  case 148:
#line 412 "k0gram.y"
                                                {(yyval.treeptr) = create_node(1064, "multi_postfixUnarySuffix", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2671 "k0gram.tab.c"
    break;

  case 149:
#line 413 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2677 "k0gram.tab.c"
    break;

  case 150:
#line 417 "k0gram.y"
                         {(yyval.treeptr) = create_node(1065, "postfixUnarySuffix", 1, (yyvsp[0].treeptr));}
#line 2683 "k0gram.tab.c"
    break;

  case 151:
#line 418 "k0gram.y"
                     {(yyval.treeptr) = create_node(1065, "postfixUnarySuffix", 1, (yyvsp[0].treeptr));}
#line 2689 "k0gram.tab.c"
    break;

  case 152:
#line 419 "k0gram.y"
                 {(yyval.treeptr) = create_node(1065, "postfixUnarySuffix", 1, (yyvsp[0].treeptr));}
#line 2695 "k0gram.tab.c"
    break;

  case 153:
#line 420 "k0gram.y"
                       {(yyval.treeptr) = create_node(1065, "postfixUnarySuffix", 1, (yyvsp[0].treeptr));}
#line 2701 "k0gram.tab.c"
    break;

  case 154:
#line 424 "k0gram.y"
         {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2707 "k0gram.tab.c"
    break;

  case 155:
#line 425 "k0gram.y"
           {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2713 "k0gram.tab.c"
    break;

  case 156:
#line 426 "k0gram.y"
                            {(yyval.treeptr) = create_node(1066, "postfixUnaryOperator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2719 "k0gram.tab.c"
    break;

  case 157:
#line 430 "k0gram.y"
                                                     {(yyval.treeptr) = create_node(1067, "navigationSuffix", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2725 "k0gram.tab.c"
    break;

  case 158:
#line 434 "k0gram.y"
        {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2731 "k0gram.tab.c"
    break;

  case 159:
#line 435 "k0gram.y"
                      {(yyval.treeptr) = create_node(1068, "memberAccessOperator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2737 "k0gram.tab.c"
    break;

  case 160:
#line 439 "k0gram.y"
                     {(yyval.treeptr) = create_node(1069, "identifier_expression_class", 1, (yyvsp[0].treeptr));}
#line 2743 "k0gram.tab.c"
    break;

  case 161:
#line 440 "k0gram.y"
                              {(yyval.treeptr) = create_node(1069, "identifier_expression_class", 1, (yyvsp[0].treeptr));}
#line 2749 "k0gram.tab.c"
    break;

  case 162:
#line 441 "k0gram.y"
            {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2755 "k0gram.tab.c"
    break;

  case 163:
#line 445 "k0gram.y"
                            {(yyval.treeptr) = create_node(1070, "primaryExpression", 1, (yyvsp[0].treeptr));}
#line 2761 "k0gram.tab.c"
    break;

  case 164:
#line 446 "k0gram.y"
                 {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2767 "k0gram.tab.c"
    break;

  case 165:
#line 447 "k0gram.y"
                   {(yyval.treeptr) = create_node(1070, "primaryExpression", 1, (yyvsp[0].treeptr));}
#line 2773 "k0gram.tab.c"
    break;

  case 166:
#line 448 "k0gram.y"
                      {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2779 "k0gram.tab.c"
    break;

  case 167:
#line 449 "k0gram.y"
                     {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2785 "k0gram.tab.c"
    break;

  case 168:
#line 450 "k0gram.y"
                    {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2791 "k0gram.tab.c"
    break;

  case 169:
#line 451 "k0gram.y"
                     {(yyval.treeptr) = create_node(1070, "primaryExpression", 1, (yyvsp[0].treeptr));}
#line 2797 "k0gram.tab.c"
    break;

  case 170:
#line 452 "k0gram.y"
                        {(yyval.treeptr) = create_node(1070, "primaryExpression", 1, (yyvsp[0].treeptr));}
#line 2803 "k0gram.tab.c"
    break;

  case 171:
#line 456 "k0gram.y"
                             {(yyval.treeptr) = create_node(1071, "parenthesizedExpression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2809 "k0gram.tab.c"
    break;

  case 172:
#line 460 "k0gram.y"
                                               {(yyval.treeptr) = create_node(1072, "functionCall", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2815 "k0gram.tab.c"
    break;

  case 173:
#line 464 "k0gram.y"
               {(yyval.treeptr) = create_node(1073, "functionArguments", 1, (yyvsp[0].treeptr));}
#line 2821 "k0gram.tab.c"
    break;

  case 174:
#line 465 "k0gram.y"
                                         {(yyval.treeptr) = create_node(1073, "functionArguments", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2827 "k0gram.tab.c"
    break;

  case 175:
#line 466 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2833 "k0gram.tab.c"
    break;

  case 176:
#line 470 "k0gram.y"
                   {(yyval.treeptr) = create_node(1074, "callSuffix", 1, (yyvsp[0].treeptr));}
#line 2839 "k0gram.tab.c"
    break;

  case 177:
#line 474 "k0gram.y"
                                         {(yyval.treeptr) = create_node(1075, "valueArguments", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2845 "k0gram.tab.c"
    break;

  case 178:
#line 478 "k0gram.y"
                                                           {(yyval.treeptr) = create_node(1076, "optional_valueArgument", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2851 "k0gram.tab.c"
    break;

  case 179:
#line 479 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2857 "k0gram.tab.c"
    break;

  case 180:
#line 483 "k0gram.y"
                                                  {(yyval.treeptr) = create_node(1077, "multi_comma_valueArgument", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2863 "k0gram.tab.c"
    break;

  case 181:
#line 484 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2869 "k0gram.tab.c"
    break;

  case 182:
#line 488 "k0gram.y"
                                                           {(yyval.treeptr) = create_node(1078, "valueArgument", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2875 "k0gram.tab.c"
    break;

  case 183:
#line 492 "k0gram.y"
                                {(yyval.treeptr) = create_node(1079, "optional_simpleIdentifier_EQ", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2881 "k0gram.tab.c"
    break;

  case 184:
#line 493 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2887 "k0gram.tab.c"
    break;

  case 185:
#line 497 "k0gram.y"
         {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 2893 "k0gram.tab.c"
    break;

  case 186:
#line 498 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2899 "k0gram.tab.c"
    break;

  case 187:
#line 502 "k0gram.y"
                    {(yyval.treeptr) = create_node(1080, "collectionLiteral", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2905 "k0gram.tab.c"
    break;

  case 188:
#line 503 "k0gram.y"
                                       {(yyval.treeptr) = create_node(1080, "collectionLiteral", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2911 "k0gram.tab.c"
    break;

  case 189:
#line 504 "k0gram.y"
                                 {(yyval.treeptr) = create_node(1080, "collectionLiteral", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2917 "k0gram.tab.c"
    break;

  case 190:
#line 505 "k0gram.y"
                                                        {(yyval.treeptr) = create_node(1080, "collectionLiteral", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2923 "k0gram.tab.c"
    break;

  case 191:
#line 506 "k0gram.y"
                                                              {(yyval.treeptr) = create_node(1080, "collectionLiteral", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2929 "k0gram.tab.c"
    break;

  case 192:
#line 510 "k0gram.y"
                                            {(yyval.treeptr) = create_node(1081, "multi_comma_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2935 "k0gram.tab.c"
    break;

  case 193:
#line 511 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 2941 "k0gram.tab.c"
    break;

  case 194:
#line 515 "k0gram.y"
                                                                     {(yyval.treeptr) = create_node(1082, "indexingSuffix", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2947 "k0gram.tab.c"
    break;

  case 195:
#line 519 "k0gram.y"
                          {(yyval.treeptr) = create_node(1083, "assignableExpression", 1, (yyvsp[0].treeptr));}
#line 2953 "k0gram.tab.c"
    break;

  case 196:
#line 520 "k0gram.y"
                                        {(yyval.treeptr) = create_node(1083, "assignableExpression", 1, (yyvsp[0].treeptr));}
#line 2959 "k0gram.tab.c"
    break;

  case 197:
#line 524 "k0gram.y"
                                       {(yyval.treeptr) = create_node(1084, "parenthesizedAssignableExpression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2965 "k0gram.tab.c"
    break;

  case 198:
#line 528 "k0gram.y"
                                            {(yyval.treeptr) = create_node(1085, "directlyAssignableExpression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2971 "k0gram.tab.c"
    break;

  case 199:
#line 529 "k0gram.y"
                       {(yyval.treeptr) = create_node(1085, "directlyAssignableExpression", 1, (yyvsp[0].treeptr));}
#line 2977 "k0gram.tab.c"
    break;

  case 200:
#line 530 "k0gram.y"
                                                {(yyval.treeptr) = create_node(1085, "directlyAssignableExpression", 1, (yyvsp[0].treeptr));}
#line 2983 "k0gram.tab.c"
    break;

  case 201:
#line 534 "k0gram.y"
                                       {(yyval.treeptr) = create_node(1086, "parenthesizedDirectlyAssignableExpression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2989 "k0gram.tab.c"
    break;

  case 202:
#line 538 "k0gram.y"
                   {(yyval.treeptr) = create_node(1087, "assignableSuffix", 1, (yyvsp[0].treeptr));}
#line 2995 "k0gram.tab.c"
    break;

  case 203:
#line 539 "k0gram.y"
                    {(yyval.treeptr) = create_node(1087, "assignableSuffix", 1, (yyvsp[0].treeptr));}
#line 3001 "k0gram.tab.c"
    break;

  case 204:
#line 543 "k0gram.y"
          {(yyval.treeptr) = (yyvsp[0].treeptr);}
#line 3007 "k0gram.tab.c"
    break;

  case 205:
#line 544 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 3013 "k0gram.tab.c"
    break;

  case 206:
#line 548 "k0gram.y"
               {(yyval.treeptr) = create_node(1088, "optional_colon_type", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 3019 "k0gram.tab.c"
    break;

  case 207:
#line 549 "k0gram.y"
             {(yyval.treeptr) = NULL;}
#line 3025 "k0gram.tab.c"
    break;

  case 208:
#line 553 "k0gram.y"
                 {(yyval.treeptr) = create_node(1089, "receiverType", 1, (yyvsp[0].treeptr));}
#line 3031 "k0gram.tab.c"
    break;


#line 3035 "k0gram.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 556 "k0gram.y"


const char *yyname(int sym)
{ 
   return yytname[sym-RESERVED+3];
}
