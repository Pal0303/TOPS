//Convert minutes into seconds and hours
#include<stdio.h>
int main(){
    int m,s,h;
    printf("enter minutes:");
    scanf("%d",&m);
    s=m*60;
    h=m/60;
    printf("hours:%d and seconds:%d",h,s);
}
