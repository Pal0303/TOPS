//WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("enter third number:");
    scanf("%d",&c);
    (a>b && a>c)?printf("%d",a): (b>a && b>c)?printf("%d",b):printf("%d",c);
}
