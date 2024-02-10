//WAP to accept 5 students name and store it in array
#include<stdio.h>
int main(){
    char name[10];
    int i,a[5];
    printf("enter student names:");
    for(i=0;i<5;i++){
        gets(name);
        a[i]=name;
    }
    printf("\nentered names are:");
    for(i=0;i<5;i++){
            printf("\n%s",a[i]);
   }
}
