/*
Fa�a um programa que fa�a a opera��o de swap entre as vari�veis x e y, sem o uso de uma terceira vari�vel, utilizando apenas operadores bin�rios.

Complemente o c�digo abaixo ( o c�digo abaixo deve ser informado para o farmalg):

int main( void ) {
int x=5, y=-10;
printf("x=%d y=%d\n",x,y);
 complemente este c�digo 
printf("x=%d y=%d\n",x,y);
}*/
#include <stdio.h>

int main( void ) {
int x=5, y=-10;
printf("x=%d y=%d\n",x,y);
x= x + y ;
y= x - y ;
x= x - y;
printf("x=%d y=%d\n",x,y);
}
