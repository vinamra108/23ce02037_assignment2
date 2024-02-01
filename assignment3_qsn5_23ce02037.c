#include<stdio.h>
int main() {
    int x;
    printf("Enter number of days after deadline: ");
    scanf("%d",&x);
    if(x>0 && x<=5) {
        printf("The fine is 1 rupee");
    }
    if(x>5 && x<=10) {
        printf("The fine is 2 rupees");
    }
    if(x>10 && x<=30) {
        printf("The fine is 5 rupees");
    }
    if(x>30) {
        printf("Your membership is cancelled");
    }
    if (x==0)
    {
       printf("No Fine");
    }
    
    return 0;
}