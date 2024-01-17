//C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main(){
    char c;
    int n;
    printf("enter character:");
    scanf(" %c",&c);
    n=(int)c;
    if(n<91 && n>64){
        printf("uppercase");
    }
    else if(n<123 && n>96){
        printf("lowercase");
    }
    else if(n<58 && n>47){
        printf("digit");
    }
    else{
        printf("special character");
    }
}
