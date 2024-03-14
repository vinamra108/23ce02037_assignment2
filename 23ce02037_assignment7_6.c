#include <stdio.h>
#include <string.h>

int checkSubstring(char arr1[], char arr2[], int n, int m){
    for(int i = 0; i < m; i++){
        int check = 0;
        for(int j = 0; j < n; j++){
            if(arr1[j] == arr2[i])
                check = 1;
        }
        if(!check)
            return 0;
    }
    return 1;
}

int main(){
    int n;

    char arr1[100];
    printf("Enter the elements of the string 1:-\n");
    fgets(arr1,100,stdin);

    n=strlen(arr1);
    n--;


    int m;

    char arr2[100];
    printf("Enter the elements of the string 2:-\n");
    fgets(arr2,100,stdin);

    m=strlen(arr2);
    m--;

    int isSubset;
    if(n > m){
        if(checkSubstring(arr1, arr2, n, m)){
            printf("arr2[] is a substring of arr1[]\n");
            return 0;
        }
        else
        printf("\n arr2[] is not a substring of arr1[]");
    }
    else{
        printf("\n Wrong input");
        }
    return 0;

}
