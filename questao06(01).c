#include <stdio.h>
#include <math.h>

float pott(float X,float Y){
    float result=X;
    int a;
    for(a=2;a<=Y;a++){
        result+=result*result;
    }
    return result;
}


int main(void){
	float x,y,resultado,cont,cont1;
	float a,b;
	
	printf("Valor de X = "); 
	scanf("%f", &x);
	printf("\nValor de Y = "); 
	scanf("%f", &y);
	printf("\nValor de A maior que 0(ZERO) = "); 
	scanf("%f", &a);
	printf("\nValor de B maior que 0(ZERO) = "); 
	scanf("%f", &b);
    
    if(a>0 && b>0){
        cont=(x-y);
        cont1=(a+b);
        resultado=pott(x,a)+pott(y,b)+pott(cont,cont1);
    }else{
        printf("Tente digitar apenas numeros maiores que ZERO para A e B");
    }

 
	printf("Resultado = %.2f \n", resultado);
 
}
