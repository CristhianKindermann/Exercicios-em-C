/*
Faça um programa que leia DUAS string (A e B) com até 100 símbolos cada e compare a String A com a String B e informe 0 se as duas tiverem o mesmo conteúdo, -1 se o conteúdo de A for menor que o conteúdo de B e caso contrário informe 1. Os conteúdos deverão ser comparados símbolo a símbolo e a igualdade ou diferença será dada pela análise do código ASCII de cada símbolo. A solução não poderá fazer uso da função strcmp.*/
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
