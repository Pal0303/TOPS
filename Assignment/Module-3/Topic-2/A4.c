//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
int main(){
    int choice,a=100,b=10,c;
    printf("enter your choice:");
    printf("\n1.sum\n2.sub\n3.mul\n4.div\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            c=a+b;
            printf("%d",c);
            break;
        case 2:
            c=a-b;
            printf("%d",c);
            break;
        case 3:
            c=a*b;
            printf("%d",c);
            break;
        case 4:
            c=a/b;
            printf("%d",c);
            break;
        default:
            printf("enter valid case");
    }
}
