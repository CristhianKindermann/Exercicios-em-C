/*
 Fa�a um programa que leia uma lista de n�meros inteiros terminados por 0, para cada n�mero lido o programa deve informar o n�mero e se o n�mero � par ou �mpar. N�o utilize vetores/matrizes.

output
N classifica��o

Onde N � o n�mero lido e classifica��o deve ser "par" ou "impar" sem acentos.*/
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
