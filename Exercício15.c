/*Escreva um programa na linguagem C que pede os coeficientes de uma equação do segundo grau e exibe as raízes da equação, sejam elas reais ou complexas. Será necessário usar a função sqrt para calcular a raiz quadrada, essa função está presente no cabeçalho math.h.

Complemente o código:

int main(void) {
int a,b,c;
double x1,x2;
scanf("%d %d %d",&a,&b,&c);
complemente o código

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
