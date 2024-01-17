//WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main(){
    float a,b;
    printf("enter first number:");
    scanf("%f",&a);
    printf("enter second number:");
    scanf("%f",&b);
    printf("before swapping first number:%.2f",a);
    printf("\nbefore swapping second number:%.2f",b);
    printf("\nafter swapping first number:%.2f",a*b/a);
    printf("\nafter swapping second number:%.2f",a*b/b);
}
