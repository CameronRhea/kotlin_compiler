#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

struct tree *create_node(int prodrule, char *symbolname, int nkids) {
    struct tree *node = (struct tree *)malloc(sizeof(struct tree));

    node->prodrule = prodrule;
    node->symbolname = strdup(symbolname);
    node->nkids = nkids;
    
    for (int i = 0; i < 9; i++) {
        node->kids[i] = NULL;
    }
    
    node->leaf = NULL;
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
