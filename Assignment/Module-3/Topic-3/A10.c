//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)
#include<stdio.h>
int main(){
    int n,last,first;
    printf("enter a number:");
    scanf("%d",&n);
    first=n;
    while(first>=10){
        first=first/10;
    }

        last=n%10;

    printf("sum of first %d and last %d is %d",first,last,first+last);

}
