#include <stdio.h>

int comparador(int *num1, int *num2, int *num3){
  
   int aux = 0;
   if(*num1 < *num2 && *num1 < *num3){
   	printf("O menor valor eh: %i \n", *num1);
     
   }else if(*num2 < *num1 && *num2 < *num3){
   	printf("O menor valor eh: %i \n", *num2);
     
   }else if(*num3 < *num1 && *num3 < *num2){
   	printf("O menor valor eh: %i \n", *num3);
   	
     
     
   }if(*num1 > *num2 && *num1 < *num3){
   	printf("O segundo menor valor eh: %i \n", *num1);
     
   }else if(*num1 < *num2 && *num1 > *num3){
   	printf("O segundo menor valor eh: %i \n", *num1);
     
   }else if(*num2 > *num1 && *num2 < *num3){
   	printf("O segundo menor valor eh: %i \n", *num2);
     
   }else if(*num2 < *num1 && *num2 > *num3){
   	printf("O segundo menor valor eh: %i \n", *num2);
     
   }else if(*num3 > *num1 && *num3 < *num2){
   	printf("O segundo menor valor eh: %i \n", *num3);
     
   }else if(*num3 < *num1 && *num3 > *num2){
   	printf("O segundo menor valor eh: %i \n", *num3);
     
     
   
   }if(*num1 > *num2 && *num1 > *num3){
   	printf("O maior valor eh: %i \n", *num1);
     
   }else if(*num2 > *num1 && *num2 > *num3){
   	printf("O maior valor eh: %i \n", *num2);
     
   }else if(*num3 > *num1 && *num3 > *num2){
   	printf("O maior valor eh: %i \n", *num3);
   }
}
int main(){
   int num1, num2, num3;
  
   num1 = num2 = num3 = 0;
  
   printf("\n\n INFORME O VALOR 1: ");
   fflush(stdin);
   scanf("%d", &num1);
  
   printf("\n\n INFORME O VALOR 2: ");
   fflush(stdin);
   scanf("%d", &num2);
  
   printf("\n\n INFORME O VALOR 3: \n");
   fflush(stdin);
   scanf("%d", &num3);
  
   comparador(&num1,&num2,&num3);
  
   printf("\n\n");
  
   	system ("pause");
	system("cls");
    menu();
}
