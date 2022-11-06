/*Faça um programa que leia DUAS string (A e B) com até 100 símbolos cada e compare a String A com a String B ignorando a variação de caixa (considere as letras minúsculas e maiúsculas de forma equivalente). O programa deverá informar 0 se as duas tiverem o mesmo conteúdo, -1 se o conteúdo de A for menor que o conteúdo de B e caso contrário informe 1. Os conteúdos deverão ser comparados símbolo a símbolo e a igualdade ou diferença será dada pela análise do código ASCII de cada símbolo. A solução não poderá fazer uso da função strcmp,strcmpi, strupper, strlower, strcasecmp etc.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
char a[200];
char b[200];
    int i;
    int j;
scanf("%s %s",a,b);

    while (a[i] != '\0' ){
        a[i] =tolower(a[i]);
    i++;
    }
    while (b[j] != '\0'){
        b[j] =tolower(b[j]);
        j++;
    }
    
  if(i == j){
      
      printf("0");
  } 
  if ( i < j){
      printf("-1");
  }
  if ( i > j){
      printf("1");
  }
    
}
