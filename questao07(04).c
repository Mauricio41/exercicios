#include <stdio.h>


int main(int argc, char const *argv[]){
  int a;
  int b;
  int *cont;

  printf("\n\tDigite o valor de A:");
  scanf("%d",&a);
  printf("\n\tDigite o valor de B:");
  scanf("%d",&b);

  printf("\nOs valores ficaram assim:\nA = %d\nB = %d",a,b);

  *cont = a;
  a = b;
  b = *cont;

  printf("\n\nOs valores inversos:\n A = %d\nB = %d",a,b);

}
