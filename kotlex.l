/* -*-bison-*- */
/* Simple wc implementation in Flex */
%option noyywrap
%option noinput
%option nounput
%option yylineno

%{
    #include "k0gram.tab.h"
    #include "funcs.h"
    #include "tree.h"
    #include <stdio.h>
    #include <stdlib.h>
    int words = 0, chars = 0;
%}

%x comment

whitespace           [ \t\n\f]+


DecDigitNoZero       [1-9]
DIGIT                [0-9]
DecDigitOrSeparator  ({DIGIT}|_)
DecDigits            ({DIGIT}({DecDigitOrSeparator})*{DIGIT})|{DIGIT}
DoubleExponent       ([eE][+-]?{DecDigits})
FloatLiteral         ({DecDigits}\.{DecDigits}[fF]|{DecDigits}[fF])
DoubleLiteral        ({DecDigits}\.{DecDigits}({DoubleExponent})?|{DecDigits}{DoubleExponent})
RealLiteral          ({FloatLiteral}|{DoubleLiteral})
IntegerLiteral       ({DecDigitNoZero}({DecDigitOrSeparator})*{DIGIT}|{DIGIT})
HexDigit             ({DIGIT}|[A-Fa-f])
HexDigitOrSeparator  ({HexDigit}|_)
HexLiteral           (0[xX]{HexDigit}({HexDigitOrSeparator})*{HexDigit}|0[xX]{HexDigit})
BinDigit             [01]
BinDigitOrSeparator  ({BinDigit}|_)
BinLiteral           (0[bB]{BinDigit}({BinDigitOrSeparator})*{BinDigit}|0[bB]{BinDigit})
UnsignedLiteral      (({IntegerLiteral}|{HexLiteral}|{BinLiteral})[uU][L]?)
LongLiteral          (({IntegerLiteral}|{HexLiteral}|{BinLiteral})L)
BooleanLiteral       (true|false)
NullLiteral          null
UniCharacterLiteral  ('(\\.|[^\\'\n])')

%%

{whitespace}        { /* discard */ }
"//"[^\r\n]*       { /* Discard Line Comments */ }

"/*"         BEGIN(comment);
<comment>[^*\n]*
<comment>"*"+[^*/\n]*
<comment>"*"+"/"        BEGIN(INITIAL);

"."         { yylval.treeptr = create_token_node(DOT); return DOT; }
","         { yylval.treeptr = create_token_node(COMMA); return COMMA; }
"{"         { yylval.treeptr = create_token_node(LCURL); return LCURL; }
"}"         { yylval.treeptr = create_token_node(RCURL); return RCURL; }
"["         { yylval.treeptr = create_token_node(LSQUARE); return LSQUARE; }
"]"         { yylval.treeptr = create_token_node(RSQUARE); return RSQUARE; }
"("         { yylval.treeptr = create_token_node(LPAREN); return LPAREN; }
")"         { yylval.treeptr = create_token_node(RPAREN); return RPAREN; }
"..."       { yylval.treeptr = create_token_node(RESERVED); return RESERVED; }
"#"         { yylval.treeptr = create_token_node(HASH); return HASH; }
":"         { yylval.treeptr = create_token_node(COLON); return COLON; }
";"         { yylval.treeptr = create_token_node(SEMICOLON); return SEMICOLON; }

