%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "tree.h"
    extern char *yytext;
    extern int yylineno;
    extern char *filename;
    extern struct token *yytoken;
    int yylex(void);
    int yyerror(char* s) {
        fprintf(stderr, "%s at line %d in file %s near token '%s'\n", 
                s, yylineno, filename, yytext);
        return 0;
    }
    struct tree *root = NULL;
    #define BAD_TOKEN 257
%}

%union {
   struct tree *treeptr;
}

%token <treeptr> RESERVED DOT COMMA LPAREN RPAREN LSQUARE RSQUARE LCURL RCURL INCR DECR CONJ DISJ EXCL_WS EXCL_NO_WS
%token <treeptr> COLON SEMICOLON ASSIGNMENT ADD_ASSIGNMENT SUB_ASSIGNMENT MULT_ASSIGNMENT DIV_ASSIGNMENT MOD_ASSIGNMENT ARROW DOUBLE_ARROW
%token <treeptr> RANGE COLONCOLON DOUBLE_SEMICOLON HASH AT_NO_WS AT_POST_WS AT_PRE_WS AT_BOTH_WS QUEST_WS QUEST_NO_WS LANGLE RANGLE LE GE QUEST_DOT
%token <treeptr> EXCL_EQ EXCL_EQEQ AS_SAFE EQEQ EQEQEQ SINGLE_QUOTE RETURN_AT CONTINUE_AT BREAK_AT THIS_AT SUPER_AT FILES FIELD PROPERTY GET QUEST_COLON
%token <treeptr> SET RECEIVER PARAM SETPARAM DELEGATE PACKAGE IMPORT CLASS INTERFACE FUN OBJECT VAL VAR TYPEALIAS CONSTRUCTOR BY COMPANION
%token <treeptr> INIT THIS SUPER TYPEOF WHERE IF ELSE WHEN TRY CATCH FINALLY FOR DO WHILE THROW RETURN CONTINUE BREAK AS IS IN OUT DYNAMIC PUBLIC
%token <treeptr> PRIVATE PROTECTED INTERNAL ENUM SEALED ANNOTATION DATA INNER TAILREC OPERATOR INLINE INFIX EXTERNAL SUSPEND OVERRIDE ABSTRACT NULL_LITERAL
%token <treeptr> FINAL OPEN CONST LATEINIT VARARG NOINLINE CROSSINLINE REIFIED EXPECT ACTUAL REAL_LITERAL FLOAT_LITERAL DOUBLE_LITERAL INTEGER_LITERAL CHARACTER_LITERAL
%token <treeptr> HEX_LITERAL BIN_LITERAL UNSIGNED_LITERAL LONG_LITERAL  BOOLEAN_LITERAL STRING_LITERAL INT FLOAT BOOLEAN CHAR STRING BYTE T_EOF TYPELITERAL 
%token <treeptr> MULT MOD DIV ADD SUB
%token <treeptr> IDENTIFIER
%debug 

