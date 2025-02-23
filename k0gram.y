%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "tree.h"
    int yylex(void);
    int yyerror(char* s){ fprintf (stderr, "%s\n", s); exit(1); }
%}

%union {
   struct tree *treeptr;
}

/* Define tokens that are actually used in the grammar */
%token RESERVED DOT COMMA LPAREN RPAREN LSQUARE RSQUARE LCURL RCURL
%token MULT MOD DIV ADD SUB INCR DECR
%token CONJ DISJ
%token EXCL_WS EXCL_NO_WS
%token COLON SEMICOLON
%token ASSIGNMENT
%token ARROW
%token QUEST_NO_WS
%token LANGLE RANGLE LE GE
%token EXCL_EQ EXCL_EQEQ EQEQ EQEQEQ
%token SINGLE_QUOTE
%token RANGE RANGE_UNTIL
%token FUN VAL VAR
%token IF ELSE WHEN
%token STRING MULTISTRING
%token TRUE FALSE    /* Added explicit tokens for boolean literals */
%token Identifier
%token IntegerLiteral
%token RealLiteral
%token DecDigit
%token DecDigitOrSeparator
%token Letter

/* Operator precedence and associativity */
%right ASSIGNMENT    /* lowest precedence */
%left DISJ
%left CONJ
%left EQEQ EXCL_EQ EXCL_EQEQ EQEQEQ
%left LANGLE RANGLE LE GE
%left ADD SUB
%left MULT DIV MOD
%right EXCL_NO_WS   /* unary not */
%left DOT           /* member access */
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE      /* highest precedence */

/* Start symbol */
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