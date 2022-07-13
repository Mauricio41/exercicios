#include <stdio.h>

float ptr(int a,int b){
    int *cont;
    *cont = b;
    
    return *cont;
}

float ptrs(int a,int b){
    int *cont;
    *cont = a;
    
    return *cont;
}


int main(int argc, char const *argv[]){
  int a,b;
  int x,y;

  printf("\n\tDigite o valor de A:");
  scanf("%d",&a);
  printf("\n\tDigite o valor de B:");
  scanf("%d",&b);

  printf("\nOs valores ficaram assim:\nA = %d\nB = %d",a,b);



  printf("\n\nOs valores inversos:\n A = %d\nB = %d",x = ptr(a,b), y = ptrs(a,b));

}
