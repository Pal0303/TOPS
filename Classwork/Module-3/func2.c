#include<stdio.h>
int sum();
int sub(int a,int b);
int main(){
    int x,y;
    printf("enter first number for sub:");
    scanf("%d",&x);
    printf("enter second number for sub:");
    scanf("%d",&y);
    printf("\nsub:%d",sub(x,y));
    printf("\nsum:%d",sum());
    //or ans=sum() and print-ans
}
int sum(){
    int a,b,c;
    printf("\nenter first number:");
    scanf("%d",&a);
    printf("\nenter second number:");
    scanf("%d",&b);
    c=a+b;
    return c;
}
int sub(int a,int b){
    return a-b;
}
