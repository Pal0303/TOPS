//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
int sum(int n1,int n2);
int sub(int n1,int n2);
int mul(int n1,int n2);
int div(int n1,int n2);
int main(){
    char choice;
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("1.sum\n2.sub\n3.mul\n4.div");
    printf("\nenter your choice:");
    scanf(" %c",&choice);
    switch(choice){
        case '1':
            printf("%d",sum(a,b));
            break;
        case '2':
            printf("%d",sub(a,b));
            break;
        case '3':
            printf("%d",mul(a,b));
            break;
        case '4':
            printf("%d",div(a,b));
            break;
        default:
            printf("enter valid choice");
            break;
    }
}
int sum(int n1,int n2){
    return n1+n2;
}
int sub(int n1,int n2){
    return n1-n2;
}
int mul(int n1,int n2){
    return n1*n2;
}
int div(int n1,int n2){
    return n1/n2;
}
