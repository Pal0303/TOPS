//Convert years into days and months
#include<stdio.h>
int main(){
    float years,rmonths,totalm,days;
    int months;
    printf("enter years:");
    scanf("%f",&years);
    months=(int)years*12;
    rmonths=(years-(int)years)*10;
    totalm=months+rmonths;
    printf("months:%f",totalm);
    days=years*365.25;
    printf("\ndays:%f",days);
}
