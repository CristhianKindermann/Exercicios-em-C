/*Fa�a um programa que leia DUAS string (A e B) com at� 100 s�mbolos cada, concatene o conte�do da String B na string A e apresente o conte�do da String A. N�o dever� fazer uso da fun��o strcat ou strcpy.*/
#include <stdio.h>
#include <string.h>
int main() {
   char str1[100] , str2[100] ;
   
scanf("%s",str1);
scanf("%s",str2);
  strcat(str1, str2);


printf("%s",str1);
}
   
