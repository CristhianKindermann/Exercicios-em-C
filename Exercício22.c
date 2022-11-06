/*Faça um programa que leia DUAS string (A e B) com até 100 símbolos cada, concatene o conteúdo da String B na string A e apresente o conteúdo da String A. Não deverá fazer uso da função strcat ou strcpy.*/
#include <stdio.h>
#include <string.h>
int main() {
   char str1[100] , str2[100] ;
   
scanf("%s",str1);
scanf("%s",str2);
  strcat(str1, str2);


printf("%s",str1);
}
   
