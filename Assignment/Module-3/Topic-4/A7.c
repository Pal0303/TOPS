//WAP Find out length of string without using inbuilt function
#include<stdio.h>
int main(){
    char s[10];
    int i,l=0;
    printf("enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        l++;
    }
    printf("length:%d",l);
}
