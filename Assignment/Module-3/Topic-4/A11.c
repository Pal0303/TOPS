//WAP to accept 5 numbers from user and display in reverse order using for loop and array
#include<stdio.h>
void rev(int arr[]);
int main(){
    int a[5],i;
    printf("enter array numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    rev(a);
}

void rev(int arr[]){
    int i,r,rn;
    for(i=0;i<5;i++){
        rn=0;
        while(arr[i]!=0){
            r=arr[i]%10;
            rn=(rn*10)+r;
            arr[i]=arr[i]/10;
        }
        printf("\nreverse of %d index number is:%d",i,rn);
    }
}
