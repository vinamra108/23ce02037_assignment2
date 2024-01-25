#include<stdio.h>
int main() {
    int x;
    printf("Enter any integer between 100 and 200: ");
    scanf("%d",&x);
    (x>100 & x<200)? ((x%2)==0? printf("True"):printf("False")):printf("False");
    return 0;
}