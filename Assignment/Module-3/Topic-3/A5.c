//WAP to print factorial of given number
#include<stdio.h>
int main(){
    int n,factorial=1,i;
    printf("enter which factorial you want:");
    scanf("%d",&n);
    if(n<0){
        printf("negative number not allowed");
    }
    else if(n==0){
        printf("factorial is 1");
    }
    else{
        for(i=1;i<=n;i++){
            factorial=factorial*i;
        }
        printf("factorial is:%d",factorial);

    }
}
