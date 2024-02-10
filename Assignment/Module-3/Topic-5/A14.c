//Write a program in C to combine two strings manually
#include<stdio.h>
#include<string.h>
int main(){
    char s1[10],s2[10],s3[10];
    int i,len1,len2;
    printf("enter first string:");
    gets(s1);
    printf("\nenter second string:");
    gets(s2);
    len1=strlen(s1);
    for(i=0;i<len1;i++){
        s3[i]=s1[i];
    }
    len2=strlen(s2);

    for(int j=0;j<len2;j++){
            s3[i]=s2[j];
            i++;
    }
    s3[i]='\0';

    printf("\nstring is:");
    puts(s3);
}

