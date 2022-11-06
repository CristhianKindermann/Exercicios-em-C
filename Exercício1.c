/*Faça um programa que leia e apresente as informações abaixo.
Importante, o programa não deverá apresentar nenhuma mensagem extra, nenhum texto deverá ser enviado ao stream padrão de saída, para que o farmaalg considere a saída correta. Cada item deverá ser apresentado em uma linha.

a) Leia um valor inteiro usando scanf com %d e apresente esse valor interiro usando prinf com o %d.
b) Leia uma tecla usando getchar e apresente com o valor lido com prinft com a formatação “%d %c\n”
c) Leia um número com ponto flutuante (scanf com %f) e o apresente com 2 digitos de precisão (printf com %.2f).

Observe que a função getchar retorna apenas um código, mas aguarda que o enter seja pressionado.*/
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
