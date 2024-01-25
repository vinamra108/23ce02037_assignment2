#include<stdio.h>
#include<math.h>
int main() {
    float mp,tp,tx,fp;
    printf("Enter base price, tip percent and tax percent: ");
    scanf("%f %f %f",&mp,&tp,&tx);
    fp=mp+(mp*tp/100)+(mp*tx/100);
    printf("Final meal price is %f",round(fp));
    return 0;
}