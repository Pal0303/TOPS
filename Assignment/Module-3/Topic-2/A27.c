/*WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case*/
#include<stdio.h>
int main(){
    int n;
    char ch;
    printf("enter a character:");
    scanf(" %c",&ch);
    printf("enter a week number:");
    scanf("%d",&n);
    switch(n){
        case 1:
             printf("monday");
             break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("wednesday");
            break;
        case 4:
            printf("thrusday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
    }
    switch(ch){
        case 'a':
             printf("\nvowel");
             break;
        case 'e':
            printf("\nvowel");
            break;
        case 'i':
            printf("\nvowel");
            break;
        case 'o':
            printf("\nvowel");
            break;
        case 'u':
            printf("\nvowel");
            break;
        case 'A':
            printf("\nvowel");
            break;
        case 'E':
            printf("\nvowel");
            break;
        case 'I':
            printf("\nvowel");
            break;
        case 'O':
            printf("\nvowel");
            break;
        case 'U':
            printf("\nvowel");
            break;
        default:
            printf("\nnot vowel");
            break;
    }
}
