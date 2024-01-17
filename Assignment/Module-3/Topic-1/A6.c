//Find area of Triangle Formula : A = 1/2 × b × h
#include <stdio.h>
int main(){
    float b,h,area;
    printf("enter base of triangle:");
    scanf("%f",&b);
    printf("enter height of triangle:");
    scanf("%f",&h);
    area=0.5*b*h;
    printf("area:%f",area);
}
