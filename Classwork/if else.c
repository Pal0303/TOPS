#include <stdio.h>
int main(){
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("\nenter second number:");
    scanf("%d",&b);
    if(a>b){
        printf("\n%d is biggest",a);
    }
    else{
        printf("\n%d is biggest",b);
    }
}
