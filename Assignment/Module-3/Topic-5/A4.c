//Write a program in C to count the total number of words in a string.
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i,len,w=1;
    printf("enter a string:");
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++){
        if(s[i]==' '){
            w++;
        }
    }
    printf("Total number of words:%d",w);
    return 0;
}
