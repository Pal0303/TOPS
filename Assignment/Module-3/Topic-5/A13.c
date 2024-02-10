//Write a program in C to remove characters from a string except alphabets.
#include<stdio.h>
#include<string.h>
int main(){
    char s[10];
    int i,j,len;
    printf("enter a string:");
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++){
        while (!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z') && !(s[i]=='\0')) {
         for (j=i;j<len;j++) {
            s[j]=s[j+1];
         }
         i--;
         len--;
         s[len]='\0';
      }
    }
    for(i=0;i<len;i++){
        printf("%c",s[i]);
    }
}
