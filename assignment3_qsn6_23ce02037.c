#include<stdio.h>
#include<math.h>
int main() {
    
    int n,temp,sq;
    printf("Enter any integer: ");
    scanf("%d",&n);

    temp=n;
    sq=n*n;
    int i=1,n1,n2;
    int check=0;
    n*=n;

    while(sq!=0) {

        int pwr=pow(10,i);
        n1=n/pwr;
        n2=n%pwr;

        if(n1+n2==temp) {
            printf("Yes");
            check=1;
            break;
        } 
        else {
            i+=1;
            sq=n1;
        }
    }
    if(check==0) {
        printf("No");
    }
    return 0;
}