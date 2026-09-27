/* Displaying a Two-Dimensional Array
Write a C program to input the number of rows and columns of a two-dimensional array. Enter its elements and display them in matrix form. */

#include <stdio.h>

int main()
{
    int arr[10][10];
    int rows, cols;
    int i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix is:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}

