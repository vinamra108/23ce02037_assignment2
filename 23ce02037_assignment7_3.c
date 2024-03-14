#include<stdio.h>

void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
 
int main()
{
   char str[100];
   printf("\n Enter the string:");
   fgets(str,100,stdin);
   reverse(str);
   return 0;
}
