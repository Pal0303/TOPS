//Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
#include<string.h>
int main(){
    char s[10];
    int i,len;
    printf("enter a string:");
    gets(s);
    len=strlen(s);
    printf("individual characters of string in reverse order:");
    for(i=len;i>=0;i--){
        printf("%c ",s[i]);
    }
}
