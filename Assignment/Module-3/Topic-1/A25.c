//Accept 5 expense from user and find average of expense
#include<stdio.h>
int main(){
    int e1,e2,e3,e4,e5;
    float avg;
    printf("enter first expense:");
    scanf("%d",&e1);
    printf("enter second expense:");
    scanf("%d",&e2);
    printf("enter third expense:");
    scanf("%d",&e3);
    printf("enter forth expense:");
    scanf("%d",&e4);
    printf("enter fifth expense:");
    scanf("%d",&e5);
    avg=e1+e2+e3+e4+e5/5;
    printf("avg:%f",avg);
}
