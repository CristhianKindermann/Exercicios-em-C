/* Fa�a um programa que leia uma matriz de valores inteiros de 3x3. E na sequ�ncia apresente em uma linha os elementos da diagonal principal delimitados por um espa�o e em outra linha os elementos da diagonal secund�ria delimitados por um espa�o

Exemplo de entrada
1 2 3
4 5 6
7 8 9

sa�da esperada para o exemplo acima:
1 5 9
3 5 7*/
#include <stdio.h>

int main(void)
{
   int matriz[3][3], l, c;

    for (l = 0; l < 3; l++){
        for (int c = 0; c < 3; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

    for (l = 0; l < 3; l++)
    {
        printf("%d ", matriz[l][l]);
    }
    printf("\n");
    c = 2;
    for (l = 0; l < 3; l++)
    {
        printf("%d ", matriz[l][c]);
        c--;
    }
}
