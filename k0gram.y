%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "tree.h"
    extern char *yytext;
    extern int yylineno;
    int yylex(void);
    int yyerror(char* s){ fprintf(stderr, "%s at line %d near token '%s'\n", s, yylineno, yytext); exit(1); }
%}

%union {
   struct tree *treeptr;
}

%token RESERVED
%token DOT
%token COMMA
%token LPAREN
%token RPAREN
%token LSQUARE
%token RSQUARE
%token LCURL
%token RCURL
%token MULT
%token MOD
%token DIV
%token ADD
%token SUB
%token INCR
%token DECR
%token CONJ
%token DISJ
%token EXCL_WS
%token EXCL_NO_WS
%token COLON
%token SEMICOLON
%token ASSIGNMENT
%token ADD_ASSIGNMENT
%token SUB_ASSIGNMENT
%token MULT_ASSIGNMENT
%token DIV_ASSIGNMENT
%token MOD_ASSIGNMENT
%token ARROW
%token DOUBLE_ARROW
%token RANGE
%token RANGE_UNTIL
%token COLONCOLON
%token DOUBLE_SEMICOLON
%token HASH
%token AT_NO_WS
%token AT_POST_WS
%token AT_PRE_WS
%token AT_BOTH_WS
%token QUEST_WS
%token QUEST_NO_WS
%token LANGLE
%token RANGLE
%token LE
%token GE
%token EXCL_EQ
%token EXCL_EQEQ
%token AS_SAFE
%token EQEQ
%token EQEQEQ
%token SINGLE_QUOTE
%token AMP
%token RETURN_AT
%token CONTINUE_AT
%token BREAK_AT
%token THIS_AT
%token SUPER_AT
%token K0FILE
%token FIELD
%token PROPERTY
%token GET
%token SET
%token RECIEVER
%token PARAM
%token SETPARAM
%token DELEGATE
%token PACKAGE
%token IMPORT
%token CLASS
%token INTERFACE
%token FUN
%token OBJECT
%token VAL
%token VAR
%token TYPE_ALIAS
%token CONSTRUCTOR
%token BY
%token COMPANION
%token INIT
%token THIS
%token SUPER
%token TYPEOF
%token WHERE
%token IF
%token ELSE
%token WHEN
%token TRY
%token CATCH
%token FINALLY
%token FOR
%token DO
%token WHILE
%token THROW
%token RETURN
%token CONTINUE
%token BREAK
%token AS
%token IS
%token IN
%token NOT_IS
%token NOT_IN
%token OUT
%token DYNAMIC
%token PUBLIC
%token PRIVATE
%token PROTECTED
%token INTERNAL
%token ENUM
%token SEALED
%token ANNOTATION
%token DATA
%token INNER
%token VALUE
%token TAILREC
%token OPERATOR
%token INLINE
%token INFIX
%token EXTERNAL
%token SUSPEND
%token OVERRIDE
%token ABSTRACT
%token FINAL
%token OPEN
%token CONST
%token LATEINIT
%token VARARG
%token NOINLINE
%token CROSSINLINE
%token REIFIED
%token EXPECT
%token ACTUAL
%token BOOLEAN
%token CASE
%token DEFAULT
%token DOUBLE
%token FLOAT
%token INSTANCEOF
%token INT
%token LONG
%token NEW
%token STATIC
%token SWITCH
%token VOID
%token DecDigitNoZero
%token DecDigit
%token DoubleExponent
%token HexDigit
%token HexDigitOrSeparator
%token HexLiteral
%token UnsignedLiteral
%token NullLiteral
%token UniCharacterLiteral
%token EscapedIdentifier
%token EscapeSeq
%token Letter
%token QuotedSymbol
%token UnicodeDigit
%token Identifier
%token IdentifierOrSoftKey
%token QUOTE_OPEN
%token TRIPLE_QUOTE_OPEN
%token FieldIdentifier
%token QUOTE_CLOSE
%token LineStrRef
%token LineStrText
%token LineStrEscapedChar
%token LineStrExprStart
%token TRIPLE_QUOTE_CLOSE
%token MultilineStringQuote
%token MultiLineStrRef
%token MultiLineStrText
%token MultiLineStrExprStart
%token STRING
%token MULTISTRING
%token KotlinToken
%token IntegerLiteral
%token RealLiteral
%token DecDigitOrSeparator
%token TRUE
%token FALSE

%right ASSIGNMENT
%left DISJ
%left CONJ
%left EQEQ EXCL_EQ EXCL_EQEQ EQEQEQ
%left LANGLE RANGLE LE GE
%left ADD SUB
%left MULT DIV MOD
%right EXCL_NO_WS
%left DOT
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

