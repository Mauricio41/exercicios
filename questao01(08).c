#include <stdio.h>

int main(){
  float v1[20],v2[20];
  int a,b,c;
  
  for(a=0,a<20;a++){
    printf("Digite o %dº valor:\n");
    scanf("%f",&v1[a]);
  }
  for(b=19;b>=0;b--){
    v2[b]=v1[b];
  }
  
  printf("O vetor ficou assim");
  for(c=0;c<20;c++){
    printf("%.1f",v2[c]);
  }
  
}
