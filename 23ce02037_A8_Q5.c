#include<stdio.h>
void rotation(int n,int arr[n][n],int a) {
    for(int m=0;m<a;m++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int temp= *(*(arr+i)+j);
                *(*(arr+i)+j)=*(*(arr+j)+i);
                *(*(arr+j)+i)=temp;
            }
        }
    }

    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp=*(*(arr+i)+j);
            *(*(arr+i)+j)=*(*(arr+n-i-1)+j);
            *(*(arr+n-i-1)+j)=temp;
        }
    }
}

int main() {
    int n;
    printf("Enter size of matrix:");
    scanf("%d",&n);
    
    int mat[n][n];

    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Element [%d][%d]=",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }

    int a;
    printf("Enter number of rotations:");
    scanf("%d",&a);

    rotation(n,mat,a);

    printf("Matrix after rotation is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",*(*(mat+i)+j));
        }
        printf("\n");
    }
    return 0;
}