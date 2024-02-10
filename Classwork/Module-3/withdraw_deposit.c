#include <stdio.h>
int main(){
    int acc;
    float balance,value;
    char choice;
    printf("enter account number:");
    scanf("%d",&acc);
    printf("enter current value of account:");
    scanf("%f",&balance);
    printf("enter value you want to withdraw/deposit:");
    scanf("%f",&value);
    printf("enter what you want withdraw or deposit:");
    scanf(" %c",&choice);

    if(choice=='w'){
             if(balance<value){
                printf("\nnot sufficient");
             }
             else{
                    balance=balance-value;
                    printf("after withdraw balance:%f",balance);
    }
    }
    else{
        balance=balance+value;
        printf("after deposit balance:%f",balance);
    }


}
