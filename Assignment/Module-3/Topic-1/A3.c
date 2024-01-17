//WAP to Find Area And Circumference of Circle
#include <stdio.h>
int main(){
    float r,area,c,pi=3.14;
    printf("enter radius value:");
    scanf("%f",&r);
    area=pi*r*r;
    c=2*pi*r;
    printf("area:%f,\ncircumference:%f",area,c);
}

