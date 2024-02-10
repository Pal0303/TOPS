/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/
#include<stdio.h>
int main(){
    int a[10],i,e=0,o=0,sume=0,sumo=0;
    for (i=0;i<10;i++){
        printf("\nenter a number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){

           if(a[i]%2==0){
              e++;
              sume += a[i];
           }

           else{
                  o++;
                  sumo += a[i];

           }
    }

    printf("total even numbers:%d",e);
    printf("\ntotal odd numbers:%d",o);
    printf("\nsum of even:%d",sume);
    printf("\nsum of odd:%d",sumo);
}
