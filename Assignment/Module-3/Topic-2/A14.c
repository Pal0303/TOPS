//WAP to find the largest of three numbers.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("enter third number:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d",a);
        }
        else{
            printf("%d",c);
        }
    }
    else if(b>c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
}
