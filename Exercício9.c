/*
Fa�a um programa que leia tr�s n�meros e os apresente em ordem crescente. Imprima um n�mero em cada linha. N�o apresente texto para a leitura dos tr�s n�meros.*/
#include <stdio.h>

int main(void) 
{
  int n1, n2, n3;    
  
  scanf("%d %d %d", &n1,&n2,&n3);
  
  if (n1 <= n2 && n2 <= n3)
    {
      printf("%d\n%d\n%d",n1,n2,n3);
    }
  else if (n1 <= n3 && n3 <= n2)
    {
      printf("%d\n%d\n%d", n1,n3,n2);
    }
  else if (n2 <= n1 && n1 <= n3)
    {
      printf("%d\n%d\n%d", n2,n1,n3);
    }
  else if (n2 <= n3 && n3 <= n1) 
    {
      printf("%d\n%d\n%d", n2,n3,n1);
    }
  else if (n3 <= n1 && n1 <= n2) 
    {
      printf("%d\n%d\n%d", n3,n1,n2);
    }
  else 
    {
      printf("%d\n%d\n%d", n3,n2,n1);
    }
    

}
