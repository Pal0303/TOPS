//Write a program in C to separate individual characters from a string.
#include<stdio.h>
#include<string.h>
int main(){
    char s[10];
    int i,len;
    printf("enter a string:");
    gets(s);
    len=strlen(s);
    printf("individual characters of string:");
    for(i=0;i<len;i++){
        printf("%c, ",s[i]);
    }
}
