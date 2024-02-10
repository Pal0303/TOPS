/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit For next 100 units Rs. 0.75/unit For next 100 units Rs. 1.20/unit For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
int main(){
    float unit,bal,charge,total;
    printf("enter unit:");
    scanf("%f",&unit);
    if(unit<=50){
        bal=unit*0.5;
    }
     else if(unit<=150){
        bal=25+(unit-50)*0.75;
        }
    else if(unit<=250){
        bal=100+(unit-150)*1.2;
    }
    else{
        bal=220+((unit-250)*1.50);
    }
    charge=bal*0.20;
    total=bal+charge;

    printf("Electricity Bill = Rs. %.2f", total);
}


