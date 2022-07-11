#include <stdio.h>

int main(){
  float v1[20],v2[20];
  int a,b,c,d;
  
  for(a=0;a<20;a++){
    printf("Digite o %dº valor:\n",a+1);
    scanf("%f",&v1[a]);
  }
  d=0;
  for(b=19;b>=0;b--){
    v2[d]=v1[b];
    d++;
  }
  
  printf("\tO vetor ficou assim:\n");
  printf("Inicial:\t\t final:\n");
  for(c=0;c<20;c++){
    printf("%3.1f\t\t\t\t%.1f\n",v1[c],v2[c]);
  }
  
}
