/*
Fa�a um programa que apresente um �menu com 4 op��es�, leia um n�mero inteiro entre 1 e 4 indicando a op��o do menu e para cada valor lido imprima, correspondentemente, as frases �op��o 1�, �op��o 2�, �op��o 3�, �op��o 4�. Use o comando switch para resolver esse exerc�cio. O programa encerra quando foi escolhido a op��o 4, nas demais condi��es dever� apresentar o menu novamente e ler uma nova op��o.
Sempre termine as strings com quebra de linha.

Exemplo:
output inicial:
1 - Opcao 1
2 - Opcao 2
3 - Opcao 3
4 - Opcao 4

input
1
4

output
Opcao 1
Opcao 4*/
#include <stdio.h>
int main (void){
int a;	
printf("1 - Opcao 1 \n2 - Opcao 2 \n3 - Opcao 3 \n4 - Opcao 4\n");
scanf("%d",&a);

while(a<4){

switch (a) {

case 1:
printf("Opcao 1\n");
printf("1 - Opcao 1 \n2 - Opcao 2 \n3 - Opcao 3 \n4 - Opcao 4\n");
scanf("%d",&a);
break;
case 2:
printf("Opcao 2\n");
printf("1 - Opcao 1 \n2 - Opcao 2 \n3 - Opcao 3 \n4 - Opcao 4\n");
scanf("%d",&a);
break;
case 3:
printf("Opcao 3\n");
printf("1 - Opcao 1 \n2 - Opcao 2 \n3 - Opcao 3 \n4 - Opcao 4\n");
scanf("%d",&a);
break;
case 4:
break;
}
}
printf("Opcao 4");
}
