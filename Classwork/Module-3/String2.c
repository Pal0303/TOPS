#include<stdio.h>
#include<string.h>
int main(){
    char s1[10],s2[10];
    int len,a;
    printf("enter string:");
    gets(s1);

    //strcpy(s2,s1);
    //puts(s2);

    //len=strlen(s1);
    //printf("\n%d",len);

    gets(s2);
    /*a=strcmp(s1,s2);
    printf("a=%d",a);
    if(a==0){
        printf("\nsame");
    }
    else{
        printf("\nnot same");
    }*/
    strcat(s1,s2);
    puts(s1);
}
