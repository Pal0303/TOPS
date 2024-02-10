//WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main(){
    int a[4];
    for(int i=0;i<=4;i++){
        printf("enter a number:");
        scanf("%d",&a[i]);
    }
    printf("numbers are:");
    for(int i=0;i<=4;i++){
        printf("\n%d",a[i]);
    }
}
