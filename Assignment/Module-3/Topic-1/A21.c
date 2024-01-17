//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include<stdio.h>
int main(){
    float a,b,temp,c=3,d=4;
    printf("enter first number:");
    scanf("%f",&a);
    printf("enter second number:");
    scanf("%f",&b);
    printf("before swapping first number:%f",a);
    printf("\nbefore swapping second number:%f",b);
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swapping first number:%f",a);
    printf("\nafter swapping first number:%f",b);
    printf("\nafter swapping c:%f",(c+d)-c);
    printf("\nafter swapping d:%f",(c+d)-d);
}
