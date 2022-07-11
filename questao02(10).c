#include<stdio.h>

int main(){
    char frase[200];
    int quantid,total=0;
    printf("\tComtador de caracteres:\n");
    printf("Digite uma palavra:\n");
    scanf("%s",&frase);
  
    while( frase[total] != '\0'){
        total++;
    }
  
    quantid = total;
    printf("\n\nA apalavra %s tem %d caracteres", frase,quantid);
}
