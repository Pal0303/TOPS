//Write a program to find out the max number from given array using function
#include<stdio.h>
int max(int arr[]);
int main(){
    int a[5],i,maximum;
    printf("enter array elements:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    maximum=max(a);
    printf("max is:%d",maximum);
}
int max(int arr[]){
    int i,greater=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>greater){
            greater=arr[i];
        }
    }
    return greater;
}
