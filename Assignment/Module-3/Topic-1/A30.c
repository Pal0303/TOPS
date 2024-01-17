//WAP to convert years into days and days into years
#include<stdio.h>
int main(){
    int year1,day1,year2,day2;
    printf("enter years:");
    scanf("%d",&year1);
    day1=year1*365.25;
    printf("\ndays:%d",day1);
    printf("\nenter days:");
    scanf("%d",&day2);
    year2=day2/365.25;
    printf("\nyears:%d",year2);
}
