#include<stdio.h>
int main(){
    char name1[5],name2[5];
    int length=0,i;
    printf("enter second name:");
    gets(name2);
    printf("second name is:");
    puts(name2);

    //printf("\nenter first name:");
    //scanf("%s",name1);
    //printf("first name is:%s",name1);

    for(i=0;name2[i]!='\0';i++){
        length++;
    }
    printf("\nlength is:%d\n",length);

    printf("reverse is:");
    for(i=length;i>=0;i--){
        printf("%c",name2[i]);
    }
}
