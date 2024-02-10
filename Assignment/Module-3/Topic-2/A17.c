//Write a C program to check whether a triangle can be formed with the given values for the angles.
#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter first angle value:");
    scanf("%f",&a);
    printf("enter second angle value:");
    scanf("%f",&b);
    printf("enter third angle value:");
    scanf("%f",&c);
    if(a+b+c==180){
        printf("it forms a triangle");
    }
    else{
        printf("not a triangle");
    }
}
