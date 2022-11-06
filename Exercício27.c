/*Faça um programa que leia uma String (com até 100 símbolos) e leia um símbolo. O programa deverá procurar a ocorrência do símbolo na String. Se o símbolo não for encontrado o programa deverá apresentar -1, caso contrário, deverá apresentar o índice do vetor que ocorre a primeira ocorrência do símbolo. Não poderar fazer uso das funções da biblioteca padrão iniciadas com str ou mem...*/
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
