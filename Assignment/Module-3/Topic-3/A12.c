//Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
#include<math.h>
int main(){
    int n,d=0,r,sum=0,power,nd;
    printf("enter a number:");
    scanf("%d",&n);
    nd=n;
            while(nd!=0){
               r=nd%10;
               d++;
               nd=nd/10;

            }

            for(int i=1;i<=d;i++){
               r=n%10;
               power=pow(r,d);
               sum=sum+power;
               n=n/10;
            }

    //printf("%d",d);
      printf("\nsum:%d",sum);


}
