#include<stdio.h>
#include<string.h>
int main() {
    int n,m;
    printf("Enter size of first and second stirng:");
    scanf("%d %d",&m,&n);

    char s1[m+1],s2[n+1];

    printf("Enter first string:");
    scanf("%s",s1);

    printf("Enter second string:");
    scanf("%s",s2);

    char s3[m+n+1];

    for(int i=0;i<n;i++)
        s3[i]=s1[i];
    for(int i=n;i<=m+n;i++)
        s3[i]=s2[i-n];
    
    printf("%s",s3);

    return 0;
}   