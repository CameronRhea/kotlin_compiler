#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"


static char* sstrdup(const char* s) {
    if (!s) return NULL;
    char* dup = malloc(strlen(s) + 1);
    if (!dup) {
        fprintf(stderr, "malloc failure\n");
        exit(EXIT_FAILURE);
    }
    strcpy(dup, s);
    return dup;
}

struct tree* create_leaf(int prodrule, const char* symbolname, struct token* leaf_token) {
    struct tree* new_leaf = (struct tree*)malloc(sizeof(struct tree));
    if (!new_leaf) {
        fprintf(stderr, "Error: memory allocation failed in create_leaf.\n");
        exit(EXIT_FAILURE);
    }
    
    new_leaf->prodrule = prodrule;
    new_leaf->symbolname = sstrdup(symbolname);
    new_leaf->nkids = 0;
    for (int i = 0; i < 10; i++) {
        new_leaf->kids[i] = NULL;
    }
    new_leaf->leaf = leaf_token;

    return new_leaf;
}

#include <stdarg.h>
struct tree* create_node(int prodrule, const char* symbolname, int nkids, ...) {
    if (nkids < 0 || nkids > 10) {
        fprintf(stderr, "invalid number of children\n");
        return NULL;
    }

    struct tree* new_node = (struct tree*)malloc(sizeof(struct tree));
    if (!new_node) {
        fprintf(stderr, "memory problemo\n");
        exit(EXIT_FAILURE);
    }

    new_node->prodrule = prodrule;
    new_node->symbolname = sstrdup(symbolname);
    new_node->nkids = nkids;
    new_node->leaf = NULL;
    for (int i = 0; i < 10; i++) {
        new_node->kids[i] = NULL;
    }
    va_list args;
    va_start(args, nkids);
    for (int i = 0; i < nkids; i++) {
        struct tree* child = va_arg(args, struct tree*);
        new_node->kids[i] = child;
    }
    va_end(args);

    return new_node;
}


void free_tree(struct tree* root) {
    if (!root) return;
    for (int i = 0; i < root->nkids; i++) {
        free_tree(root->kids[i]);
    }
    if (root->symbolname) {
        free(root->symbolname);
        root->symbolname = NULL;
    }
    free(root);
}


void print_tree(const struct tree* root, int level) {
    if (!root) return;
    for (int i = 0; i < level; i++) {
        printf("  ");
    }
    printf("(%d) %s", root->prodrule,
           root->symbolname ? root->symbolname : "ε");

    if (root->nkids == 0 && root->leaf) {
        printf(" [leaf node]");
    }
    
    printf("\n");
    for (int i = 0; i < root->nkids; i++) {
        print_tree(root->kids[i], level + 1);
    }
}
