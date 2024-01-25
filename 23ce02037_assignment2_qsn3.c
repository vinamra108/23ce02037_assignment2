#include <stdio.h>

int main(){
    int a,Years,Months,Weeks,Days;
    printf("Enter the no. of days:");
    scanf("%d",&a);
    printf("Years =%d",a/365);
    printf("\nMonths =%d",a%365/30);
    printf("\nWeeks =%d",a%365%30/7);
    printf("\nDays =%d",a%365%30%7);
}