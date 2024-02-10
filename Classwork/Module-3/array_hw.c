#include<stdio.h>
int main(){
    int a[4],m[3],p[3],c[3],i,sum,per;
    for(i=0;i<=4;i++){
        printf("enter roll no:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++){
        printf("enter physics marks:");
        scanf("%d",&p[i]);
    }
    for(i=0;i<5;i++){
        printf("enter maths marks:");
        scanf("%d",&m[i]);
    }
    for(i=0;i<5;i++){
        printf("enter chemistry marks:");
        scanf("%d",&c[i]);
    }
    for(i=1;i<=5;i++){
        sum=p[i]+m[i]+c[i];
        per=(sum*100)/300;
        printf("\nsum of %dth student marks:%d",i,sum);
        printf("\nper of %dth student marks:%d",i,per);
    }

}
