//find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include <stdio.h>
int main(){
    float l,w,h,area;
    printf("enter length value:");
    scanf("%f",&l);
    printf("enter width value:");
    scanf("%f",&w);
    printf("enter height value:");
    scanf("%f",&h);
    area=2*(w*l+h*l+h*w);
    printf("Area:%f",area);
}
