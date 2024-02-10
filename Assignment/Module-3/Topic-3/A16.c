//Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main(){
    int a[5],sum=0,i=0;
    printf("enter 5 natural numbers:");
    while(i<5){
        scanf("%d",&a[i]);
        i++;
    }
    int j=0;
    while(j<5){
        sum=sum+a[j];
        j++;
    }
    printf("sum:%d",sum);

}
