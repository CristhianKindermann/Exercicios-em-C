/*Fa�a um programa que leia um n�mero inteiro A, um operador aritm�tico (+,-,* ou /) e um segundo n�mero inteiro B. O programa dever� apresentar o resultado da express�o lida.
Use a estrutura switch para avaliar os operadores e use a adi��o como operador padr�o.

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
