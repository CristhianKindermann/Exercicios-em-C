/*Fa�a um programa que leia DUAS string (A e B) com at� 100 s�mbolos cada e compare a String A com a String B ignorando a varia��o de caixa (considere as letras min�sculas e mai�sculas de forma equivalente). O programa dever� informar 0 se as duas tiverem o mesmo conte�do, -1 se o conte�do de A for menor que o conte�do de B e caso contr�rio informe 1. Os conte�dos dever�o ser comparados s�mbolo a s�mbolo e a igualdade ou diferen�a ser� dada pela an�lise do c�digo ASCII de cada s�mbolo. A solu��o n�o poder� fazer uso da fun��o strcmp,strcmpi, strupper, strlower, strcasecmp etc.*/
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
