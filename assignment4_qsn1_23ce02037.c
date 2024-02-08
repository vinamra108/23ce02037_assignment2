#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    switch (x%2)
    {
    case 1:
        
        printf("%d is an odd number",x);
        break;
    case 0:
   
    printf("%d is an even number",x);
    break;
    }
    return 0;
}