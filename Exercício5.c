/* Fa�a um programa que apresente os n�meros de 1 a 10, sendo que cada n�mero deve ser impresso em uma linha e os n�meros �mpares deslocados (\t) a direita.
Sua Resposta*/
#include <stdio.h>

int main(void)
{
  for(int num = 1; num<=10; num++){
    if(num%2 == 0){
        printf("%d \n", num);
    }
    else{
        printf("\t %d \n", num);
    }
  }
}
