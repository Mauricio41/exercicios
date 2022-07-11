#include<stdio.h>

int main(){
    char frase[200];
    int quantid,total=0;
    printf("Digite uma palavra:\n");
    scanf("%s",&frase);

    while( frase[total] != '\0'){
        total++;
    }
    int a=total;
    for(a;a>=0;a--){
      printf("%c",frase[a]);
}
}
