%{
#include <stdio.h>
%}

%%

^\t*[ \t]+      { /* supprime les espaces en debut de ligne */ }
[ \t]+          { printf(" "); }
\n              { printf("\n"); }
.               { printf("%s", yytext); }

%%

int yywrap() {
	return 1;
}

int main() {
	printf("Analyseur lexical - suppression des espaces redondants:\n");
	yylex();
	return 0;
}
