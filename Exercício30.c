/* Fa�a uma fun��o isBit que receba dois par�metros (nro e bit), a fun��o deve retornar FALSO (0) se o n-bit estiver com valor 0 ou, no caso contr�rio, retornar VERDADEIRO.

Complemente o c�digo abaixo:

int isBit(int nro, int bit)
{
 complemente o c�digo
}

int main(void) {
int num,bit;
scanf("%d %d",&num,&bit);
printf("%d\n", isBit(num,bit) );
}*/
#include <stdio.h>

#define set 1
#define not_set 0

int resetBit(int num, int bit)
{
    return ((num & (1 << bit))? set : not_set);
}

int main(void) {
    int num,bit;
    scanf("%d %d",&num,&bit);
    printf("%d\n",resetBit(num,bit));
}
