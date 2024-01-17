//Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main(){
    char name[4][10];
    int salary[4][10],i,j;
    float avg;
    for(i=0;i<=4;i++){
            for(j=0;j<=10;j++){
                printf("enter employee name:");
                scanf(" %s",&name[i][j]);
                printf("enter employee salary:");
                scanf("%d",&salary[i][j]);
            }
    }
    int sum=0;
    for(i=0;i<=4;i++){
        sum=sum+salary[i];
        avg=sum/5;
    }
    printf("\ntotal salary:%d and total average:%d",sum,avg);
}
