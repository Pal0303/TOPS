//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main(){
    int n,sum=0;
    int tsum=0;
    printf("enter term till you want sum:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            tsum=tsum+i;
            sum=sum+tsum;
    }
    printf("\nsum:%d",sum);
}
