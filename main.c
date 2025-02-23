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

struct token {
   int category;
   char *text;
   int lineno;
   char *filename;
   int ival;
   double dval;
   char *sval;
};

struct tokenlist {
    struct token *t;
    struct tokenlist *next;
};

char *filename = NULL;
struct token *yytoken = NULL; 
int create_token_node(int category){
    struct token* new_token = (struct token*)malloc(sizeof(struct token));    
    if (new_token == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    new_token->category = category;
    new_token->text = strdup(yytext);
    new_token->lineno = yylineno;
    new_token->filename = strdup(filename);

    if (category == STRING || category == UniCharacterLiteral) {
        new_token->sval = strdup(yytext);
        new_token->ival = 0;
        new_token->dval = 0.0;

    } else if (category == IntegerLiteral) {
        new_token->sval = NULL;
        new_token->ival = atoi(yytext);
        new_token->dval = 0.0;

    } else if (category == RealLiteral || category == UnsignedLiteral) {
        new_token->sval = NULL;
        new_token->ival = 0;
        new_token->dval = atof(yytext);

    } else {
        new_token->sval = NULL;
        new_token->ival = 0;
        new_token->dval = 0.0;
    }
    
    yytoken = new_token;

    return category;
}

void append_token(struct tokenlist **head, struct token *new_token) {
    if (*head == NULL) {
        *head = (struct tokenlist*)malloc(sizeof(struct tokenlist));
        (*head)->t = new_token;
        (*head)->next = NULL;
        return;
    }

    struct tokenlist *current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = (struct tokenlist*)malloc(sizeof(struct tokenlist));
    current->next->t = new_token;
    current->next->next = NULL;
}


void free_list(struct tokenlist *head) {
    struct tokenlist *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        struct token* temp_token = temp->t;
        free(temp_token->text);
        free(temp_token->filename);
        if (temp_token->sval) {
            free(temp_token->sval);
        }
        free(temp_token);
        free(temp);
    }
}

void print_list(struct tokenlist *head) {
    struct tokenlist *temp = head;
    printf("Category\tText\t\t\tLineno\tFilename\tIval/Sval/Dval\n");
    printf("-------------------------------------------------------------------------\n");
    while (temp != NULL) {
        struct token *token = temp->t;
        printf("%d\t\t%s\t\t%d\t%s\t", token->category, token->text, token->lineno, token->filename);
        if (token->category == STRING || token->category == UniCharacterLiteral) {
            printf("%s\n", token->sval);
        } else if (token->category == IntegerLiteral) {
            printf("%d\n", token->ival);
        } else if (token->category == RealLiteral || token->category == UnsignedLiteral) {
            printf("%f\n", token->dval);
        } else {
            printf("\n");
        }
        temp = temp->next;
    }
}


int
main(int argc, char **argv)
{
    int parse;
    if(argc > 1) {
        yyin = fopen(argv[1], "r");
        filename = strdup(argv[1]);
    } else {
        filename = strdup("stdin");
    }

    parse = yyparse();
    printf("yyparse() returns %d", parse);
}