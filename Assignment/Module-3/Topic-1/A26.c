//Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main(){
    float c,f;
    printf("enter fahrenheit value:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("celsius:%.1f",c);
}
