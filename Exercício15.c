/*Escreva um programa na linguagem C que pede os coeficientes de uma equa��o do segundo grau e exibe as ra�zes da equa��o, sejam elas reais ou complexas. Ser� necess�rio usar a fun��o sqrt para calcular a raiz quadrada, essa fun��o est� presente no cabe�alho math.h.

Complemente o c�digo:

int main(void) {
int a,b,c;
double x1,x2;
scanf("%d %d %d",&a,&b,&c);
complemente o c�digo

 printf("%.2f\n%.2f\n",x1,x2);
}*/
#include <stdio.h>
#include <math.h>

int main(void) {
int a,b,c;
double x1,x2;
float delta;
scanf("%d %d %d",&a,&b,&c);

if(a!=0){
	delta=(b*b)-(4*a*c);
if(delta >= 0){

	x1=(-b + sqrt(delta))/(2*a);
	x2=(-b - sqrt(delta))/(2*a);
	printf("%.2f\n%.2f\n",x1,x2);
}
else{
	delta=-delta;
	 printf("%.2f + i.%.2f\n", (-b)/(2*a), (sqrt(delta))/(2*a));
     printf("%.2f - i.%.2f\n", (-b)/(2*a), (sqrt(delta))/(2*a));
}
}
}
