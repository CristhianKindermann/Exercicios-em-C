/* Fa�a um programa que leia um n�mero de ponto flutuante e apresente em linhas separadas a parte inteira e a parte fracion�ria.

Na parte fracion�rio, usem %.3f e a qurba de linha na sa�da.*/
#include <stdio.h>

int main( void ) {
	float num;
   	   	scanf("%f", &num);
   	printf("\n%d",(int) num);
   	printf("\n%.3f", num - ((int)num));
}
