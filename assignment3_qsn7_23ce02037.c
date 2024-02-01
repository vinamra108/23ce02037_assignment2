#include<stdio.h>
int main() {
    float m,n,k,w,t;
    printf("Enter marks obtained: ");
    scanf("%f",&m);
    printf("Number of classes attended: ");
    scanf("%f",&n);
    printf("Total number of classes: ");
    scanf("%f",&k);

    w=n/k;
    t=m*w;

    if(t>=90) {
        printf("Final score = %.0f \n Grade is = EX",t);
    }
    else if(t>=80 && t<89) {
        printf("Final score = %.0f \n Grade is = A",t);
    }
    else if(t>=70 && t<79) {
        printf("Final score = %.0f \n Grade is = B",t);
    }
    else if(t>=60 && t<69) {
        printf("Final score = %.0f \n Grade is = C",t);
    }
    else if(t>=50 && t<59) {
        printf("Final score = %.0f \n Grade is = D",t);
    }
    else if(t>=40 && t<49) {
        printf("Final score = %.0f \n Grade is = P",t);
    }
    else if(t<40) {
        printf("Final score = %.0f \n Grade is = F",t);
    }
    return 0;

}