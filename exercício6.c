/*Faça um programa que leia um número inteiro A, um operador aritmético (+,-,* ou /) e um segundo número inteiro B. O programa deverá apresentar o resultado da expressão lida.
Use a estrutura switch para avaliar os operadores e use a adição como operador padrão.

Continue a partir desse exemplo:

include <stdio.h>
int main(void) {
int num1,num2;
char op;
scanf("%d\n",&num1);
scanf("%c\n",&op);
scanf("%d",&num2);*/
#include <stdio.h>

int main(void) 
{
    int num1,num2;
    char op;

    scanf("%d\n",&num1);
    scanf("%c\n",&op);
    scanf("%d",&num2);

    switch(op)
    {
        case '+':
        printf("%d", num1 + num2);
        break;

        case '-':
        printf("%d", num1 - num2);
        break;

        case '*':
        printf("%d", num1 * num2);
        break;

        case '/':
        printf("%d", num1 / num2);
        break;

        default:
        printf("%d\n", num1 + num2);
        break;
    }
}
