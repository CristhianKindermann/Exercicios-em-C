/*
Fa�a uma fun��o setBit que receba dois par�metros (nro e bit), a fun��o deve modificar o valor de nro de tal forma que o n-bit seja modificado para 1 e retornar o novo valor.

Complemente o c�digo abaixo:

int setBit(int nro, int bit)
{
// complemente o c�digo
}

int main(void) {
int num,bit;
scanf("%d %d",&num,&bit);
printf("%d\n",resetBit(num,bit));
}*/
#include <stdio.h>

int setBit(int num, int bit)
{
    return (num|= 1 << bit);
}

int main(void) {
    int num,bit;
    scanf("%d %d",&num,&bit);
    printf("%d\n",setBit(num,bit));
}
