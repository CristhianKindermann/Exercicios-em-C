/*
 Fa�a um programa que leia 10 n�meros inteiros e apresente o maior (n�o utilize vetor/matriz).*/
#include<stdio.h>
int main(void)
{
 int n, m;
 int i;

 scanf("%d", &n);

 m=n;

 for(i=1; i<10; i++)
 {
 scanf("%d", &n);

 if(n>m)
 m=n;

 }


 printf("%d", m); }
