/*Fa�a um programa que apresente (imprima com %x os resultados das express�es):
a) O valor hexadecimal do resultado do operador ~0x55
b) O valor hexadecimal do resultado da opera��o 0x09 << 2
c) O valor hexadecimal do resultado da opera��o 0x09 >> 2
d) O valor hexadecimal do resultado da opera��o 0xFF >> 2
e) O valor hexadecimal do resultado da opera��o 0xFF << 2

output esperado:
a) ffffffaa
b) 24
c) 2
d) 3f
e) 3fc

ATEN��O: a resposta acima n�o corresponde ao enunciado. O enunciado pede para apresentar os valores em decimal, hexadecimal e o resultado da express�o. Mas apenas o resultado da express�o est� sendo considerado.*/
#include <stdio.h>

int main(){
    int a = 0x55;
    int b = 0x09;
    int c = 0xFF;
    
    printf("a) %x\n", ~a);
    printf("b) %x\n", b<<2);
    printf("c) %x\n", b>>2);
    printf("d) %x\n", c>>2);
    printf("e) %x\n", c<<2);
}
