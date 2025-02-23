%token NAME NUMBER
%%
sequence : pair sequence | ;
pair : NAME NUMBER { printf("got a name-number pair\n"); } ;