"return@"   { yylval.treeptr = create_token_node(RETURN_AT); return RETURN_AT; }
"continue@" { yylval.treeptr = create_token_node(CONTINUE_AT); return CONTINUE_AT; }
"break@"    { yylval.treeptr = create_token_node(BREAK_AT); return BREAK_AT; }
"this@"     { yylval.treeptr = create_token_node(THIS_AT); return THIS_AT; }
"super@"    { yylval.treeptr = create_token_node(SUPER_AT); return SUPER_AT; }
"file"      { yylval.treeptr = create_token_node(K0FILE); return K0FILE; }
"field"     { yylval.treeptr = create_token_node(FIELD); return FIELD; }
"property"  { yylval.treeptr = create_token_node(PROPERTY); return PROPERTY; }
"get"       { yylval.treeptr = create_token_node(GET); return GET; }
"set"       { yylval.treeptr = create_token_node(SET); return SET; }
"receiver"  { yylval.treeptr = create_token_node(RECEIVER); return RECEIVER; }
"param"     { yylval.treeptr = create_token_node(PARAM); return PARAM; }
"setparam"  { yylval.treeptr = create_token_node(SETPARAM); return SETPARAM; }
"delegate"  { yylval.treeptr = create_token_node(DELEGATE); return DELEGATE; }
"package"   { yylval.treeptr = create_token_node(PACKAGE); return PACKAGE; }
"import"    { yylval.treeptr = create_token_node(IMPORT); return IMPORT; }
"class"     { yylval.treeptr = create_token_node(CLASS); return CLASS; }
"interface" { yylval.treeptr = create_token_node(INTERFACE); return INTERFACE; }
"fun"       { yylval.treeptr = create_token_node(FUN); return FUN; }
"object"    { yylval.treeptr = create_token_node(OBJECT); return OBJECT; }
"val"       { yylval.treeptr = create_token_node(VAL); return VAL; }
"var"       { yylval.treeptr = create_token_node(VAR); return VAR; }
"typealias" { yylval.treeptr = create_token_node(TYPEALIAS); return TYPEALIAS; }
"constructor" { yylval.treeptr = create_token_node(CONSTRUCTOR); return CONSTRUCTOR; }
"by"        { yylval.treeptr = create_token_node(BY); return BY; }
"companion" { yylval.treeptr = create_token_node(COMPANION); return COMPANION; }
"init"      { yylval.treeptr = create_token_node(INIT); return INIT; }
"this"      { yylval.treeptr = create_token_node(THIS); return THIS; }
"super"     { yylval.treeptr = create_token_node(SUPER); return SUPER; }
"typeof"    { yylval.treeptr = create_token_node(TYPEOF); return TYPEOF; }
"where"     { yylval.treeptr = create_token_node(WHERE); return WHERE; }
"if"        { yylval.treeptr = create_token_node(IF); return IF; }
"else"      { yylval.treeptr = create_token_node(ELSE); return ELSE; }
"when"      { yylval.treeptr = create_token_node(WHEN); return WHEN; }
"try"       { yylval.treeptr = create_token_node(TRY); return TRY; }
"catch"     { yylval.treeptr = create_token_node(CATCH); return CATCH; }
"finally"   { yylval.treeptr = create_token_node(FINALLY); return FINALLY; }
"for"       { yylval.treeptr = create_token_node(FOR); return FOR; }
"do"        { yylval.treeptr = create_token_node(DO); return DO; }
"while"     { yylval.treeptr = create_token_node(WHILE); return WHILE; }
"throw"     { yylval.treeptr = create_token_node(THROW); return THROW; }
"return"    { yylval.treeptr = create_token_node(RETURN); return RETURN; }
"continue"  { yylval.treeptr = create_token_node(CONTINUE); return CONTINUE; }
"break"     { yylval.treeptr = create_token_node(BREAK); return BREAK; }
"as"        { yylval.treeptr = create_token_node(AS); return AS; }
"is"        { yylval.treeptr = create_token_node(IS); return IS; }
"in"        { yylval.treeptr = create_token_node(IN); return IN; }
"!is"       { yylval.treeptr = create_token_node(NOT_IS); return NOT_IS; }
"!in"       { yylval.treeptr = create_token_node(NOT_IN); return NOT_IN; }
"out"       { yylval.treeptr = create_token_node(OUT); return OUT; }
"dynamic"   { yylval.treeptr = create_token_node(DYNAMIC); return DYNAMIC; }
"public"    { yylval.treeptr = create_token_node(PUBLIC); return PUBLIC; }
"private"   { yylval.treeptr = create_token_node(PRIVATE); return PRIVATE; }
"protected" { yylval.treeptr = create_token_node(PROTECTED); return PROTECTED; }
"internal"  { yylval.treeptr = create_token_node(INTERNAL); return INTERNAL; }
"enum"      { yylval.treeptr = create_token_node(ENUM); return ENUM; }
"sealed"    { yylval.treeptr = create_token_node(SEALED); return SEALED; }
"annotation" { yylval.treeptr = create_token_node(ANNOTATION); return ANNOTATION; }
"data"      { yylval.treeptr = create_token_node(DATA); return DATA; }
"inner"     { yylval.treeptr = create_token_node(INNER); return INNER; }
"value"     { yylval.treeptr = create_token_node(VALUE); return VALUE; }
"tailrec"   { yylval.treeptr = create_token_node(TAILREC); return TAILREC; }
"operator"  { yylval.treeptr = create_token_node(OPERATOR); return OPERATOR; }
"inline"    { yylval.treeptr = create_token_node(INLINE); return INLINE; }
"infix"     { yylval.treeptr = create_token_node(INFIX); return INFIX; }
"external"  { yylval.treeptr = create_token_node(EXTERNAL); return EXTERNAL; }
"suspend"   { yylval.treeptr = create_token_node(SUSPEND); return SUSPEND; }
"override"  { yylval.treeptr = create_token_node(OVERRIDE); return OVERRIDE; }
"abstract"  { yylval.treeptr = create_token_node(ABSTRACT); return ABSTRACT; }
"final"     { yylval.treeptr = create_token_node(FINAL); return FINAL; }
"open"      { yylval.treeptr = create_token_node(OPEN); return OPEN; }
"const"     { yylval.treeptr = create_token_node(CONST); return CONST; }
"lateinit"  { yylval.treeptr = create_token_node(LATEINIT); return LATEINIT; }
"vararg"    { yylval.treeptr = create_token_node(VARARG); return VARARG; }
"noinline"  { yylval.treeptr = create_token_node(NOINLINE); return NOINLINE; }
"crossinline" { yylval.treeptr = create_token_node(CROSSINLINE); return CROSSINLINE; }
"reified"   { yylval.treeptr = create_token_node(REIFIED); return REIFIED; }
"expect"    { yylval.treeptr = create_token_node(EXPECT); return EXPECT; }
"actual"    { yylval.treeptr = create_token_node(ACTUAL); return ACTUAL; }

