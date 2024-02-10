#include <stdio.h>
int main(){
    float per;
    printf("enter percentage of student:");
    scanf("%f",&per);

    if(80<=per && per<=100){
        printf("distinction");
    }
    else if(70<=per && per<80){
        printf("first class");
    }
    else if(60<=per && per<70){
        printf("second class");
    }
    else if(35<=per && per<60){
        printf("pass");
    }
    else if(per<35){
        printf("fail");
    }
    else{
        printf("enter valid percentage");
    }
}
