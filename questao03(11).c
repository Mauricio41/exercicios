#include<stdio.h>

int main(){
    char frase[200];
    int quantid,total=0;
    printf("Digite uma palavra:\n");
    scanf("%s",&frase);
    printf("\n\n");
    while( frase[total] != '\0'){
        total++;
    }
    int a=total;
    for(a;a>=0;a--){
      printf("%s",frase[a]);
}
