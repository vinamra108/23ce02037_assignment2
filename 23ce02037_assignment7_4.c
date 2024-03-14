#include<stdio.h>
int max(int a, int b){
    if(a>b)
    return a;
    else 
    return b;
}
int largest(int arr[], int n)
{
    if(n==1)
    return arr[0];
    else
    return max(arr[n-1],largest(arr,n-1));
}

int main()
{
    int n;
    printf("\n how many numbers you want to enter:");
    scanf("%d",&n);
    int arr[2*n];
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=0;
    max=largest(arr,n);
    printf("\n%d",max);
    return 0;
}
