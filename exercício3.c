/* Faça um programa que leia uma matriz de valores inteiros de 3x3. E na sequência apresente a soma dos elementos de cada linha, linha a linha. Deverá ser apresentado um valor por linha.
 */
 #include <stdio.h>

int main(void)
{
   int matriz[3][3], result[3];
   int som, l;

    for (l = 0; l < 3; l++){
        for (int c = 0; c < 3; c++){
            scanf("%d", &matriz[l][c]);
        }
    }
    for (l = 0; l < 3; l++)
    {
        som = 0;
        for (int c = 0; c < 3; c++)
        {
            som = som + matriz[l][c]; 
        }
        result[l] = som;
    }
    for (l = 0; l< 3; l++){
        printf("%d \n", result[l]);
    }
}
