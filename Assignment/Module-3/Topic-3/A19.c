#include<stdio.h>
int main(){
    //pattern-1
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(j%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    printf("\n");

    //pattern-2
    int n=1;
    for(int k=1;k<=5;k++){
        for(int m=1;m<=k;m++){
            printf(" %d",n);
            n++;
        }
        printf("\n");
    }
    printf("\n");

    //pattern-3
    int x=65;
    for(int k=1;k<=5;k++){
        for(int m=1;m<=k;m++){
            printf(" %c",x);
            x++;
        }
        printf("\n");
    }
    printf("\n");

    //pattern-4
    for(int k=1;k<=5;k++){
        for(int m=1;m<=k;m++){
            printf(" %c",m+64);
    }
    printf("\n");
    }
    printf("\n");

    //pattern-5
    for(int k=5;k>=1;k--){
        for(int m=1;m<k;m++){
            printf(" ");
        }
        for(int n=k;n<=9;n++){
                if(n+k==11){
                    break;
                }
                else{
                    printf("*");
                }
        }
        printf("\n");
    }
    printf("\n");

    //pattern-6
    for(int i=1;i<=6;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }  printf("\n");
    }
    for(int m=5;m>=1;m--){
        for(int k=1;k<=m;k++){
            printf("*");
        }printf("\n");
    }
    printf("\n");


}
