//Find circumference of Triangle formula : triangle = a + b + c
#include <stdio.h>
int main(){
    float a,b,c,cr;
    printf("enter one side value:");
    scanf("%f",&a);
    printf("enter second side value:");
    scanf("%f",&b);
    printf("enter third side value:");
    scanf("%f",&c);
    cr=a*b*c;
    printf("Circumference:%f",cr);
}
