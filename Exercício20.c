/*Faça um programa que leia uma lista de números terminadas por zero. O zero não fará parte da lista. Após a leitura, o programa deverá apresentar em cada linha e nessa ordem, os valores da soma e da média dos números lidos. A nédia deverá ser apresentada com "%.2f" no printf.*/
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
