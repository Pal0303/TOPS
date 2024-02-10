#include<stdio.h>
float interest(float p,float r,float n);
int main(){
    float x,y,z;
    printf("enter principal amount:");
    scanf("%f",&x);
    printf("enter rate amount:");
    scanf("%f",&y);
    printf("enter duration:");
    scanf("%f",&z);
    printf("simple interest:%f",interest(x,y,z));
}
float interest(float p,float r,float n){
    return (p*r*n)/100;
}
