//C Program to Reverse a Number Using FOR Loop
#include <stdio.h>

int main() {
    int n,rn=0,rem;

    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;n!=0;i++){
        rem=n%10;
        rn=rn*10+rem;
        n=n/10;
    }

    printf("Reversed number: %d\n",rn);
}
