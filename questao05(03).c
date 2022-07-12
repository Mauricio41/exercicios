#include <stdio.h>
#include <math.h>

float are_c(float R){
    float result,pi=3.14;
    result=pi*(pow(R,2));
    return result;
}

int main(){
	float raio, area;
	
	printf("RAIO = "); 
	scanf("%f", &raio);
 
	area = are_c(raio);
 
	printf("AREA = %.2f m2 \n", area);
 
}
