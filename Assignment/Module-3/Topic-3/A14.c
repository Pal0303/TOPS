//Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
int main(){
    int a[5],i,n,fact;
    printf("enter numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        n=a[i];
        fact=1;
        while(n>=1){

            fact=fact*n;
            n--;
        }
        printf("\nfactorial:%d",fact);
    }


}
