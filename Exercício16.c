/*
 Fa�a um programa que leia um n�mero inteiro e apresente o valor correspondente em decimal, hexadecimal, octal e bin�rio. Cada n�mero em uma linha (respeite a ordem dos elementos).*/
 #include <stdio.h>
void bi(int num){
	if(num!=0){
		bi(num/2);
		printf("%d",num % 2);
	}
}
int main(){
int num;

scanf("%d",&num);
printf("%d \n%x \n%o\n", num, num, num);
bi(num);
}
