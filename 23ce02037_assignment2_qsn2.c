#include <stdio.h>

int main(){
    int a,b,c,max;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    max=a>b?a:b;
    max=max>c?max:c;
    printf("Max number is:%d",max);
}