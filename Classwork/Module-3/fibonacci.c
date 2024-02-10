#include<stdio.h>
int main(){
    int n1=0,n2=1,nth,term,i=0;
    printf("enter term:");
    scanf("%d",&term);
    if(term<=0){
        printf("enter valid term");
    }
    else if(term==1){
        printf("%d",n1);
    }
    else{
         while(i<=term){
               printf("%d",n1);
               nth=n1+n2;
               n1=n2;
               n2=nth;
               i++;
         }

    }
}