%type <treeptr> kotlinFile topLevelObjectSequence topLevelObject functionDeclaration type functionBody block statements statement variableDeclaration assignment functionCall functionArguments 
%type <treeptr> loopStatement expression disjunction conjunction equality comparison genericCallLikeComparison elvisExpression rangeExpression primaryExpression
%type <treeptr> declaration opt_typeParameters optional_comma typeParameters typeParameter multi_typeParameter simpleIdentifier classDeclaration semis_statement optional_statement_sequence parameter 
%type <treeptr> functionValueParameter functionValueParameters optional_functionValueParameter parameterList optional_functionBody optional_eq_expression receiverType parenthesizedType 
%type <treeptr> typeReference_or_parenthesizedType nullableType multi_quest userType dot_simpleUserType simpleUserType optional_modifier val_or_var multivariable_variableDeclaration parenthesizedExpression propertyDeclaration navigationSuffix identifier_expression_class
%type <treeptr> memberAccessOperator typeArguments directlyAssignableExpression parenthesizedDirectlyAssignableExpression multi_postfixUnarySuffix postfixUnaryExpression postfixUnarySuffix postfixUnaryOperator multi_comma_expression callSuffix controlStructureBody 
%type <treeptr> control_structure_body_or_comma semis variable_multivariable valueArgument optional_mult optional_simpleIdentifier_EQ valueArguments optional_valueArgument multi_comma_valueArgument assignableSuffix multiVariableDeclaration multi_comma_variableDeclaration
%type <treeptr> directly_assign classMemberDeclarations objectBody classBody classMember optional_colon_type objectDeclaration assignableExpression assignmentAndOperator prefixUnaryExpression parenthesizedAssignableExpression indexingSuffix multi_unaryPrefix prefixUnaryOperator multi_comma_typeProjection typeProjection equality_operator
%type <treeptr> collectionLiteral comparison_operator additiveExpression multiplicativeExpression jumpExpression

%left ADD SUB
%left MULT DIV MOD
%left CONJ DISJ

%nonassoc ELSE
%nonassoc LOWER_THAN_ELSE

%start kotlinFile
%%

kotlinFile:
    topLevelObjectSequence {root = $1; print_tree(root, 1);}
;

topLevelObjectSequence:
    topLevelObject {$$ = alctree(1000, "topLevelObjectSequence", 1, $1);}
    | topLevelObjectSequence topLevelObject {$$ = alctree(1001, "topLevelObjectSequence", 2, $1, $2);}
;

topLevelObject:
    declaration {$$ = alctree(1002, "topLevelObject", 1, $1);}
;

declaration:
    functionDeclaration {$$ = alctree(1003, "declaration", 1, $1);}
    | classDeclaration {$$ = alctree(1004, "declaration", 1, $1);}
    | objectDeclaration {$$ = alctree(1005, "declaration", 1, $1);}
    | propertyDeclaration {$$ = alctree(1006, "declaration", 1, $1);}
;

functionDeclaration:
    FUN opt_typeParameters receiverType DOT simpleIdentifier functionValueParameters optional_colon_type optional_functionBody {$$ = alctree(1007, "functionDeclaration", 8, $1, $2, $3, $4, $5, $6, $7, $8);}
    | FUN opt_typeParameters simpleIdentifier functionValueParameters optional_colon_type optional_functionBody {$$ = alctree(1008, "functionDeclaration", 6, $1, $2, $3, $4, $5, $6);}
;

opt_typeParameters:
    typeParameters {$$ = alctree(1009, "opt_typeParameters", 1, $1);} 
    | %empty {$$ = NULL;}
;

typeParameters:
    LANGLE typeParameter multi_typeParameter optional_comma RANGLE {$$ = alctree(1010, "typeParameters", 5, $1, $2, $3, $4, $5);}
;

typeParameter:
    simpleIdentifier {$$ = alctree(1011, "typeParameter", 1, $1);}
;

