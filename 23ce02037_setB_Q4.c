#include<stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int num1, num2;
    int totalCombin = (num / 2) - 1;

    for(int i=4; i<=totalCombin; i++) {
        if(i % 2 != 0) {
            continue;
        }
        num2 = num - i;
        num1 = i;
        printf("%d  %d\n", num1, num2);
    }

    return 0;
}