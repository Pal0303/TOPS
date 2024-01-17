//WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
int main(){
    float h;
    printf("enter height in cm:");
    scanf("%f",&h);
    if(h<150 && h>0){
        printf("short");
    }
    else if(h<170 && h>150){
        printf("average");
    }
    else if(h>170 && h<300){
        printf("tall");
    }
    else{
        printf("enter valid height");
    }
}

