//WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include<stdio.h>
void ev_od(int arr[]);
int main(){
    int a[5],i;
    printf("enter array elements:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    ev_od(a);
}

void ev_od(int arr[]){
    int i;
    for(i=0;i<5;i++){
        if(arr[i]%2==0){
            printf("\n%d is even",arr[i]);
        }
        else{
            printf("\n%d is odd",arr[i]);
        }
    }
}
