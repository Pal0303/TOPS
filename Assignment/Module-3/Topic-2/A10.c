//WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){
    float n;
    printf("enter a number:");
    scanf("%f",&n);
    if(n>0){
        printf("%f is positive",n);
    }
    else if(n<0){
        printf("%f is negative",n);
    }
    else{
        printf("%f is zero",n);
    }
}

