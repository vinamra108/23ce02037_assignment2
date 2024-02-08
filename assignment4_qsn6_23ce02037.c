#include <stdio.h>

int main(){
    int a,b;
    char c;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the operation :");
    scanf(" %c",&c);
    printf("Enter the second number :");
    scanf("%d",&b);
    

    switch (c)
    {
    case '+':
        printf("Result :%d",a+b);
        break;
    case '-':
        printf("Result :%d",a-b);
        break;
    case '*':
        printf("Result :%d",a*b);
        break;
    case '/':
        printf("Result :%d",a/b);
        break;
    
    default:
        printf("Enter valid input");
        break;
    }

}