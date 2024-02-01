#include <stdio.h>

int main(){
    int a,b,c,d,e,f;
    printf("Enter the first set of point :");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\nEnter the second set of point :");
    scanf("%d",&c);
    scanf("%d",&d);
    printf("\nEnter the third set of point :");
    scanf("%d",&e);
    scanf("%d",&f);
    if (((d-b)/(c-a))==((f-d)/(e-c)))
    {
        printf("Given set of points lie on the same line");
    }
    else{
        printf("Given points does not lie on the same line");
    }


}