/* Transpose and Symmetry of a Matrix
Write a C program to input a square matrix and find its transpose. Compare the original matrix with its transpose and determine whether the matrix is symmetric, skew-symmetric, or neither. Display the transpose and the result. */

#include <stdio.h>

int main()
{
    int A[10][10], T[10][10];
    int n;
    int i, j;
    int symmetric = 1;
    int skew = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    /* Find transpose */

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            T[i][j] = A[j][i];
        }
    }

    printf("\nTranspose Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    /* Check symmetry */

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] != T[i][j])
            {
                symmetric = 0;
            }

            if (A[i][j] != -T[i][j])
            {
                skew = 0;
            }
        }
    }

    if (symmetric)
    {
        printf("\nThe matrix is Symmetric.\n");
    }
    else if (skew)
    {
        printf("\nThe matrix is Skew-Symmetric.\n");
    }
    else
    {
        printf("\nThe matrix is Neither Symmetric nor Skew-Symmetric.\n");
    }

    return 0;
}
