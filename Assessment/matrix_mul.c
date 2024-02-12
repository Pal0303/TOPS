//Write a program to make multiplication of 2-D Matrix
#include<stdio.h>
int main(){
    int i,j,k;
    int a[2][2],b[2][2],mul[2][2];
    printf("------Matrix: 1------");
    printf("\n\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("enter elements:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d   ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("------Matrix: 2------");
    printf("\n\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("enter elements:");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d   ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("------Result: Multiplication Matrix------");
    printf("\n\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            mul[i][j]=0;
            for(k=0;k<2;k++)
            {
            mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        }

    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d   ",mul[i][j]);
        }
        printf("\n");
    }
}
