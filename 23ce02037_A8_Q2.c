#include<stdio.h>
int matrixm(int m1,int m2,int n1,int n2) {
    int arr1[100][100],arr2[100][100];
    printf("Enter elements of first matrix\n");
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter elements of second matrix\n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    //multiplication//
    int result[m1][n2];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
            result[i][j]=0;
    }
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            for(int k=0;k<m2;k++)
                result[i][j]+=arr1[i][k]*arr2[k][j];
        }
    }

    printf("Resultant matrix is\n");
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {    
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r1,c1,r2,c2;
    
    printf("Enter dimensions of the first matrix(rows columns):");
    scanf("%d %d",&r1,&c1);

    printf("Enter dimensions of the second matrix(rows columns):");
    scanf("%d %d",&r2,&c2);

    matrixm(r1,c1,r2,c2);   
}