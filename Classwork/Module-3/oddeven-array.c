#include<stdio.h>
void check(int a);
int main(){
    int n[10],i;
    for(i=0;i<10;i++){
        printf("enter %dth number:",i);
        scanf("%d",&n[i]);
    }
    printf("\nyour entered numbers are:");
    for(i=0;i<10;i++){
            printf("%d",n[i]);

    }
    for(i=0;i<10;i++){
        check(n[i]);
    }
}
void check(int a){
        if(a%2==0){
            printf("\n%d is even",a);
        }
        else{
            printf("\n%d is odd",a);
        }

}
