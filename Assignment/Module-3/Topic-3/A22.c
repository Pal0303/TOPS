//Accept 3 numbers from user using while loop and check each numbers palindrome
#include<stdio.h>
int main(){
    int a[3],i=0,j=0,n,r,k=0;
    printf("enter three numbers:");
    while(i<3){
        scanf("%d",&a[i]);
        i++;
    }

    while(j<3){
        n=a[j];
        int rn=0;
        while(n!=0){
            r=n%10;
            rn=rn*10+r;
            n=n/10;

    }
        n=a[j];
        //printf("\n%d",rn);
            if(rn==a[j]){
            printf("\n%d is palindrome",n);
            }
            else{
            printf("\n%d is not palindrome",n);
            }

        j++;
    }

}
