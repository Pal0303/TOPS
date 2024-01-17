//Accept marks from user and check pass or fail
#include<stdio.h>
int main(){
    float marks;
    printf("enter marks:");
    scanf("%f",&marks);
    if(marks>35 && marks<100){
        printf("pass");
    }
    else if(marks<35 && marks>0){
        printf("fail");
    }
    else{
        printf("enter valid marks");
    }
}
