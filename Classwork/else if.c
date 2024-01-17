#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("enter a choice (1/2/3/4):");
    scanf("%d",&c);
    if(c==1){
        printf("%d",a+b);
    }
    else if(c==2){
        printf("%d",a-b);
    }
    else if(c==3){
        printf("%d",a*b);
    }
    else if(c==4){
        printf("%d",a/b);
    }
    else{
        printf("enter valid choice");
    }
}
