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

whitespace  [ \t\n\f]+

DecDigitNoZero [1-9]
DIGIT   [0-9]
DecDigitOrSeparator ({DIGIT}|_)
DecDigits ({DIGIT}({DecDigitOrSeparator})*{DIGIT})|{DIGIT}
DoubleExponent ([eE][+-]?{DecDigits})
RealLiteral ({FloatLiteral}|{DoubleLiteral})
FloatLiteral ({DecDigits}\.{DecDigits}[fF]|{DecDigits}[fF])
DoubleLiteral ({DecDigits}\.{DecDigits}({DoubleExponent})?|{DecDigits}{DoubleExponent})
IntegerLiteral ({DecDigitNoZero}({DecDigitOrSeparator})*{DIGIT}|{DIGIT})
HexDigit ({DIGIT}|[A-Fa-f])
HexDigitOrSeparator ({HexDigit}|_)
HexLiteral (0[xX]{HexDigit}({HexDigitOrSeparator})*{HexDigit}|0[xX]{HexDigit})
BinDigit [01]
BinDigitOrSeparator ({BinDigit}|_)
BinLiteral (0[bB]{BinDigit}({BinDigitOrSeparator})*{BinDigit}|0[bB]{BinDigit})
UnsignedLiteral (({IntegerLiteral}|{HexLiteral}|{BinLiteral})[uU][L]?)
LongLiteral (({IntegerLiteral}|{HexLiteral}|{BinLiteral})L)
BooleanLiteral (true|false)
NullLiteral null
UniCharacterLiteral ('(\\.|[^\\'\n])')

%%

{whitespace}        { /* discard */ }
"//"[^\r\n]*       { /* Discard Line Comments */ }

"/*"         BEGIN(comment);
<comment>[^*\n]*
<comment>"*"+[^*/\n]*
<comment>"*"+"/"        BEGIN(INITIAL);

"."         { return create_token_node(DOT); }
","         { return create_token_node(COMMA); }
"{"         { return create_token_node(LCURL); }
"}"         { return create_token_node(RCURL); }
"["         { return create_token_node(LSQUARE); }
"]"         { return create_token_node(RSQUARE); }
"("         { return create_token_node(LPAREN); }
")"         { return create_token_node(RPAREN); }
"..."       { return create_token_node(RESERVED); }
"#"         { return create_token_node(HASH); }
":"         { return create_token_node(COLON); }
";"         { return create_token_node(SEMICOLON); }

"return@"   { return create_token_node(RETURN_AT); }
"continue@" { return create_token_node(CONTINUE_AT); }
"break@"    { return create_token_node(BREAK_AT); }
"this@"     { return create_token_node(THIS_AT); }
"super@"    { return create_token_node(SUPER_AT); }
"file"      { return create_token_node(K0FILE); }
"field"     { return create_token_node(FIELD); }
"property"  { return create_token_node(PROPERTY); }
"get"       { return create_token_node(GET); }
"set"       { return create_token_node(SET); }
"receiver"  { return create_token_node(RECIEVER); }
"param"     { return create_token_node(PARAM); }
"setparam"  { return create_token_node(SETPARAM); }
"delegate"  { return create_token_node(DELEGATE); }
"package"   { return create_token_node(PACKAGE); }
"import"    { return create_token_node(IMPORT); }
"class"     { return create_token_node(CLASS); }
"interface" { return create_token_node(INTERFACE); }
"fun"       { return create_token_node(FUN); }
"object"    { return create_token_node(OBJECT); }
"val"       { return create_token_node(VAL); }
"var"       { return create_token_node(VAR); }
"typealias" { return create_token_node(TYPE_ALIAS); }
"constructor" { return create_token_node(CONSTRUCTOR); }
"by"        { return create_token_node(BY); }
"companion" { return create_token_node(COMPANION); }
"init"      { return create_token_node(INIT); }
"this"      { return create_token_node(THIS); }
"super"     { return create_token_node(SUPER); }
"typeof"    { return create_token_node(TYPEOF); }
"where"     { return create_token_node(WHERE); }
"if"        { return create_token_node(IF); }
"else"      { return create_token_node(ELSE); }
"when"      { return create_token_node(WHEN); }
"try"       { return create_token_node(TRY); }
"catch"     { return create_token_node(CATCH); }
"finally"   { return create_token_node(FINALLY); }
"for"       { return create_token_node(FOR); }
"do"        { return create_token_node(DO); }
"while"     { return create_token_node(WHILE); }
"throw"     { return create_token_node(THROW); }
"return"    { return create_token_node(RETURN); }
"continue"  { return create_token_node(CONTINUE); }
"break"     { return create_token_node(BREAK); }
"as"        { return create_token_node(AS); }
"is"        { return create_token_node(IS); }
"in"        { return create_token_node(IN); }
"!is"       { return create_token_node(NOT_IS); }
"!in"       { return create_token_node(NOT_IN); }
"out"       { return create_token_node(OUT); }
"dynamic"   { return create_token_node(DYNAMIC); }
"public"    { return create_token_node(PUBLIC); }
"private"   { return create_token_node(PRIVATE); }
"protected" { return create_token_node(PROTECTED); }
"internal"  { return create_token_node(INTERNAL); }
"enum"      { return create_token_node(ENUM); }
"sealed"    { return create_token_node(SEALED); }
"annotation" { return create_token_node(ANNOTATION); }
"data"      { return create_token_node(DATA); }
"inner"     { return create_token_node(INNER); }
"value"     { return create_token_node(VALUE); }
"tailrec"   { return create_token_node(TAILREC); }
"operator"  { return create_token_node(OPERATOR); }
"inline"    { return create_token_node(INLINE); }
"infix"     { return create_token_node(INFIX); }
"external"  { return create_token_node(EXTERNAL); }
"suspend"   { return create_token_node(SUSPEND); }
"override"  { return create_token_node(OVERRIDE); }
"abstract"  { return create_token_node(ABSTRACT); }
"final"     { return create_token_node(FINAL); }
"open"      { return create_token_node(OPEN); }
"const"     { return create_token_node(CONST); }
"lateinit"  { return create_token_node(LATEINIT); }
"vararg"    { return create_token_node(VARARG); }
"noinline"  { return create_token_node(NOINLINE); }
"crossinline" { return create_token_node(CROSSINLINE); }
"reified"   { return create_token_node(REIFIED); }
"expect"    { return create_token_node(EXPECT); }
"actual"    { return create_token_node(ACTUAL); }

