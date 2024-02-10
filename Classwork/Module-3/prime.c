#include<stdio.h>
int main(){
    int n,i,k=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            k=1;
            break;
        }
    }
    if(k==1){
        printf("not prime");
    }
    else{
        printf("prime");
    }
}
