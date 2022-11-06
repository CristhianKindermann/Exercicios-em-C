/*
 Faça um programa que leia uma string com até 1000 símbolos e apresente o tamanho da string. Não deverá fazer uso da função strlen.*/
 
#include <stdio.h>

int tString(char string[]){
    int numChar =0 ;
    while(string[numChar] != '\0'){
        
       ++numChar; 
    }
   
    return numChar;
}


int main (){

char stringU[1000];

scanf("%s",stringU);
int num = tString(stringU);
printf("%d", num);
return 0;

}
