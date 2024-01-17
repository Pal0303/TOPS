#include<stdio.h>
int main(){
    int choice,a=10,b=20;
    printf("enter your choice:");
    printf("\n1.add\n2.sub\n3.mul\n4.div:\n");
    scanf("%d",&choice);
    switch(choice){
           case 1:
               printf("sum:%d",a+b);
               break;
           case 2:
               printf("sub:%d",a-b);
               break;
           case 3:
               printf("mul:%d",a*b);
               break;
           case 4:
               printf("div:%d",a/b);
               break;
           default:
               printf("wrong choice");
               break;

    }
    printf("\nfinished");
}
