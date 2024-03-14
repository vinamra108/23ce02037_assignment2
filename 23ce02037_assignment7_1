#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i=0;
    printf("\n Enter a string:");
    fgets(str, 100,stdin);
    int l;
    l=strlen(str);
    l--;
    char c;
    printf("\n Which letter you want to search:");
    scanf("%c",&c);
    int rep=0;
    for(i=0;i<l;i++)
    {
        if(str[i]==c)
        rep++;
    }
    printf("\n The freq of the character is:%d",rep);
    return 0;
}
