/*
Faça um programa que leia uma string e apresente-a o texto de forma que inverta a caixa do texto, ou seja, imprima as letras originalmente minúsculas em maiúsculas e vice-versa.*/
#include <stdio.h>
#include <ctype.h>



int main() {
    char str [100];
    int i;

    scanf("%[^\n]s",str);

    for (i = 0; str[i]; i++) 
        if (islower(str[i])) str[i] = toupper (str[i]);
   else if (isupper(str[i])) str[i] = tolower (str[i]);
   

    printf("%s",str);


}
