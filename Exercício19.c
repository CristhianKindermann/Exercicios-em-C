/*Fa�a um programa que leia uma lista de n�meros terminada por 0. O valor zero n�o far� parte dos valores a serem considerados. Ap�s a leitura o programa dever� apresentar, nessa ordem e um n�mero em cada linha, o menor e o maior valor lido.*/
#include <stdio.h>
int main(){
int num;
int max= -999999999;
int min= 999999999;


while( num!= 0 ) {
scanf("%d",&num); 
 if(num > max){
     max=num;

 }
      if(num < min && num != 0){
    min=num;
}
}
   
    printf("%d  \n%d", min, max);
     
}
