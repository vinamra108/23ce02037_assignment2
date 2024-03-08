#include <stdio.h>

void transpose(int rows, int cols, int matrix[rows][cols], int transposed[cols][rows])
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transposed[j][i] = matrix[i][j];
}

void printMatrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main()
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int transposed[cols][rows];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Original matrix:\n");
    printMatrix(rows, cols, matrix);

    transpose(rows, cols, matrix, transposed);

    printf("Transposed matrix:\n");
    printMatrix(cols, rows, transposed);

    return 0;
}