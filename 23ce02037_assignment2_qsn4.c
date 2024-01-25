#include<stdio.h>
int main() {
    int x;
    printf("Enter any year: ");
    scanf("%d",&x);
    if((x%100)==0) {
        (x%400)==0? printf("%d is a leap year",x):printf("%d is not a leap year",x);
    }
    else {
        (x%4)==0? printf("%d is a leap year",x):printf("%d is not a leap year",x);
    }
    return 0;
}