%{
    extern int yylex(void);
    extern int yyerror(char *s);
    #define YYDEBUG 1
    #include "tree.h"
    struct tree *root;
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

%type <treeptr> kotlinFile topLevelObjects topLevelObject functionDeclaration type functionBody block statements statement variableDeclaration assignment functionCall functionArguments 
%type <treeptr> loopStatement expression disjunction conjunction equality comparison genericCallLikeComparison elvisExpression rangeExpression primaryExpression
%type <treeptr> declaration optional_typeParameters optional_comma typeParameters typeParameter multi_typeParameter simpleIdentifier classDeclaration semis_statement optional_statement_sequence parameter 
%type <treeptr> functionValueParameter functionValueParameters optional_functionValueParameter multi_comma_functionParameter optional_functionBody optional_eq_exp receiverType parenthesizedType 
%type <treeptr> typeRef_parenthesizedType nullableType multi_quest userType multi_dot_simpleUserType simpleUserType optional_modifier val_var multivariable_variableDeclaration parenthesizedExpression propertyDeclaration navigationSuffix identifier_expression_class
%type <treeptr> memberAccessOperator typeArguments directlyAssignableExpression parenthesizedDirectlyAssignableExpression multi_postfixUnarySuffix postfixUnaryExpression postfixUnarySuffix postfixUnaryOperator multi_comma_expression callSuffix controlStructureBody 
%type <treeptr> control_structure_body_or_comma semis variable_multivariable valueArgument optional_Multi optional_simpleIdentifier_EQ valueArguments optional_valueArgument multi_comma_valueArgument assignableSuffix multiVariableDeclaration multi_comma_variableDeclaration
%type <treeptr> directly_assign classMembers objectBody classBody classMember optional_colon_type objectDeclaration assignableExpression assignmentAndOperator prefixUnaryExpression parenthesizedAssignableExpression indexingSuffix multi_unaryPrefix prefixUnaryOperator multi_comma_typeProjection typeProjection equality_operator
%type <treeptr> collectionLiteral comparison_operator additiveExpression multiplicativeExpression jumpExpression  
%left ADD SUB
%left MULT DIV MOD
%left AND OR

%debug

%nonassoc ELSE
%nonassoc LOWER_THAN_ELSE

%start kotlinFile
%%

kotlinFile:
    topLevelObjects {root = $1; treeprint(root, 1);}
    ;

topLevelObjects:
    topLevelObject {$$ = alctree(1000, "topLevelObjects", 1, $1);}
    | topLevelObjects topLevelObject {$$ = alctree(1000, "topLevelObjects", 2, $1, $2);}
    ;

topLevelObject:
    functionDeclaration {$$ = alctree(1001, "topLevelObject", 1, $1);}
    | classDeclaration {$$ = alctree(1001, "topLevelObject", 1, $1);}
    | objectDeclaration {$$ = alctree(1001, "topLevelObject", 1, $1);}
    ;

simpleIdentifier:
    IDENTIFIER 
    | IMPORT  
    | CONST 
    ;

declaration:
    classDeclaration {$$ = alctree(1002, "declaration", 1, $1);}
    | functionDeclaration {$$ = alctree(1002, "declaration", 1, $1);}
    | propertyDeclaration {$$ = alctree(1002, "declaration", 1, $1);}
    ;

classDeclaration:
    CONST CLASS simpleIdentifier optional_typeParameters classBody {$$ = alctree(1003, "classDeclaration", 5, $1, $2, $3, $4, $5);}
    | CLASS simpleIdentifier optional_typeParameters classBody {$$ = alctree(1003, "classDeclaration", 4, $1, $2, $3, $4);}
    ;

classBody:
    LCURL classMembers RCURL {$$ = alctree(1004, "classBody", 3, $1, $2, $3);}
    ;

classMembers:
    %empty {$$ = NULL;}
    | classMembers classMember {$$ = alctree(1005, "classMembers", 2, $1, $2);}
    ;

classMember:
    functionDeclaration {$$ = alctree(1006, "classMember", 1, $1);}
    | variableDeclaration {$$ = alctree(1006, "classMember", 1, $1);}
    ;

objectDeclaration:
    OBJECT IDENTIFIER objectBody {$$ = alctree(1007, "objectDeclaration", 3, $1, $2, $3);}
    ;

objectBody:
    LCURL classMembers RCURL {$$ = alctree(1008, "objectBody", 3, $1, $2, $3);}
    ;

functionDeclaration:
    FUN optional_typeParameters receiverType DOT simpleIdentifier functionValueParameters optional_colon_type optional_functionBody {$$ = alctree(1009, "functionDeclaration", 8, $1, $2, $3, $4, $5, $6, $7, $8);}
    | FUN optional_typeParameters simpleIdentifier functionValueParameters optional_colon_type optional_functionBody {$$ = alctree(1009, "functionDeclaration", 6, $1, $2, $3, $4, $5, $6);}
    ;

functionValueParameters:
    LPAREN optional_functionValueParameter RPAREN {$$ = alctree(1010, "functionValueParameters", 3, $1, $2, $3);}
    ;

optional_functionValueParameter:
    functionValueParameter multi_comma_functionParameter COMMA {$$ = alctree(1011, "optional_functionValueParameter", 3, $1, $2, $3);}
    | functionValueParameter multi_comma_functionParameter {$$ = alctree(1011, "optional_functionValueParameter", 2, $1, $2);}
    | %empty {$$ = NULL;}
    ;

functionValueParameter:
    parameter optional_eq_exp {$$ = alctree(1012, "functionValueParameter", 2, $1, $2);}
    ;

parameter:
    simpleIdentifier COLON type {$$ = alctree(1013, "parameter", 3, $1, $2, $3);}
    ;

multi_comma_functionParameter:
    multi_comma_functionParameter COMMA functionValueParameter {$$ = alctree(1014, "multi_comma_functionParameter", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
    ;

functionBody:
    block {$$ = alctree(1015, "functionBody", 1, $1);}
    | ASSIGNMENT expression SEMICOLON {$$ = alctree(1015, "functionBody", 3, $1, $2, $3);}
    ;

optional_functionBody:
    functionBody {$$ = alctree(1016, "optional_functionBody", 1, $1);}
    | %empty {$$ = NULL;}
    ;

propertyDeclaration:
    optional_modifier val_var optional_typeParameters receiverType DOT multivariable_variableDeclaration optional_eq_exp SEMICOLON {$$ = alctree(1017, "propertyDeclaration", 8, $1, $2, $3, $4, $5, $6, $7, $8);}
    | optional_modifier val_var optional_typeParameters multivariable_variableDeclaration optional_eq_exp SEMICOLON {$$ = alctree(1017, "propertyDeclaration", 6, $1, $2, $3, $4, $5, $6);}
    | optional_modifier val_var optional_typeParameters multivariable_variableDeclaration optional_eq_exp {$$ = alctree(1017, "propertyDeclaration", 5, $1, $2, $3, $4, $5);}
    ;

val_var:
    VAR {$$ = $1;}
    | VAL {$$ = $1;}
    ;

optional_modifier:
    CONST {$$ = $1;}
    | %empty {$$ = NULL;}
    ;

variableDeclaration:
    type COLON type {$$ = alctree(1018, "variableDeclaration", 1, $1);}
    | type {$$ = alctree(1018, "variableDeclaration", 1, $1);}
    ;

multiVariableDeclaration:
    LPAREN variableDeclaration multi_comma_variableDeclaration optional_comma RPAREN {$$ = alctree(1019, "multiVariableDeclaration", 5, $1, $2, $3, $4, $5);}
    ;

multi_comma_variableDeclaration:
    multi_comma_variableDeclaration COMMA variableDeclaration {$$ = alctree(1020, "multi_comma_variableDeclaration", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
    ;

multivariable_variableDeclaration:
    variableDeclaration {$$ = alctree(1021, "multivariable_variableDeclaration", 1, $1);}
    | multiVariableDeclaration {$$ = alctree(1021, "multivariable_variableDeclaration", 1, $1);}
    ;

optional_typeParameters:
    typeParameters {$$ = alctree(1022, "optional_typeParameters", 1, $1);}
    | %empty {$$ = NULL;}
    ;

typeParameters:
    LANGLE typeParameter multi_typeParameter optional_comma RANGLE {$$ = alctree(1023, "typeParameters", 5, $1, $2, $3, $4, $5);}
    ;

typeParameter:
    simpleIdentifier {$$ = alctree(1024, "typeParameter", 1, $1);}
    ;

multi_typeParameter:
    multi_typeParameter COMMA typeParameter {$$ = alctree(1025, "multi_typeParameter", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
    ;

type:
    nullableType {$$ = alctree(1026, "type", 1, $1);}
    | TYPELITERAL {$$ = $1;}
    ;

nullableType:
    typeRef_parenthesizedType multi_quest {$$ = alctree(1027, "nullableType", 2, $1, $2);}
    ;

multi_quest:
    multi_quest QUEST_NO_WS {$$ = alctree(1028, "multi_quest", 2, $1, $2);}
    | %empty {$$ = NULL;}
    ;

typeRef_parenthesizedType:
    parenthesizedType {$$ = alctree(1029, "typeRef_parenthesizedType", 1, $1);}
    | userType {$$ = alctree(1029, "typeRef_parenthesizedType", 1, $1);} //TypeReferfence
    ;

parenthesizedType:
    LPAREN type RPAREN {$$ = alctree(1030, "parenthesizedType", 3, $1, $2, $3);}
    ;

userType:
    simpleUserType multi_dot_simpleUserType {$$ = alctree(1031, "userType", 2, $1, $2);}
    ;

simpleUserType:
    simpleIdentifier typeArguments {$$ = alctree(1032, "simpleUserType", 2, $1, $2);}
    | simpleIdentifier {$$ = alctree(1032, "simpleUserType", 1, $1);}
    ;

multi_dot_simpleUserType:
    multi_dot_simpleUserType DOT simpleUserType {$$ = alctree(1033, "multi_dot_simpleUserType", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
    ;

typeArguments:
    LANGLE typeProjection multi_comma_typeProjection optional_comma RANGLE {$$ = alctree(1034, "typeArguments", 5, $1, $2, $3, $4, $5);}
    ;

multi_comma_typeProjection: 
    multi_comma_typeProjection COMMA typeProjection {$$ = alctree(1035, "multi_comma_typeProjection", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
    ;

typeProjection:
    type {$$ = alctree(1036, "typeProjection", 1, $1);}
    | MULT {$$ = $1;}
    ;

block:
    LCURL statements RCURL {$$ = alctree(1037, "block", 3, $1, $2, $3);}
    ;

statements:
    optional_statement_sequence SEMICOLON {$$ = alctree(1038, "statements", 2, $1, $2);}
    | optional_statement_sequence {$$ = alctree(1038, "statements", 1, $1);}
    ;

optional_statement_sequence:
    statement semis_statement {$$ = alctree(1039, "optional_statement_sequence", 2, $1, $2);}
    | %empty {$$ = NULL;}
    ;

semis_statement:
    semis_statement semis statement {$$ = alctree(1040, "semis_statement", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
    ;

semis:
    SEMICOLON {$$ = $1;}
    | %empty {$$ = NULL;}
    ;

statement:
    declaration {$$ = alctree(1041, "statement", 1, $1);}
    | assignment {$$ = alctree(1041, "statement", 1, $1);}
    | expression {$$ = alctree(1041, "statement", 1, $1);}
    | loopStatement {$$ = alctree(1041, "statement", 1, $1);}
    | error SEMICOLON {$$ = alctree(1041, "statement", 1, $2);}
    ;

assignment:
    directly_assign expression {$$ = alctree(1042, "assignment", 2, $1, $2);}
    ;

directly_assign:
    directlyAssignableExpression ASSIGNMENT {$$ = alctree(1043, "directly_assign", 2, $1, $2);}
    | assignableExpression assignmentAndOperator {$$ = alctree(1043, "directly_assign", 2, $1, $2);}
    ;

assignmentAndOperator:
    ADD_ASSIGNMENT {$$ = $1;}
    | SUB_ASSIGNMENT {$$ = $1;}
    | MULT_ASSIGNMENT {$$ = $1;}
    | DIV_ASSIGNMENT {$$ = $1;}
    | MOD_ASSIGNMENT {$$ = $1;}
    ;

optional_eq_exp:
    ASSIGNMENT expression {$$ = alctree(1044, "optional_eq_exp", 2, $1, $2);}
    | %empty {$$ = NULL;}
    ;

loopStatement:
    WHILE LPAREN expression RPAREN control_structure_body_or_comma {$$ = alctree(1045, "loopStatement", 5, $1, $2, $3, $4, $5);}
    | FOR LPAREN variable_multivariable IN expression RPAREN controlStructureBody {$$ = alctree(1045, "loopStatement", 7, $1, $2, $3, $4, $5, $6, $7);}
    ;

controlStructureBody:
    block {$$ = alctree(1046, "controlStructureBody", 1, $1);}
    | statement {$$ = alctree(1046, "controlStructureBody", 1, $1);}
    ;

control_structure_body_or_comma:
    controlStructureBody {$$ = alctree(1047, "control_structure_body_or_comma", 1, $1);}
    | COMMA {$$ = $1;}
    ;

variable_multivariable:
    variableDeclaration {$$ = alctree(1048, "variable_multivariable", 1, $1);}
    | multiVariableDeclaration {$$ = alctree(1048, "variable_multivariable", 1, $1);}
    ;

jumpExpression:
    RETURN expression {$$ = alctree(1049, "jumpExpression", 2, $1, $2);}
    | RETURN {$$ = $1;}
    | CONTINUE {$$ = $1;}
    | BREAK {$$ = $1;}
    ;

expression:
    disjunction {$$ = alctree(1050, "expression", 1, $1);}
    ;

disjunction:
    conjunction {$$ = alctree(1051, "disjuction", 1, $1);}
    | disjunction DISJ conjunction {$$ = alctree(1051, "disjuction", 3, $1, $2, $3);}
    ;

conjunction: 
    equality {$$ = alctree(1052, "conjuction", 1, $1);}
    | conjunction CONJ equality {$$ = alctree(1052, "conjuction", 3, $1, $2, $3);}
    ;

equality:
    comparison {$$ = alctree(1053, "equality", 1, $1);}
    | equality equality_operator comparison {$$ = alctree(1053, "equality", 3, $1, $2, $3);}
    ;

equality_operator:
    EQEQ {$$ = $1;}
    | EQEQEQ {$$ = $1;}
    ;

comparison:
    genericCallLikeComparison {$$ = alctree(1054, "comparison", 1, $1);}
    | comparison comparison_operator genericCallLikeComparison {$$ = alctree(1054, "comparison", 3, $1, $2, $3);}
    ;

comparison_operator: 
    LANGLE {$$ = $1;}
    | RANGLE {$$ = $1;}
    | LE {$$ = $1;}
    | GE {$$ = $1;}
    ;

genericCallLikeComparison:
    elvisExpression {$$ = alctree(1055, "genericCallLikeComparison", 1, $1);}
    | elvisExpression IN elvisExpression {$$ = alctree(1055, "genericCallLikeComparison", 3, $1, $2, $3);}
    ;

elvisExpression:
    rangeExpression {$$ = alctree(1056, "elvisExpression", 1, $1);}
    | elvisExpression QUEST_COLON rangeExpression {$$ = alctree(1056, "elvisExpression", 3, $1, $2, $3);}
    ;

rangeExpression:
    additiveExpression {$$ = alctree(1057, "rangeExpression", 1, $1);}
    | rangeExpression RANGE additiveExpression {$$ = alctree(1057, "rangeExpression", 3, $1, $2, $3);}
    ;

additiveExpression: 
    multiplicativeExpression {$$ = alctree(1058, "additiveExpression", 1, $1);}
    | additiveExpression ADD multiplicativeExpression {$$ = alctree(1058, "additiveExpression", 3, $1, $2, $3);}
    | additiveExpression SUB multiplicativeExpression {$$ = alctree(1058, "additiveExpression", 3, $1, $2, $3);}
    ;

multiplicativeExpression:
    postfixUnaryExpression {$$ = alctree(1059, "multiplicativeExpression", 1, $1);}
    | multiplicativeExpression MULT postfixUnaryExpression {$$ = alctree(1059, "multiplicativeExpression", 3, $1, $2, $3);}
    | multiplicativeExpression DIV postfixUnaryExpression {$$ = alctree(1059, "multiplicativeExpression", 3, $1, $2, $3);}
    | multiplicativeExpression MOD postfixUnaryExpression {$$ = alctree(1059, "multiplicativeExpression", 3, $1, $2, $3);}
    ;

prefixUnaryExpression:
    multi_unaryPrefix postfixUnaryExpression {$$ = alctree(1060, "prefixUnaryExpression", 2, $1, $2);}
    ;

multi_unaryPrefix:
    multi_unaryPrefix prefixUnaryOperator {$$ = alctree(1061, "multi_unaryPrefix", 2, $1, $2);}
    | %empty {$$ = NULL;}
    ;

prefixUnaryOperator:
    ADD {$$ = $1;}
    | SUB {$$ = $1;}
    | INCR {$$ = $1;}
    | DECR {$$ = $1;}
    | EXCL_NO_WS EXCL_NO_WS {$$ = alctree(1062, "prefixUnaryOperator", 2, $1, $2);}
    ;

postfixUnaryExpression:
    primaryExpression multi_postfixUnarySuffix {$$ = alctree(1063, "postfixUnaryExpression", 2, $1, $2);}
    ;

multi_postfixUnarySuffix:
    multi_postfixUnarySuffix postfixUnarySuffix {$$ = alctree(1064, "multi_postfixUnarySuffix", 2, $1, $2);}
    | %empty {$$ = NULL;}
    ;

postfixUnarySuffix:
    postfixUnaryOperator {$$ = alctree(1065, "postfixUnarySuffix", 1, $1);}
    | indexingSuffix {$$ = alctree(1065, "postfixUnarySuffix", 1, $1);}
    | callSuffix {$$ = alctree(1065, "postfixUnarySuffix", 1, $1);}
    | navigationSuffix {$$ = alctree(1065, "postfixUnarySuffix", 1, $1);}
    ;

postfixUnaryOperator:
    INCR {$$ = $1;}
    | DECR {$$ = $1;}
    | EXCL_NO_WS EXCL_NO_WS {$$ = alctree(1066, "postfixUnaryOperator", 2, $1, $2);}
    ;

navigationSuffix:
    memberAccessOperator identifier_expression_class {$$ = alctree(1067, "navigationSuffix", 2, $1, $2);}
    ;

memberAccessOperator:
    DOT {$$ = $1;}
    | QUEST_NO_WS DOT {$$ = alctree(1068, "memberAccessOperator", 2, $1, $2);}
    ;

identifier_expression_class:
    simpleIdentifier {$$ = alctree(1069, "identifier_expression_class", 1, $1);}
    | parenthesizedExpression {$$ = alctree(1069, "identifier_expression_class", 1, $1);}
    | CLASS {$$ = $1;}
    ;

primaryExpression:
    parenthesizedExpression {$$ = alctree(1070, "primaryExpression", 1, $1);}
    | IDENTIFIER {$$ = $1;}
    | functionCall {$$ = alctree(1070, "primaryExpression", 1, $1);}
    | INTEGER_LITERAL {$$ = $1;}
    | STRING_LITERAL {$$ = $1;}
    | FLOAT_LITERAL {$$ = $1;}
    | jumpExpression {$$ = alctree(1070, "primaryExpression", 1, $1);}
    | collectionLiteral {$$ = alctree(1070, "primaryExpression", 1, $1);}
    ;

parenthesizedExpression:
    LPAREN expression RPAREN {$$ = alctree(1071, "parenthesizedExpression", 3, $1, $2, $3);}
    ;

functionCall:
    IDENTIFIER LPAREN functionArguments RPAREN {$$ = alctree(1072, "functionCall", 4, $1, $2, $3, $4);}
    ;

functionArguments:
    expression {$$ = alctree(1073, "functionArguments", 1, $1);}
    | functionArguments COMMA expression {$$ = alctree(1073, "functionArguments", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
    ;

callSuffix:
    valueArguments {$$ = alctree(1074, "callSuffix", 1, $1);}
    ;

valueArguments:
    LPAREN optional_valueArgument RPAREN {$$ = alctree(1075, "valueArguments", 3, $1, $2, $3);}
    ;

optional_valueArgument:
    valueArgument multi_comma_valueArgument optional_comma {$$ = alctree(1076, "optional_valueArgument", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
    ;

multi_comma_valueArgument:
    multi_comma_valueArgument COMMA valueArgument {$$ = alctree(1077, "multi_comma_valueArgument", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
    ;

valueArgument:
    optional_simpleIdentifier_EQ optional_Multi expression {$$ = alctree(1078, "valueArgument", 3, $1, $2, $3);}
    ;

optional_simpleIdentifier_EQ:
    simpleIdentifier ASSIGNMENT {$$ = alctree(1079, "optional_simpleIdentifier_EQ", 2, $1, $2);}
    | %empty {$$ = NULL;}
    ;

optional_Multi:  
    MULT {$$ = $1;}
    | %empty {$$ = NULL;}
    ;

collectionLiteral:
    LSQUARE RSQUARE {$$ = alctree(1080, "collectionLiteral", 2, $1, $2);}
    | LSQUARE expression COMMA RSQUARE {$$ = alctree(1080, "collectionLiteral", 4, $1, $2, $3, $4);}
    | LSQUARE expression RSQUARE {$$ = alctree(1080, "collectionLiteral", 3, $1, $2, $3);}
    | LSQUARE expression multi_comma_expression RSQUARE {$$ = alctree(1080, "collectionLiteral", 4, $1, $2, $3, $4);}
    | LSQUARE expression multi_comma_expression COMMA RSQUARE {$$ = alctree(1080, "collectionLiteral", 5, $1, $2, $3, $4, $5);}
    ;

multi_comma_expression:
    multi_comma_expression COMMA expression {$$ = alctree(1081, "multi_comma_expression", 3, $1, $2, $3);}
    | %empty {$$ = NULL;}
    ;

indexingSuffix:
    LSQUARE expression multi_comma_expression optional_comma RSQUARE {$$ = alctree(1082, "indexingSuffix", 5, $1, $2, $3, $4, $5);}
    ;

assignableExpression:
    prefixUnaryExpression {$$ = alctree(1083, "assignableExpression", 1, $1);}
    | parenthesizedAssignableExpression {$$ = alctree(1083, "assignableExpression", 1, $1);}
    ;

parenthesizedAssignableExpression:
    LPAREN assignableExpression RPAREN {$$ = alctree(1084, "parenthesizedAssignableExpression", 3, $1, $2, $3);}
    ;

directlyAssignableExpression:
    postfixUnaryExpression assignableSuffix {$$ = alctree(1085, "directlyAssignableExpression", 2, $1, $2);}
    | simpleIdentifier {$$ = alctree(1085, "directlyAssignableExpression", 1, $1);}
    | parenthesizedDirectlyAssignableExpression {$$ = alctree(1085, "directlyAssignableExpression", 1, $1);}
    ;

parenthesizedDirectlyAssignableExpression:
    LPAREN assignableExpression RPAREN {$$ = alctree(1086, "parenthesizedDirectlyAssignableExpression", 3, $1, $2, $3);}
    ;

assignableSuffix:
    indexingSuffix {$$ = alctree(1087, "assignableSuffix", 1, $1);}
    | typeArguments {$$ = alctree(1087, "assignableSuffix", 1, $1);}
    ;

optional_comma:
    COMMA {$$ = $1;}
    | %empty {$$ = NULL;}
    ;

optional_colon_type:
    COLON type {$$ = alctree(1088, "optional_colon_type", 2, $1, $2);}
    | %empty {$$ = NULL;}
    ;

receiverType:
    nullableType {$$ = alctree(1089, "receiverType", 1, $1);}
    ;

%%

const char *yyname(int sym)
{ 
   return yytname[sym-RESERVED+3];
}