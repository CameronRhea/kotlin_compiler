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
    parameter optional_AssignExpression
    ;

optional_AssignExpression:
    ASSIGNMENT expression
    | %empty

parameter:
    simpleIdentifier COLON type
    ;

optional_FunctionBody:
    functionBody
    | %empty
    ;

functionBody:
    block
    | ASSIGNMENT expression
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
    genericCallLikeComparison optional_ComparisonGenericalCallLikeComparison
    ;

optional_ComparisonGenericalCallLikeComparison:
    optional_ComparisonGenericalCallLikeComparison comparisonOperator genericCallLikeComparison
    | %empty
    ;

genericCallLikeComparison:
    infixOperation optional_CallSuffixSequence
    ;

optional_CallSuffixSequence:
    optional_CallSuffixSequence callSuffix
    | %empty
    ;

comparisonOperator:
    LANGLE
    | RANGLE
    | LE
    | GE
    ;

infixOperation:
    elvisExpression
    ;

elvisExpression:
    infixFunctionCall optional_ElvisInfixFunctionCall
    ;

optional_ElvisInfixFunctionCall:
    optional_ElvisInfixFunctionCall elvis infixFunctionCall
    | %empty
    ;

elvis:
    QUEST_NO_WS COLON
    ;

infixFunctionCall:
    rangeExpression optional_IdentifierRangeExpression
;

optional_IdentifierRangeExpression:
    optional_IdentifierRangeExpression simpleIdentifier rangeExpression
    | %empty
    ;

rangeExpression:
    additiveExpression optional_RangeAdditiveExpression;
    ;

optional_RangeAdditiveExpression:
    optional_RangeAdditiveExpression rangeOperator additiveExpression
    | %empty
    ;

rangeOperator:
    RANGE
    | RANGE_UNTIL
    ;

additiveExpression:
    multiplicativeExpression optional_AdditiveMultiplicative
    ;

optional_AdditiveMultiplicative:
    optional_AdditiveMultiplicative additiveOperator multiplicativeExpression
    | %empty
    ;

additiveOperator:
    ADD
    | SUB
    ;

multiplicativeExpression:
    asExpression optional_MultiplicativeAs
    ;

optional_MultiplicativeAs:
    optional_MultiplicativeAs multiplicativeOperator asExpression
    | %empty
    ;

multiplicativeOperator:
    MULT
    | DIV
    | MOD
    ;

asExpression:
    prefixUnaryExpression
    ;

prefixUnaryExpression:
    optional_UnaryPrefixSequence postfixUnaryExpression
    ;

unaryPrefix:
    prefixUnaryOperator
    ;

optional_UnaryPrefixSequence:
    optional_UnaryPrefixSequence unaryPrefix
    | %empty
    ;

prefixUnaryOperator:
    SUB
    ;

postfixUnaryExpression:
    primaryExpression optional_PostfixUnarySuffixSequence
    ;

primaryExpression:
    parenthesizedExpression
    | simpleIdentifier
    | literalConstant
    | stringLiteral
    | collectionLiteral
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
    "true"
    | "false"
    ;

Optional_DecDigitOrSeperator:
    Optional_DecDigitOrSeperator DecDigitOrSeparator
    | %empty
    ;

CharacterLiteral:
    SINGLE_QUOTE Letter SINGLE_QUOTE
    | SINGLE_QUOTE DecDigit SINGLE_QUOTE
    ;

optional_LongDesignation:
    'l'
    | 'L'
    | %empty
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

collectionLiteral:
    LSQUARE optional_ExpressionCollection RSQUARE

optional_ExpressionCollection:
    expression optional_ExpressionCollectionExtras optional_Comma
    | %empty
    ;

optional_ExpressionCollectionExtras:
    optional_ExpressionCollectionExtras COMMA expression
    | %empty
    ;

optional_Comma:
    COMMA
    | %empty
    ;

ifExpression:
    IF LPAREN expression RPAREN controlStructureBody optional_Semicolon optional_Else
    ;

optional_Semicolon:
    SEMICOLON
    | %empty
    ;

optional_Else:
    ELSE controlStructureBody
    | %empty
    ;

controlStructureBody:
    block
    | statement
    ;

whenExpression:
    WHEN optional_WhenSubject LCURL optional_WhenEntrySequence RCURL
    ;

optional_WhenSubject:
    whenSubject
    | %empty
    ;

whenSubject:
    LPAREN optional_ValEquals expression RPAREN
    ;

optional_ValEquals:
    VAL variableDeclaration ASSIGNMENT
    | %empty
    ;

variableDeclaration:
    simpleIdentifier COLON type
    ;

type:
    functionType
    | parenthesizedType
    | nullableType
    ;

functionType:
    optional_ReceiverTypeDot functionTypeParameters ARROW type
    ;

optional_ReceiverTypeDot:
    receiverType DOT
    ;

receiverType:
    parenthesizedType
    | nullableType
    ;

functionTypeParameters:
    LPAREN optional_ParameterType optional_ParameterTypeSequence optional_Comma RPAREN
    ;

optional_ParameterType:
    parameter
    | type
    ;

optional_ParameterTypeSequence:
    optional_ParameterTypeSequence COMMA parameter
    | optional_ParameterTypeSequence COMMA type
    | %empty
    ;

parenthesizedType:
    LPAREN type RPAREN
    ;

nullableType: 
    parenthesizedType QUEST_NO_WS optional_Quest
    ;

optional_Quest:
    optional_Quest QUEST_NO_WS
    | %empty
    ;

optional_WhenEntrySequence:
    optional_WhenEntrySequence whenEntry
    | %empty
    ;

whenEntry:
    whenCondition optional_WhenConditionList optional_Comma ARROW controlStructureBody optional_Semicolon optional_Else
    ;

whenCondition:
    expression
    ;

optional_WhenConditionList:
    optional_WhenConditionList COMMA whenCondition
    | %empty
    ;

optional_PostfixUnarySuffixSequence: 
    optional_PostfixUnarySuffixSequence primaryExpression postfixUnarySuffix
    | %empty
    ;

postfixUnarySuffix:
    postfixUnaryOperator
    | callSuffix
    | indexingSuffix
    | navigationSuffix
    ;

navigationSuffix:
    memberAccessOperator simpleIdentifier
    | memberAccessOperator parenthesizedExpression
    ;

memberAccessOperator:
    DOT
    | safeNav
    ;

safeNav:
    QUEST_NO_WS DOT
    ;

postfixUnaryOperator:
    INCR
    | DECR
    | EXCL_NO_WS EXCL_NO_WS
    ;

callSuffix:
    valueArguments
    ;

valueArguments:
    RPAREN optional_ValueArguments LPAREN
    ;

optional_ValueArguments:
    valueArgument optional_ValueArgList
    | %empty
    ;

valueArgument:
    optional_IdentifierEquals expression
    ;

optional_IdentifierEquals:
    simpleIdentifier ASSIGNMENT
    | %empty
    ;

optional_ValueArgList:
    optional_ValueArgList COMMA valueArgument
    | %empty
    ;

indexingSuffix:
    LSQUARE expression optional_ExpressionList optional_Comma RSQUARE
    ;

optional_ExpressionList:
    optional_ExpressionList COMMA expression
    | %empty
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

optional_semis:
	semis
	| %empty
	;

semis:
    semis SEMICOLON
    ;
