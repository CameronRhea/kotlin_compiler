#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

#include <stdarg.h>
int serial = 0;
extern char *yytext;
extern int yylineno;
extern 
struct tree *create_node(int prodrule, char *symbolname, int nkids, ...) {
    struct tree *node = (struct tree *)malloc(sizeof(struct tree));
    node->prodrule = prodrule;
    node->symbolname = strdup(symbolname);
    node->nkids = nkids;
    node->id = serial++;

    for (int i = 0; i < 9; i++) {
        node->kids[i] = NULL;
    }

    va_list args;
    va_start(args, nkids);
    for (int i = 0; i < nkids; i++) {
        node->kids[i] = va_arg(args, struct tree *);
    }
    va_end(args);

    node->leaf = NULL;
    return node;
}
//Prints out the tree
void treeprint(struct tree *node, int level) {
    if (!node) return;

    for (int i = 0; i < level; i++) {
        printf("  ");
    }

    printf("\"%s\" (%d)", node->symbolname, node->prodrule);

    if (node->nkids == 0 && node->leaf) {
    printf(" LEAF");
}

    printf("\n");

    for (int i = 0; i < node->nkids; i++) {
        treeprint(node->kids[i], level + 1);
    }
}

struct tree *create_token_node(int token_code) {
    struct tree *node = malloc(sizeof(struct tree));
    node->prodrule = token_code;

    node->symbolname = strdup(yytext);

    node->nkids = 0;
    for (int i = 0; i < 9; i++) node->kids[i] = NULL;
    node->id = serial++;

    node->leaf = malloc(sizeof(struct token));
    node->leaf->category = token_code;
    node->leaf->text = strdup(yytext);
    node->leaf->filename = strdup("stdin");
    node->leaf->lineno = yylineno;
    node->leaf->ival = 0;
    node->leaf->dval = 0.0;
    node->leaf->sval = NULL;

    return node;
}



void free_tree(struct tree *t) {
    if (!t) return;

    free(t->symbolname);

    if (t->leaf) {
        free(t->leaf->text);
        free(t->leaf->filename);
        if (t->leaf->sval) {
            free(t->leaf->sval);
        }
        free(t->leaf);
    }

    for (int i = 0; i < t->nkids; i++) {
        free_tree(t->kids[i]);
    }

    free(t);
}
