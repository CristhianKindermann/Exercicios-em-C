/*Fa�a um programa que leia uma String (com at� 100 s�mbolos) e leia um s�mbolo. O programa dever� procurar a ocorr�ncia do s�mbolo na String. Se o s�mbolo n�o for encontrado o programa dever� apresentar -1, caso contr�rio, dever� apresentar o �ndice do vetor que ocorre a primeira ocorr�ncia do s�mbolo. N�o poderar fazer uso das fun��es da biblioteca padr�o iniciadas com str ou mem...*/
#include <stdio.h>

int proc(char *string,char *simb){
    for (int i = 0; string[i] !='\0'; i++)
   if(string[i] == *simb) return i;
   return -1;
}


int main(){
    
char str[100], aux[2];
scanf("%s",str);
scanf("%s",aux);
printf("%d",proc(str,aux));
return 0;
}
