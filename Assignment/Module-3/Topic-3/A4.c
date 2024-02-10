//WAP to print table up to given numbers
#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("\n%d*%d=%d",n,i,n*i);
    }
}
