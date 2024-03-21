#include<stdio.h>
void circularshift(int*p,int*q,int*r) {
    int temp=*p;
    *p=*r;*r=*q;*q=temp;
    printf("x=%d y=%d and z=%d\n",*p,*q,*r);
}

int main() {
    int x,y,z,*p,*q,*r,ch;
    printf("Enter the value of x y and z:");
    scanf("%d %d %d",&x,&y,&z);
    p=&x;q=&y;r=&z;

    printf("x=%d y=%d and z=%d",*p,*q,*r);

    while(1)
    {
        printf("\nPress 1 to swap:");
        scanf("%d",&ch);

        if(ch==1);
            circularshift(p,q,r);
        if(ch!=1)
            break;    
    }

    return 0;
}