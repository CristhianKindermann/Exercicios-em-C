/*Fa�a um programa que leia e apresente as informa��es abaixo.
Importante, o programa n�o dever� apresentar nenhuma mensagem extra, nenhum texto dever� ser enviado ao stream padr�o de sa�da, para que o farmaalg considere a sa�da correta. Cada item dever� ser apresentado em uma linha.

a) Leia um valor inteiro usando scanf com %d e apresente esse valor interiro usando prinf com o %d.
b) Leia uma tecla usando getchar e apresente com o valor lido com prinft com a formata��o �%d %c\n�
c) Leia um n�mero com ponto flutuante (scanf com %f) e o apresente com 2 digitos de precis�o (printf com %.2f).

Observe que a fun��o getchar retorna apenas um c�digo, mas aguarda que o enter seja pressionado.*/
#include <stdio.h>

int main(void)
{
    int num1,tecla;
    float num2;
    
    scanf("%d\n",&num1);
    printf("%d\n",num1);
    
    tecla = getchar();
    printf("%d %c\n",tecla,tecla);
    
    scanf("%f",&num2);
    printf("%.2f", num2);
    
}
