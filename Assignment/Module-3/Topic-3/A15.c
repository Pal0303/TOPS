//Calculate sum of 10 numbers using of while loop
#include<stdio.h>
int main(){
    int a[10],sum=0,i;
    printf("enter 10 numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int j=0;
    while(j<10){
        sum=sum+a[j];
        j++;
    }
    printf("sum:%d",sum);
}
