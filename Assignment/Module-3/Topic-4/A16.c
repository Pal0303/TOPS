//Accept 5 numbers from user and perform sum of arrays
#include<stdio.h>
int add(int arr[5]);
int main(){
    int a[5],i,sum;
    printf("enter array elements:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    sum=add(a);
    printf("sum of array elements:%d",sum);
}
int add(int arr[5]){
    int i,sum=0;
    for(i=0;i<5;i++){
        sum=sum+arr[i];
    }
    return sum;
}
