//1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main(){
    int n,sum;
    printf("enter term till you want natural number sum:");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("series is:1+2+3+4+5....+%d",n);
    printf("\nsum:%d",sum);
}
