#include<stdio.h>
int main() {
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    if(x>0) {
        printf("%d is a positive integer",x);
    }
    if(x<0) {
        printf("%d is a negative integer",x);
    }
    if(x==0) {
        printf("It is zero");
    }
    return 0;
}