#include <stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Enter the age :");
    scanf("%d",&a);
    b= a<5;
    c= a>=5 && a<=12;
    d= a>13 && a<=59;
    e= a>=60;

     switch (b)
     {
     case 1:
        printf("Free Entry");
        break;
     }
     switch (c)
     {
     case 1:
        printf("Entry Charge : 20");
        break;
     }
    switch (d)
     {
     case 1:
        printf("Entry Charge : 50");
        break;
     }
    switch (e)
     {
     case 1:
        printf("Entry Charge : 40");
        break;
     }

}