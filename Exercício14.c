/*
Fa�a um programa que leia dois n�meros inteiros e apresente o MAIOR DIVISOR COMUM entre os dois n�meros.*/
#include <stdio.h>
int main() {
int m, n, aux;
scanf("%d %d", &m, &n);
while (n > 0) {
aux = n;
n = m % n;
m = aux;
}
printf("%d\n", m);
return 0;
}
