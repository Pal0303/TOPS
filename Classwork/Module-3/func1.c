#include<stdio.h>
void interest(float pr,float rr,float nn);
void table(int n);
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    table(x);
    float p,r,n,si;
    printf("\nenter principal amount:");
    scanf("%f",&p);
    printf("enter rate:");
    scanf("%f",&r);
    printf("enter duration:");
    scanf("%f",&n);
    interest(p,r,n);
}
void interest(float pr,float rr,float nn){
    float si;
    si=(pr*rr*nn)/100;
    printf("\nsimple interest:%f",si);
}
void table(int n){
    for(int i=1;i<11;i++){
        printf("\n%d*%d=%d",n,i,n*i);
    }
}
