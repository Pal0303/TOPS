//WAP to find reverse of string using recursion
#include<stdio.h>
#include<string.h>
char rev(char str[],int length);
int main(){
    char s[10];
    int len;
    printf("enter a string:");
    gets(s);
    len=strlen(s);
    rev(s,len);
}

char rev(char str[],int length){
    if(length>=0){
        printf("%c",str[length]);
        length--;
        rev(str,length);
    }
    else{
        return;
    }
}
