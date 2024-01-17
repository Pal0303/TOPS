//Calculate compound interest
#include <stdio.h>
int main(){
    float balance=345.6, rate=10.5;
    int n=10,t=3;
    float ci;
    ci=balance*(1+rate/n)*t-balance;
    printf("%f",ci);
}
