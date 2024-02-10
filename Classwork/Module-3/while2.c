#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter number till you want to print:");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            printf("\n%d.even",i);
        }
        else{
            printf("\n%d.odd",i);
        }
        i++;
    }
}
