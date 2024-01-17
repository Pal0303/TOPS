/*Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/
#include<stdio.h>
int main(){
    float balance=345.6, rate=10.5;
    int t=3;
    float ci;
    ci=balance*(1+rate/100)*t-balance;
    printf("%f",ci);
}
