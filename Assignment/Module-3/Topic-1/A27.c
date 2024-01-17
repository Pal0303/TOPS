//Convert days into months
#include<stdio.h>
int main(){
    int days,months,rdays;
    printf("enter number of days:");
    scanf("%d",&days);
    months=days/30;
    rdays=days%30;
    printf("%d months and %d days",months,rdays);
}
