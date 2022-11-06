/*Faça um programa que leia uma String e apresente todos os prefixos da string.
Exemplo 1:
Entrada:
pedra
saída:
p
pe
ped
pedr
pedra*/
#include <stdio.h>

void prx(char *string1){
int tam=0;

while(string1[tam]!='\0') tam++;
tam++;
for (int i = 0 ; i<tam; i++) {
    for (int j = 0 ; j<i; j++){
        printf("%c",string1[j]);
    }
    printf("\n");
}
}

int main(){
    
char str1[100];

scanf("%s",str1);
prx(str1);
return 0;
}
