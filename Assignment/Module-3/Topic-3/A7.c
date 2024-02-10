//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include <stdio.h>

int main() {
    int n,rn=0,rem;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(n!=0) {
        rem=n%10;
        rn=rn*10+rem;
        n=n/10;
    }

    printf("Reversed number: %d\n",rn);

}

