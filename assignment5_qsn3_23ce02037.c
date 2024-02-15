#include <stdio.h>
void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num, count = 0;

    printf("Enter a 4 digit number:");
    scanf("%d", &num);

    int digit[4];
    while (num > 0)
    {
        digit[(3 - count)] = num % 10;
        num /= 10;
        count++;

    }
    int numofpermutation = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 6; k++)
        {

            if ((k % 2) == 0)
            {
               
                swap(&digit[1], &digit[2]);
                printf("%d: %d%d%d%d\n", numofpermutation, digit[(0 + i) % 4], digit[(1 + i) % 4], digit[(2 + i) % 4], digit[(3 + i) % 4]);
                numofpermutation++;
                
            }
            else if ((k % 2) != 0)
            {
                
                swap(&digit[2], &digit[3]);
                printf("%d: %d%d%d%d\n", numofpermutation, digit[(0 + i) % 4], digit[(1 + i) % 4], digit[(2 + i) % 4], digit[(3 + i) % 4]);
                numofpermutation++;
                
            }
        }
    }
    return 0;
}