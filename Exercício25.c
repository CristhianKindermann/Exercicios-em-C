/*Fa�a um programa que leia uma string e apresente-a na ordem inversa, do �ltimo s�mbolo para o primeiro. N�o use fun��es da biblioteca padr�o.*/
#include <stdio.h>

void main()
{
char str[100];
char cop[100];
int i, compstr;


scanf("%s",str);

for(compstr=0; str[compstr]; compstr++);
 

for(i=0; str[i]; i++)
{
   cop[i] = str[compstr-i-1]; 
}
cop[i] = '\0';
printf("%s", cop);
}
