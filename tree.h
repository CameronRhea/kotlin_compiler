#ifndef TREE_H
#define TREE_H

struct token {
    int category;
    char *text;
    int lineno;
    char *filename;
    int ival;
    double dval;
    char *sval;
};

struct tree {
    int prodrule;
    char *symbolname;
    int nkids;
    int id;
    struct tree *kids[9];
    struct token *leaf;
};

extern struct tree *root;
extern int serial;

struct tree *create_node(int prodrule, char *symbolname, int nkids, ...);
void treeprint(struct tree *node, int level);
void free_tree(struct tree *t);

#endif