/* Start symbol */c
%start kotlinFile

%%

kotlinFile:
    optional_topLevelObjectSequence
    ;

optional_topLevelObjectSequence:
    optional_topLevelObjectSequence topLevelObject
    | %empty
    ;

topLevelObject:
    declaration optional_semis
    ;

declaration:
    functionDeclaration
    ;

functionDeclaration:
    FUN simpleIdentifier functionValueParameters optional_FunctionBody
    ;

functionValueParameters:
    LPAREN optional_ParameterList RPAREN
    ;

optional_ParameterList:
    parameter optional_ParameterSequence
    | %empty
    ;

optional_ParameterSequence:
    optional_ParameterSequence COMMA parameter
    | %empty
    ;

parameter:
    simpleIdentifier COLON type optional_DefaultValue
    ;

optional_DefaultValue:
    ASSIGNMENT expression
    | %empty
    ;

type:
    simpleIdentifier
    | nullableType
    | functionType
    ;

nullableType:
    type QUEST_NO_WS
    ;

functionType:
    LPAREN optional_ParameterTypeList RPAREN ARROW type
    ;

optional_ParameterTypeList:
    type optional_TypeSequence
    | %empty
    ;

optional_TypeSequence:
    optional_TypeSequence COMMA type
    | %empty
    ;

optional_FunctionBody:
    functionBody
    | %empty
    ;

functionBody:
    block
    | ASSIGNMENT expression
    ;

block:
    LCURL statements RCURL
    ;

statements:
    optional_statement_sequence optional_semis
    ;

optional_statement_sequence:
    statement semis_statement
    | %empty
    ;

semis_statement:
    semis_statement semis statement
    | %empty
    ;

statement:
    declaration
    | expression
    ;

expression:
    disjunction
    ;

disjunction:
    conjunction optional_OrConjuctionSequence
    ;

optional_OrConjuctionSequence:
    optional_OrConjuctionSequence DISJ conjunction
    | %empty
    ;

conjunction:
    equality optional_AndEqualitySequence
    ;

optional_AndEqualitySequence:
    optional_AndEqualitySequence CONJ equality
    | %empty
    ;

equality:
    comparison optional_EqualityComparisonSequence
    ;

optional_EqualityComparisonSequence:
    optional_EqualityComparisonSequence equalityOperator comparison
    | %empty
    ;

equalityOperator:
    EXCL_EQ
    | EXCL_EQEQ
    | EQEQ
    | EQEQEQ
    ;

comparison:
    primaryExpression optional_ComparisonOperator
    ;

optional_ComparisonOperator:
    comparisonOperator primaryExpression
    | %empty
    ;

comparisonOperator:
    LANGLE
    | RANGLE
    | LE
    | GE
    ;

primaryExpression:
    parenthesizedExpression
    | simpleIdentifier
    | literalConstant
    | stringLiteral
    | ifExpression
    | whenExpression
    ;

parenthesizedExpression:
    LPAREN expression RPAREN
    ;

simpleIdentifier:
    Identifier
    ;

literalConstant:
    BooleanLiteral
    | IntegerLiteral
    | CharacterLiteral
    | RealLiteral
    ;

BooleanLiteral:
    TRUE
    | FALSE
    ;

CharacterLiteral:
    SINGLE_QUOTE Letter SINGLE_QUOTE
    | SINGLE_QUOTE DecDigit SINGLE_QUOTE
    ;

stringLiteral:
    lineStringLiteral
    | multiLineStringLiteral
    ;

lineStringLiteral:
    STRING
    ;

multiLineStringLiteral:
    MULTISTRING
    ;

ifExpression:
    IF LPAREN expression RPAREN controlStructureBody %prec LOWER_THAN_ELSE
    | IF LPAREN expression RPAREN controlStructureBody ELSE controlStructureBody
    ;

controlStructureBody:
    block
    | statement
    ;

whenExpression:
    WHEN LPAREN expression RPAREN LCURL whenEntries RCURL
    ;

whenEntries:
    whenEntry optional_WhenEntrySequence
    ;

optional_WhenEntrySequence:
    optional_WhenEntrySequence whenEntry
    | %empty
    ;

whenEntry:
    whenCondition ARROW controlStructureBody
    ;

whenCondition:
    expression
    | ELSE
    ;

optional_semis:
    semis
    | %empty
    ;

semis:
    SEMICOLON
    | semis SEMICOLON
    ;

%%