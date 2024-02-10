//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main(){
    int n,n2,n3;
    printf("enter a number:");
    scanf("%d",&n);
    n2=n*n;
    n3=n*n*n;
    printf("first power:%d\nsecond power:%d\nthird power:%d",n,n2,n3);
}
