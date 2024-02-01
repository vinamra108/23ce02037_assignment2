#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the 1st side :");
    scanf("%d",&a);
    printf("Enter the 2nd side :");
    scanf("%d",&b);   
    printf("Enter the 3rd side :");
    scanf("%d",&c);
    if (a<b+c && b<a+c && c<a+b)
    {
      printf("Given sides form a triangle");
    }
    else{
        printf("Given sides don't form a triangle");
    }
    
}