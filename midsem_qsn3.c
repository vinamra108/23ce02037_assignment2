#include <stdio.h>
int main() {

    float x=0,y=0,r=2,x1,y1,a;
    printf("Enter the abscissa of a point:");
    scanf("%f",&x1);
    printf("Enter the ordinate of the point:");
    scanf("%f",&y1);

    a=x1*x1+y1*y1-r*r;
    
    if (a>0)
    {printf("The point is outside the circle");
    }
    else 
    {if(a==0)
    {printf("The point is on the circle");
    }
    else
    {printf("The point is inside the circle");
    }
    }
    return 0;
}