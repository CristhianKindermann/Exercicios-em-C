/* Fa�a um programa que leia um n�mero inteiro N e apresente um tabuleiro de xadrez com NxN casas. Para as casas brancas utilize somente um s�mbolo '1' e para as pretas somente um s�mbolo '0'.  */
#include <stdio.h>

main(void)

{


int x,y,num;
scanf("%d",&num);

for(y=1;y<num+1;y++){

for(x=1;x<num+1;x++)

if((x+y)%2==0)

printf("0");

else

printf("1");

printf("\n");

}

}