multi_typeParameter:
    multi_typeParameter COMMA typeParameter {$$ = alctree(1012, "multi_typeParameter", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
;

optional_comma:
    COMMA {$$ = $1;}
    | %empty {$$ = NULL;}
;

optional_colon_type:
    COLON type {$$ = alctree(1013, "optional_colon_type", 2, $1, $2);}
    | %empty {$$ = NULL;}
;

optional_functionBody:
    functionBody {$$ = alctree(1014, "optional_functionBody", 1, $1);}
    | %empty {$$ = NULL;}
;

functionValueParameters:
    LPAREN optional_functionValueParameter RPAREN {$$ = alctree(1015, "functionValueParameters", 3, $1, $2, $3);}
;

functionValueParameter:
    parameter optional_eq_expression {$$ = alctree(1016, "functionValueParameter", 2, $1, $2);}
;

optional_eq_expression:
    ASSIGNMENT expression {$$ = alctree(1017, "optional_eq_expression", 2, $1, $2);} 
    | %empty {$$ = NULL;}
;

parameter:
    simpleIdentifier COLON type {$$ = alctree(1018, "parameter", 3, $1, $2, $3);}
;

parameterList:
    parameterList COMMA functionValueParameter {$$ = alctree(1019, "parameterList", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
;

optional_functionValueParameter:
    functionValueParameter parameterList COMMA {$$ = alctree(1020, "optional_functionValueParameter", 3, $1, $2, $3);}
    | functionValueParameter parameterList {$$ = alctree(1021, "optional_functionValueParameter", 2, $1, $2);}
    | %empty {$$ = NULL;}
;

functionBody:
    block {$$ = alctree(1022, "functionBody", 1, $1);}
    | ASSIGNMENT expression SEMICOLON {$$ = alctree(1023, "functionBody", 3, $1, $2, $3);}
;

block:
    LCURL statements RCURL {$$ = alctree(1024, "block", 3, $1, $2, $3);}
;

statements:
    optional_statement_sequence SEMICOLON {$$ = alctree(1025, "statements", 2, $1, $2);}
    | optional_statement_sequence {$$ = alctree(1026, "statements", 1, $1);}
;

optional_statement_sequence:
    statement semis_statement {$$ = alctree(1027, "optional_statement_sequence", 2, $1, $2);}
    | %empty {$$ = NULL;}
;

statement:
    declaration {$$ = alctree(1028, "statement", 1, $1);}
    | assignment {$$ = alctree(1029, "statement", 1, $1);}
    | expression {$$ = alctree(1030, "statement", 1, $1);}
    | loopStatement {$$ = alctree(1031, "statement", 1, $1);}
    | error SEMICOLON {$$ = alctree(1032, "statement", 1, $2);}
;

semis_statement:
    semis_statement semis statement {$$ = alctree(1033, "semis_statement", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
;

semis:
    SEMICOLON {$$ = $1;}
    | %empty {$$ = NULL;}
;

classDeclaration:
    CONST CLASS simpleIdentifier opt_typeParameters classBody {$$ = alctree(1034, "classDeclaration", 5, $1, $2, $3, $4, $5);}
    | CLASS simpleIdentifier opt_typeParameters classBody {$$ = alctree(1035, "classDeclaration", 4, $1, $2, $3, $4);}
;

multiVariableDeclaration:
    LPAREN variableDeclaration multi_comma_variableDeclaration optional_comma RPAREN {$$ = alctree(1036, "multiVariableDeclaration", 5, $1, $2, $3, $4, $5);}
;

multi_comma_variableDeclaration:
    multi_comma_variableDeclaration COMMA variableDeclaration {$$ = alctree(1037, "multi_comma_variableDeclaration", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
;

variableDeclaration:
    simpleIdentifier COLON type {$$ = alctree(1038, "variableDeclaration", 3, $1, $2, $3);}
    | simpleIdentifier {$$ = alctree(1039, "variableDeclaration", 1, $1);}
;

propertyDeclaration:
    optional_modifier val_or_var opt_typeParameters receiverType DOT multivariable_variableDeclaration optional_eq_expression SEMICOLON {$$ = alctree(1040, "propertyDeclaration", 8, $1, $2, $3, $4, $5, $6, $7, $8);}
    | optional_modifier val_or_var opt_typeParameters multivariable_variableDeclaration optional_eq_expression SEMICOLON {$$ = alctree(1041, "propertyDeclaration", 6, $1, $2, $3, $4, $5, $6);}
    | optional_modifier val_or_var opt_typeParameters multivariable_variableDeclaration optional_eq_expression {$$ = alctree(1042, "propertyDeclaration", 5, $1, $2, $3, $4, $5);}
;

multivariable_variableDeclaration:
    variableDeclaration {$$ = alctree(1043, "multivariable_variableDeclaration", 1, $1);}
    | multiVariableDeclaration {$$ = alctree(1044, "multivariable_variableDeclaration", 1, $1);}
;

classBody:
    LCURL classMemberDeclarations RCURL {$$ = alctree(1045, "classBody", 3, $1, $2, $3);}
;

classMemberDeclarations:
    classMember {$$ = alctree(1046, "classMemberDeclarations", 1, $1);}
    | classMemberDeclarations classMember {$$ = alctree(1047, "classMemberDeclarations", 2, $1, $2);}
    | %empty {$$ = NULL;}
;

classMember:
    declaration {$$ = alctree(1048, "classMember", 1, $1);}
    | statement {$$ = alctree(1049, "classMember", 1, $1);}
;

val_or_var:
    VAR {$$ = $1;}
    | VAL {$$ = $1;}
;

optional_modifier:
    CONST {$$ = $1;}
    | %empty {$$ = NULL;}
;

type:
    nullableType {$$ = alctree(1050, "type", 1, $1);}
    | TYPELITERAL {$$ = $1;}
;

receiverType:
    nullableType {$$ = alctree(1051, "receiverType", 1, $1);}
;

parenthesizedType:
    LPAREN type RPAREN {$$ = alctree(1052, "parenthesizedType", 3, $1, $2, $3);}
;

dot_simpleUserType:
    dot_simpleUserType DOT simpleUserType {$$ = alctree(1053, "dot_simpleUserType", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
;

simpleUserType:
    simpleIdentifier typeArguments {$$ = alctree(1054, "simpleUserType", 2, $1, $2);}
    | simpleIdentifier {$$ = alctree(1055, "simpleUserType", 1, $1);}
;

userType:
    simpleUserType dot_simpleUserType {$$ = alctree(1056, "userType", 2, $1, $2);}
;

nullableType:
    typeReference_or_parenthesizedType multi_quest {$$ = alctree(1057, "nullableType", 2, $1, $2);}
;

multi_quest:
    QUEST_NO_WS multi_quest {$$ = alctree(1058, "multi_quest", 2, $1, $2);}
    | %empty {$$ = NULL;}
;

typeReference_or_parenthesizedType:
    parenthesizedType {$$ = alctree(1059, "typeReference_or_parenthesizedType", 1, $1);}
    | userType {$$ = alctree(1060, "typeReference_or_parenthesizedType", 1, $1);}
;

assignmentAndOperator:
    ADD_ASSIGNMENT {$$ = $1;}
    | SUB_ASSIGNMENT {$$ = $1;}
    | MULT_ASSIGNMENT {$$ = $1;}
    | DIV_ASSIGNMENT {$$ = $1;}
    | MOD_ASSIGNMENT {$$ = $1;}
;

prefixUnaryOperator:
    ADD {$$ = $1;}
    | SUB {$$ = $1;}
    | INCR {$$ = $1;}
    | DECR {$$ = $1;}
    | EXCL_NO_WS EXCL_NO_WS {$$ = alctree(1061, "prefixUnaryOperator", 2, $1, $2);}
;

multi_unaryPrefix:
    multi_unaryPrefix prefixUnaryOperator {$$ = alctree(1062, "multi_unaryPrefix", 2, $1, $2);}
    | %empty {$$ = NULL;}
;

prefixUnaryExpression:
    multi_unaryPrefix postfixUnaryExpression {$$ = alctree(1063, "prefixUnaryExpression", 2, $1, $2);}
;

assignableExpression:
    prefixUnaryExpression {$$ = alctree(1064, "assignableExpression", 1, $1);}
    | parenthesizedAssignableExpression {$$ = alctree(1065, "assignableExpression", 1, $1);}
;

parenthesizedAssignableExpression:
    LPAREN assignableExpression RPAREN {$$ = alctree(1066, "parenthesizedAssignableExpression", 3, $1, $2, $3);}
;

assignment:
    directly_assign expression {$$ = alctree(1067, "assignment", 2, $1, $2);}
;

directly_assign:
    directlyAssignableExpression ASSIGNMENT {$$ = alctree(1068, "directly_assign", 2, $1, $2);}
    | assignableExpression assignmentAndOperator {$$ = alctree(1069, "directly_assign", 2, $1, $2);}
;

assignableSuffix:
    indexingSuffix {$$ = alctree(1070, "assignableSuffix", 1, $1);}
    | typeArguments {$$ = alctree(1071, "assignableSuffix", 1, $1);}
;

typeArguments:
    LANGLE typeProjection multi_comma_typeProjection optional_comma RANGLE {$$ = alctree(1072, "typeArguments", 5, $1, $2, $3, $4, $5);}
;

multi_comma_typeProjection: 
    multi_comma_typeProjection COMMA typeProjection {$$ = alctree(1073, "multi_comma_typeProjection", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
;

typeProjection:
    type {$$ = alctree(1074, "typeProjection", 1, $1);}
    | MULT {$$ = $1;}  
;

directlyAssignableExpression:
    postfixUnaryExpression assignableSuffix {$$ = alctree(1075, "directlyAssignableExpression", 2, $1, $2);}
    | simpleIdentifier {$$ = alctree(1076, "directlyAssignableExpression", 1, $1);}
    | parenthesizedDirectlyAssignableExpression {$$ = alctree(1077, "directlyAssignableExpression", 1, $1);}
;

parenthesizedDirectlyAssignableExpression:
    LPAREN directlyAssignableExpression RPAREN {$$ = alctree(1078, "parenthesizedDirectlyAssignableExpression", 3, $1, $2, $3);}
;

multi_postfixUnarySuffix:
    multi_postfixUnarySuffix postfixUnarySuffix {$$ = alctree(1079, "multi_postfixUnarySuffix", 2, $1, $2);}
    | %empty {$$ = NULL;}
;

postfixUnaryExpression:
    primaryExpression multi_postfixUnarySuffix {$$ = alctree(1080, "postfixUnaryExpression", 2, $1, $2);}
;

postfixUnarySuffix:
    postfixUnaryOperator {$$ = alctree(1081, "postfixUnarySuffix", 1, $1);}
    | indexingSuffix {$$ = alctree(1082, "postfixUnarySuffix", 1, $1);}
    | callSuffix {$$ = alctree(1083, "postfixUnarySuffix", 1, $1);}
    | navigationSuffix {$$ = alctree(1084, "postfixUnarySuffix", 1, $1);}
;

identifier_expression_class:
    simpleIdentifier {$$ = alctree(1085, "identifier_expression_class", 1, $1);}
    | parenthesizedExpression {$$ = alctree(1086, "identifier_expression_class", 1, $1);}
    | CLASS {$$ = $1;}
;

navigationSuffix:
    memberAccessOperator identifier_expression_class {$$ = alctree(1087, "navigationSuffix", 2, $1, $2);}
;

memberAccessOperator:
    DOT {$$ = $1;}
    | QUEST_NO_WS DOT {$$ = alctree(1088, "memberAccessOperator", 2, $1, $2);}
;

postfixUnaryOperator:
    INCR {$$ = $1;}
    | DECR {$$ = $1;}
    | EXCL_NO_WS EXCL_NO_WS {$$ = alctree(1089, "postfixUnaryOperator", 2, $1, $2);}
;

multi_comma_expression:
    multi_comma_expression COMMA expression {$$ = alctree(1090, "multi_comma_expression", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
;

indexingSuffix:
    LSQUARE expression multi_comma_expression optional_comma RSQUARE {$$ = alctree(1091, "indexingSuffix", 5, $1, $2, $3, $4, $5);}
;

callSuffix:
    valueArguments {$$ = alctree(1092, "callSuffix", 1, $1);}
;
  
multi_comma_valueArgument:
    multi_comma_valueArgument COMMA valueArgument {$$ = alctree(1093, "multi_comma_valueArgument", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
;

optional_valueArgument:
    valueArgument multi_comma_valueArgument optional_comma {$$ = alctree(1094, "optional_valueArgument", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
;

valueArguments:
    LPAREN optional_valueArgument RPAREN {$$ = alctree(1095, "valueArguments", 3, $1, $2, $3);}
; 

valueArgument:
    optional_simpleIdentifier_EQ optional_mult expression {$$ = alctree(1096, "valueArgument", 3, $1, $2, $3);}
;

optional_simpleIdentifier_EQ:
    simpleIdentifier ASSIGNMENT {$$ = alctree(1097, "optional_simpleIdentifier_EQ", 2, $1, $2);}
    | %empty {$$ = NULL;}
;

optional_mult:  
    MULT {$$ = $1;}
    | %empty {$$ = NULL;}
;

parenthesizedExpression:
    LPAREN expression RPAREN {$$ = alctree(1098, "parenthesizedExpression", 3, $1, $2, $3);}
;

functionCall:
    IDENTIFIER LPAREN functionArguments RPAREN {$$ = alctree(1099, "functionCall", 4, $1, $2, $3, $4);}
;

functionArguments:
    expression {$$ = alctree(1100, "functionArguments", 1, $1);}
    | functionArguments COMMA expression {$$ = alctree(1101, "functionArguments", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
;

variable_multivariable:
    variableDeclaration {$$ = alctree(1102, "variable_multivariable", 1, $1);}
    | multiVariableDeclaration {$$ = alctree(1103, "variable_multivariable", 1, $1);}
;

control_structure_body_or_comma:
    controlStructureBody {$$ = alctree(1104, "control_structure_body_or_comma", 1, $1);}
    | COMMA {$$ = $1;}
;

loopStatement:
    WHILE LPAREN expression RPAREN control_structure_body_or_comma {$$ = alctree(1105, "loopStatement", 5, $1, $2, $3, $4, $5);}
    | FOR LPAREN variable_multivariable IN expression RPAREN controlStructureBody {$$ = alctree(1106, "loopStatement", 7, $1, $2, $3, $4, $5, $6, $7);}
;

controlStructureBody:
    block {$$ = alctree(1107, "controlStructureBody", 1, $1);}
    | statement {$$ = alctree(1108, "controlStructureBody", 1, $1);}
;

jumpExpression:
    RETURN expression {$$ = alctree(1109, "jumpExpression", 2, $1, $2);}
    | RETURN {$$ = $1;}
    | CONTINUE {$$ = $1;}
    | BREAK {$$ = $1;}
;

objectDeclaration:
    OBJECT IDENTIFIER objectBody {$$ = alctree(1110, "objectDeclaration", 3, $1, $2, $3);}
;

objectBody:
    LCURL classMemberDeclarations RCURL {$$ = alctree(1111, "objectBody", 3, $1, $2, $3);}
;

expression:
    disjunction {$$ = alctree(1114, "expression", 1, $1);}
;

disjunction:
    conjunction {$$ = alctree(1115, "disjunction", 1, $1);}
    | disjunction DISJ conjunction {$$ = alctree(1116, "disjunction", 3, $1, $2, $3);}
;

conjunction: 
    equality {$$ = alctree(1117, "conjunction", 1, $1);}
    | conjunction CONJ equality {$$ = alctree(1118, "conjunction", 3, $1, $2, $3);}
;

equality:
    comparison {$$ = alctree(1119, "equality", 1, $1);}
    | equality equality_operator comparison {$$ = alctree(1120, "equality", 3, $1, $2, $3);}
;

comparison:
    genericCallLikeComparison {$$ = alctree(1121, "comparison", 1, $1);}
    | comparison comparison_operator genericCallLikeComparison {$$ = alctree(1122, "comparison", 3, $1, $2, $3);}
;

genericCallLikeComparison:
    elvisExpression {$$ = alctree(1123, "genericCallLikeComparison", 1, $1);}
    | elvisExpression IN elvisExpression {$$ = alctree(1124, "genericCallLikeComparison", 3, $1, $2, $3);}
    | elvisExpression IS type {$$ = alctree(1125, "genericCallLikeComparison", 3, $1, $2, $3);}
;

elvisExpression:
    rangeExpression {$$ = alctree(1126, "elvisExpression", 1, $1);}
    | elvisExpression QUEST_COLON rangeExpression {$$ = alctree(1127, "elvisExpression", 3, $1, $2, $3);}
;

rangeExpression:
    additiveExpression {$$ = alctree(1128, "rangeExpression", 1, $1);}
    | rangeExpression RANGE additiveExpression {$$ = alctree(1129, "rangeExpression", 3, $1, $2, $3);}
;

additiveExpression: 
    multiplicativeExpression {$$ = alctree(1130, "additiveExpression", 1, $1);}
    | additiveExpression ADD multiplicativeExpression {$$ = alctree(1131, "additiveExpression", 3, $1, $2, $3);}
    | additiveExpression SUB multiplicativeExpression {$$ = alctree(1132, "additiveExpression", 3, $1, $2, $3);}
;

multiplicativeExpression:
    prefixUnaryExpression {$$ = alctree(1133, "multiplicativeExpression", 1, $1);}
    | multiplicativeExpression MULT prefixUnaryExpression {$$ = alctree(1134, "multiplicativeExpression", 3, $1, $2, $3);}
    | multiplicativeExpression DIV prefixUnaryExpression {$$ = alctree(1135, "multiplicativeExpression", 3, $1, $2, $3);}
    | multiplicativeExpression MOD prefixUnaryExpression {$$ = alctree(1136, "multiplicativeExpression", 3, $1, $2, $3);}
; 

primaryExpression:
    parenthesizedExpression {$$ = alctree(1137, "primaryExpression", 1, $1);}
    | IDENTIFIER {$$ = $1;}
    | functionCall {$$ = alctree(1138, "primaryExpression", 1, $1);}
    | INTEGER_LITERAL {$$ = $1;}
    | STRING_LITERAL {$$ = $1;}
    | FLOAT_LITERAL {$$ = $1;}
    | jumpExpression {$$ = alctree(1139, "primaryExpression", 1, $1);}
    | collectionLiteral {$$ = alctree(1140, "primaryExpression", 1, $1);}
;

collectionLiteral:
    LSQUARE RSQUARE {$$ = alctree(1141, "collectionLiteral", 2, $1, $2);}
    | LSQUARE expression COMMA RSQUARE {$$ = alctree(1142, "collectionLiteral", 4, $1, $2, $3, $4);}
    | LSQUARE expression RSQUARE {$$ = alctree(1143, "collectionLiteral", 3, $1, $2, $3);}
    | LSQUARE expression multi_comma_expression RSQUARE {$$ = alctree(1144, "collectionLiteral", 4, $1, $2, $3, $4);}
    | LSQUARE expression multi_comma_expression COMMA RSQUARE {$$ = alctree(1145, "collectionLiteral", 5, $1, $2, $3, $4, $5);}
;

comparison_operator: 
    LANGLE {$$ = $1;}
    | RANGLE {$$ = $1;}
    | LE {$$ = $1;}
    | GE {$$ = $1;}
;

equality_operator:
    EQEQ {$$ = $1;}
    | EQEQEQ {$$ = $1;}
;

simpleIdentifier:
    IDENTIFIER {$$ = $1;}
    | IMPORT {$$ = $1;}
    | CONST {$$ = $1;}
;

%%

const char *yyname(int sym)
{ 
   return yytname[sym-RESERVED+3];
}