"-"         { yylval.treeptr = create_token_node(SUB); return SUB; }
"*"         { yylval.treeptr = create_token_node(MULT); return MULT; }
"/"         { yylval.treeptr = create_token_node(DIV); return DIV; }
"%"         { yylval.treeptr = create_token_node(MOD); return MOD; }
"++"        { yylval.treeptr = create_token_node(INCR); return INCR; }
"--"        { yylval.treeptr = create_token_node(DECR); return DECR; }
"+="        { yylval.treeptr = create_token_node(ADD_ASSIGNMENT); return ADD_ASSIGNMENT; }
"-="        { yylval.treeptr = create_token_node(SUB_ASSIGNMENT); return SUB_ASSIGNMENT; }
"*="        { yylval.treeptr = create_token_node(MULT_ASSIGNMENT); return MULT_ASSIGNMENT; }
"/="        { yylval.treeptr = create_token_node(DIV_ASSIGNMENT); return DIV_ASSIGNMENT; }
"%="        { yylval.treeptr = create_token_node(MOD_ASSIGNMENT); return MOD_ASSIGNMENT; }
"=="        { yylval.treeptr = create_token_node(EQEQ); return EQEQ; }
"!="        { yylval.treeptr = create_token_node(EXCL_EQ); return EXCL_EQ; }
">"         { yylval.treeptr = create_token_node(RANGLE); return RANGLE; }
"<"         { yylval.treeptr = create_token_node(LANGLE); return LANGLE; }
">="        { yylval.treeptr = create_token_node(GE); return GE; }
"<="        { yylval.treeptr = create_token_node(LE); return LE; }
"&&"        { yylval.treeptr = create_token_node(CONJ); return CONJ; }
"||"        { yylval.treeptr = create_token_node(DISJ); return DISJ; }
"!"         { yylval.treeptr = create_token_node(EXCL_NO_WS); return EXCL_NO_WS; }
"==="       { yylval.treeptr = create_token_node(EQEQEQ); return EQEQEQ; }
"!=="       { yylval.treeptr = create_token_node(EXCL_EQEQ); return EXCL_EQEQ; }
"<-"        { yylval.treeptr = create_token_node(ARROW); return ARROW; }
"!!"        { yylval.treeptr = create_token_node(EXCL_NO_WS); return EXCL_NO_WS; }
"?."        { yylval.treeptr = create_token_node(QUEST_NO_WS); return QUEST_NO_WS; }
"?:"        { yylval.treeptr = create_token_node(QUEST_NO_WS); return QUEST_NO_WS; }
"::"        { yylval.treeptr = create_token_node(COLONCOLON); return COLONCOLON; }
".."        { yylval.treeptr = create_token_node(RANGE); return RANGE; }
"until"     { yylval.treeptr = create_token_node(RANGE_UNTIL); return RANGE_UNTIL; }
"?"         { yylval.treeptr = create_token_node(QUEST_WS); return QUEST_WS; }
"->"        { yylval.treeptr = create_token_node(ARROW); return ARROW; }
"@"         { yylval.treeptr = create_token_node(AT_NO_WS); return AT_NO_WS; }
"as?"       { yylval.treeptr = create_token_node(AS_SAFE); return AS_SAFE; }
"_"         { yylval.treeptr = create_token_node(RESERVED); return RESERVED; }

\"([^\\\"\n]|\\.)*\"  { yylval.treeptr = create_token_node(STRING_LITERAL); return STRING_LITERAL; }

([A-Za-z_][A-Za-z0-9_]*)|(`[^`]+`) {
    words++; chars += strlen(yytext);
    yylval.treeptr = create_token_node(IDENTIFIER);
    return IDENTIFIER;
}

. {
    chars++;
    printf("Unrecognized token: \"%s\"\n", yytext);
    yylval.treeptr = create_token_node(IDENTIFIER);
    return IDENTIFIER;
}
%%
