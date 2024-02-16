#include <stdio.h>

int main() {
    
    float r,h,v,sa;
    printf("Enter radius of the cylinder:");
    scanf("%f",&r);
    printf("Enter height of the cylinder:");
    scanf("%f",&h);

    v=3.14*r*r*h;
    sa=2*3.14*r*h+2*2*3.14*h;

    printf("Volume of the cylinder is:%.2f",v);
    printf("\nSurface area of the cylinder is:%.2f",sa);

    }