"-"         { return create_token_node(SUB); }
"*"         { return create_token_node(MULT); }
"/"         { return create_token_node(DIV); }
"%"         { return create_token_node(MOD); }
"++"        { return create_token_node(INCR); }
"--"        { return create_token_node(DECR); }
"+="        { return create_token_node(ADD_ASSIGNMENT); }
"-="        { return create_token_node(SUB_ASSIGNMENT); }
"*="        { return create_token_node(MULT_ASSIGNMENT); }
"/="        { return create_token_node(DIV_ASSIGNMENT); }
"%="        { return create_token_node(MOD_ASSIGNMENT); }
"=="        { return create_token_node(EQEQ); }
"!="        { return create_token_node(EXCL_EQ); }
">"         { return create_token_node(RANGLE); }
"<"         { return create_token_node(LANGLE); }
">="        { return create_token_node(GE); }
"<="        { return create_token_node(LE); }
"&&"        { return create_token_node(CONJ); }
"||"        { return create_token_node(DISJ); }
"!"         { return create_token_node(EXCL_NO_WS); }
"==="       { return create_token_node(EQEQEQ); }
"!=="       { return create_token_node(EXCL_EQEQ); }
"<-"        { return create_token_node(ARROW); }
"!!"        { return create_token_node(EXCL_NO_WS); }
"?."        { return create_token_node(QUEST_NO_WS); }
"?:"        { return create_token_node(QUEST_NO_WS); }
"::"        { return create_token_node(COLONCOLON); }
".."        { return create_token_node(RANGE); }
"until"     { return create_token_node(RANGE_UNTIL); }
"?"         { return create_token_node(QUEST_WS); }
"->"        { return create_token_node(ARROW); }
"@"         { return create_token_node(AT_NO_WS); }
"as?"       { return create_token_node(AS_SAFE); }
"_"         { return create_token_node(RESERVED); }

\"([^\n"]|\\\")*\"     { return create_token_node(STRING); }
{RealLiteral}          { return create_token_node(RealLiteral); }
{IntegerLiteral}       { return create_token_node(IntegerLiteral); }
{HexLiteral}           { return create_token_node(HexLiteral); }
{UnsignedLiteral}      { return create_token_node(UnsignedLiteral); }
{UniCharacterLiteral}     { return create_token_node(UniCharacterLiteral); }

([A-Za-z_][A-Za-z0-9_]*)|(`[^`]+`) { words++; chars += strlen(yytext); return create_token_node(Identifier); }
.                      { chars++; printf("Unrecognized token: \"%s\"\n", yytext); return create_token_node(Identifier); }
%%