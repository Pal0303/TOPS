//1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n
#include<stdio.h>
int main(){
    int n;
    float sum=0,tsum;

    printf("enter term till you want sum:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        tsum=(float)i/(i+1);

        if(i%2==0){
            sum=sum-tsum;
        }
        else{
            sum=sum+tsum;
        }
    }
    printf("sum:%f",sum);
}
