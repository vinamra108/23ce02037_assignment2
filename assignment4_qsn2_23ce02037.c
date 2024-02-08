#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three numbers:");
    scanf("%d%d%d",&x,&y,&z);
    switch((x-y)>0)
    {
        case 1:
        switch((x-z)>0)
        {
            case 1:
            printf("%d is the largest integer among the entered values",x);
            break;
            case 0:
            printf("%d is the largest integer",z);
            break;
         }  
         break;  
        case 0:
        switch((y-z)>0)
        {
            case 1:
            printf("%d is the largest integer among the entered values",y);
            break;
            case 0:
            printf("%d is the largest integer among the entered values",z);
            break;
        }   
    }
    return 0;
}