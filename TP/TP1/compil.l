%{
#include <stdio.h>
#include <stdlib.h>
%}

int_type   [+-]?[0-9]+
float_type [+-]?[0-9]*"."[0-9]+([eE][+-]?[0-9]+)?
spaces     [ \t\n]+
alphabetlatin [a-zA-Z]
mot        [a-zA-Z]+

%%

{int_type}     { printf("\nun int: %d\n\n", atoi(yytext)); }
{float_type}   { printf("\nun float: %f\n\n", atof(yytext)); }
{spaces}       { ; }
{alphabetlatin} { printf("\nune lettre: %s\n\n", yytext); }
{mot}          { printf("\nun mot: %s\n\n", yytext); }
.              { printf("\nlexical error : %s\n\n", yytext); }

%%

int yywrap() {
    return 1; // Retourne 1 pour indiquer la fin de l'entrée
}

int main() {
    printf("start lexical analyser: \n");
    yylex();
    return 0;
}
