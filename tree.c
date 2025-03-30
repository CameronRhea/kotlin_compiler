#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

#include <stdarg.h>
int serial = 0;
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
void treeprint(struct tree *node, int level) {
    if (!node) return;

    // Print indentation
    for (int i = 0; i < level; i++) {
        printf("  ");
    }

    // Print current node
    printf("Node[%d]: %s (rule %d)", node->id, node->symbolname, node->prodrule);

    // Optionally print leaf value
    if (node->leaf) {
        printf(" : '%d'", node->id);

    }

    printf("\n");

    // Recursively print children
    for (int i = 0; i < node->nkids; i++) {
        treeprint(node->kids[i], level + 1);
    }
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
