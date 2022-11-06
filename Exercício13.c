/* Faça um programa que leia um número de ponto flutuante e apresente em linhas separadas a parte inteira e a parte fracionária.

Na parte fracionário, usem %.3f e a qurba de linha na saída.*/
#include <stdio.h>

int main( void ) {
	float num;
   	   	scanf("%f", &num);
   	printf("\n%d",(int) num);
   	printf("\n%.3f", num - ((int)num));
}
