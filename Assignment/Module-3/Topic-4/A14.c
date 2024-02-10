//Perform 2D matrix array
#include<stdio.h>
int main(){
    int i,j;
    int a[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("enter %d,%dth element:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\n%d,%dth element is:%d",i,j,a[i][j]);
        }
    }

}
