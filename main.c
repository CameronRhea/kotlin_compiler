#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "k0gram.tab.h"
#include "funcs.h"
#include "tree.h"

extern int words, chars;
extern FILE *yyin;
extern int yylex(void);
extern char *yytext;
extern int yylineno;
extern int yyparse();
extern struct tree *root;
char *filename = NULL;

int yyerror(char *s) {
    fprintf(stderr, "Parse error: %s\n", s);
    return 1;
}

int main(int argc, char **argv) {
    int parse;

    if(argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Error opening file");
            return 1;
        }
        filename = strdup(argv[1]);
    } else {
        yyin = stdin;
        filename = strdup("stdin");
    }

    parse = yyparse();
    printf("yyparse() returns %d\n", parse);

    free_tree(root);
    free(filename);

    return parse;
}

