#include<stdio.h>

float area(float h,float b){
    float m_area = (b*h)/2;
    return m_area;
}

int main(){
    float tri_h,tri_b,result;
  
    printf("Informe a medida da altura do triangulo:\n");
    scanf("%f",&tri_h);
    printf("Informe a medida da base do triangulo:\n");
    scanf("%f",&tri_b);
  
    result = area(tri_h,tri_b);
  
    printf("A area do triangulo é %.2f",result);
    
}
