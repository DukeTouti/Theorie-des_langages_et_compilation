%{
#include <stdio.h>
%}

nombre      [0-9]+
identif     [a-zA-Z][a-zA-Z0-9]*
separateur  [ \t\n]+

%%

{separateur}    { /* separateurs ignores */ }
"begin"         { printf("mot-cle begin\n"); }
"end"           { printf("mot-cle end\n"); }
"**"            { printf("operateur **\n"); }
"+"             { printf("operateur +\n"); }
"-"             { printf("operateur -\n"); }
"*"             { printf("operateur *\n"); }
{nombre}        { printf("nombre %s\n", yytext); }
{identif}       { printf("identificateur %s\n", yytext); }
.               { printf("erreur %s\n", yytext); }

%%

int yywrap() {
	return 1;
}

int main() {
	printf("Analyseur lexical - reconnaissance des entites:\n");
	yylex();
	return 0;
}
