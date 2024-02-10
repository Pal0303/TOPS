//If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-
#include<stdio.h>
int main(){
    float bill;
    printf("enter billing amount:");
    scanf("%f",&bill);
    if(bill>800){
        printf("total bill is:%f",bill+(bill*18)/100);
    }
    if(bill<256){
        printf("bill should be minimum of 256");
    }
}
