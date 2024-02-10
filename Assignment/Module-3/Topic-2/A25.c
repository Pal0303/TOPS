//Accept the input month number and print number of days in that month.
#include<stdio.h>
int main(){
    int m;
    printf("enter a month number:");
    scanf("%d",&m);
    if(m==4 || m==6 || m==9 || m==11){
        printf("number of days:30");
    }
    else if(m==2){
        printf("number of day:28/29");
    }
    else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        printf("number of days:31");
    }
    else{
        printf("enter valid month");
    }
}

