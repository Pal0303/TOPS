//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>
void sum(int arr1[2][2],int arr2[2][2]);
void sub(int arr1[2][2],int arr2[2][2]);
void mul(int arr1[2][2],int arr2[2][2]);
int main(){
    int a[2][2],i,j,b[2][2];
    printf("enter first array element:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\nelement for %d,%d position:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter second array element:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\nelement for %d,%d position:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    sum(a,b);
    sub(a,b);
    mul(a,b);
}

void sum(int arr1[2][2],int arr2[2][2]){
    int i,j,ans;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\nsum of position %d %d is:",i,j);
            ans=arr1[i][j]+arr2[i][j];
            printf("%d",ans);
        }
    }printf("\n");

}

void sub(int arr1[2][2],int arr2[2][2]){
    int i,j,ans=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\nsub of position %d %d is:",i,j);
            ans=arr1[i][j]-arr2[i][j];
            printf("%d",ans);
        }
    }printf("\n");

}
void mul(int arr1[2][2],int arr2[2][2]){
    int i,j,ans;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\nmul of position %d %d is:",i,j);
            ans=arr1[i][j]*arr2[i][j];
            printf("%d",ans);
        }
    }printf("\n");
}
