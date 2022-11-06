/*
 Faça um programa que leia uma lista de números inteiros terminados por 0, para cada número lido o programa deve informar o número e se o número é par ou ímpar. Não utilize vetores/matrizes.

output
N classificação

Onde N é o número lido e classificação deve ser "par" ou "impar" sem acentos.*/
#include <stdio.h>
int main (void)
{
int num,p=1;

while(p!=0){
scanf("%d",&num);
if(num==0){
 p=num;
}
else{
if(num%2==0)
{
printf("%d par\n",num);
}
else
printf("%d impar\n",num);

}
}
}
