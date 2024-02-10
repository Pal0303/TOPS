//WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main(){
    int t,i,n1=0,n2=1,n3;
    printf("enter term till you want to print:");
    scanf("%d",&t);
    if(t<=0){
        printf("not valid");
    }
    else if(t==1){
        printf("%d",n1);
    }
    else{
         while(i<=t){
               printf(" %d",n1);
               n3=n1+n2;
               n1=n2;
               n2=n3;
               i++;
         }
    }
}

