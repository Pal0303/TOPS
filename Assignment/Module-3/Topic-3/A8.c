//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
int main(){
    int n,greater=0,r;
    printf("enter a number:");
    scanf("%d",&n);
        for(int i=0;i<5;i++){
               r=n%10;
               if(greater<r){
                  greater=r;
               }
               n=n/10;
        }

    printf("max:%d",greater);
}

