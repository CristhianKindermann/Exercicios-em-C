/*
 Fa�a um programa que leia uma string com at� 1000 s�mbolos e apresente o tamanho da string. N�o dever� fazer uso da fun��o strlen.*/
 
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
