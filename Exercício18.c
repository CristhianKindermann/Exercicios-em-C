/*
Fa�a um programa que leia um n�mero de ponto flutuante e apresente o resultado do valor inteiro arredondado. N�o use fun��es da biblioteca. Dica: use o cast para inteiros.

Exemplo:
Input:
3.9
Output
4*/
#include <stdio.h>
int main() {
float a,b;
scanf("%f",&a);
b=a -(int)a;
if(b < 0.5 ){
printf("%d",(int) a);	
}
else 
printf("%d",(int) a +1);
}
