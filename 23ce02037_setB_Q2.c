#include <stdio.h>

int main(){
    int a,i=1,j=1,sum=0;
    printf("Enter the number :");
    scanf("%d",&a);
    int arr[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   
   while (a%i==0 && i<a)
    {
        arr[j-1]=i;
        sum=sum+arr[j-1];
        i=i+1;
        j=j+1;
        

    }
   if (sum==a)
   {
    printf("%d is a perfect number",a);
   }
   else {
    printf("%d is not a perfect number",a);
   }
   
    
    
   return 0;
}