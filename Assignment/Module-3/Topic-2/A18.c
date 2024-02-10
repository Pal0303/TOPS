//Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main(){
    float sale,pur;
    printf("enter sales value:");
    scanf("%f",&sale);
    printf("enter purchase value:");
    scanf("%f",&pur);
    if(sale>pur){
        printf("profit:%f",sale-pur);
    }
    else{
        printf("loss:%f",pur-sale);
    }
}
