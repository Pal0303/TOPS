#include <stdio.h>
int main(){
    int a;
    float b;
    char c;
    printf("enter integer:");
    scanf("%d",&a);
    printf("enter float:");
    scanf("%f",&b);
    printf("enter character:");
    scanf(" %c",&c);
    printf("integer:%d, \nfloat:%f, \ncharacter:%c",a,b,c);
}
