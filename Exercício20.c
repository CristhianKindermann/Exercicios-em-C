/*Fa�a um programa que leia uma lista de n�meros terminadas por zero. O zero n�o far� parte da lista. Ap�s a leitura, o programa dever� apresentar em cada linha e nessa ordem, os valores da soma e da m�dia dos n�meros lidos. A n�dia dever� ser apresentada com "%.2f" no printf.*/
#include <stdio.h>

int soma=0;
float num=0;
int i=0;

int main()
{
    do{
        scanf("%d", &i);
        soma = soma + i;
        num++;

    }
while (i != 0);
    
    printf("%d\n",soma);
    printf("%.2f", soma/(num-1));
    
   return 0;
}
