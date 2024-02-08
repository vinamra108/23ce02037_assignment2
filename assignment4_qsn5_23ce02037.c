#include <stdio.h>

int main(){
    int a,b,c,d,e,t;
    printf("Enter a three digit number :");
    scanf("%d",&a);
     
    b=a/100;
    c=(a%100)/10;
    d=(a%10);
    e=b*b*b+c*c*c+d*d*d;

    if(a==e)
    {
    t=1;
    }

    else
    {
    t=0;
    }

    switch (t)
    {
    case 1:
        printf("Yes, given number is Armsrtong");
        break;
    case 0:
        printf("No, given number is not Armsrtong");
        break;
    
    default:
        break;
    }
    
    
    
}