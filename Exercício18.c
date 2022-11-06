/*
Faça um programa que leia um número de ponto flutuante e apresente o resultado do valor inteiro arredondado. Não use funções da biblioteca. Dica: use o cast para inteiros.

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
