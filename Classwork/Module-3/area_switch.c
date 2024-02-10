#include<stdio.h>
int main(){
    int choice;
    float b,h,areat,l,areas,r,areac,w,len,arear;
    printf("enter your choice of area:");
    printf("\n1.triangle\n2.sqaure\n3.circle\n4.rectangle\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("enter base of triangle:");
            scanf("%f",&b);
            printf("enter height of triangle:");
            scanf("%f",&h);
            areat=0.5*b*h;
            printf("area:%f",areat);
            break;
        case 2:
            printf("enter length of sqaure:");
            scanf("%f",&l);
            areas=l*l;
            printf("area:%f",areas);
            break;
        case 3:
            printf("enter radius of circle:");
            scanf("%f",&r);
            areac=3.14*r*r;
            printf("area:%f",areac);
            break;
        case 4:
            printf("enter length of rectangle:");
            scanf("%f",&len);
            printf("enter width of rectangle:");
            scanf("%f",&w);
            arear=w*len;
            printf("area:%f",arear);
            break;
        default:
            printf("enter valid case");
            break;

    }

}
