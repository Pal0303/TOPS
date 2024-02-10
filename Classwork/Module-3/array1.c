#include<stdio.h>
int main(){
    int arr[3]={1,2,3},i;
    float arr2[4];
    char arr3[5];
    arr2[0]=1.2;
    arr2[1]=2.1;
    arr2[2]=1.12;
    arr2[3]=1.52;

    printf("%d %d %d",arr[0],arr[1],arr[2]);
    printf("\n%f %f %f %f",arr2[0],arr2[1],arr2[2],arr2[3]);
    //printf("\n%c %c %c %c %c",arr3[0],arr3[1],arr3[2],arr3[3],arr3[4]);
    for(i=0;i<3;i++){
        printf("\n%d",arr[i]);
    }
    for(i=0;i<4;i++){
        printf("\n%f",arr2[i]);
    }
    for(i=0;i<5;i++){
        scanf(" %c",&arr3[i]);
    }
    for(i=0;i<5;i++){
        printf(" %c",&arr3[i]);
    }
}
