/*
Fa�a um programa que leia DUAS string (A e B) com at� 100 s�mbolos cada e compare a String A com a String B e informe 0 se as duas tiverem o mesmo conte�do, -1 se o conte�do de A for menor que o conte�do de B e caso contr�rio informe 1. Os conte�dos dever�o ser comparados s�mbolo a s�mbolo e a igualdade ou diferen�a ser� dada pela an�lise do c�digo ASCII de cada s�mbolo. A solu��o n�o poder� fazer uso da fun��o strcmp.*/
#include <stdio.h>
#include <string.h>
int main(){
    char a [100];
    char b [100];

scanf("%s %s",a,b);


if (strcmp(a,b) > 0){
    printf("1");
    
}
if(strcmp(a,b) == 0){
       printf("0");
    }
if (strcmp(a,b) < 0){
    printf("-1");
}
    
}
