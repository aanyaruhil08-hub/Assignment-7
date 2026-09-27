/* Diagonal and Triangular Matrix
Write a C program to input a square matrix and calculate the sums of its main and secondary diagonal elements. Also determine whether the given matrix is upper triangular, lower triangular, diagonal, or none of these. */

#include <stdio.h>

int main()
{
    int arr[10][10];
    int n, i, j;
    int mainSum = 0, secondarySum = 0;
    int upper = 1, lower = 1, diagonal = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    /* Sum of diagonals */
    for (i = 0; i < n; i++)
    {
        mainSum += arr[i][i];
        secondarySum += arr[i][n - 1 - i];
    }

    printf("Main Diagonal Sum = %d\n", mainSum);
    printf("Secondary Diagonal Sum = %d\n", secondarySum);

    /* Check matrix type */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i < j && arr[i][j] != 0)
            {
                lower = 0;
            }

            if (i > j && arr[i][j] != 0)
            {
                upper = 0;
            }

            if (i != j && arr[i][j] != 0)
            {
                diagonal = 0;
            }
        }
    }

    if (diagonal)
    {
        printf("The matrix is a Diagonal Matrix.\n");
    }
    else if (upper)
    {
        printf("The matrix is an Upper Triangular Matrix.\n");
    }
    else if (lower)
    {
        printf("The matrix is a Lower Triangular Matrix.\n");
    }
    else
    {
        printf("The matrix is neither Upper Triangular, Lower Triangular, nor Diagonal.\n");
    }

    return 0;
}
