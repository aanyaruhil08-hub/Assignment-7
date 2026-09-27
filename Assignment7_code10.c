/* Addition of Two Matrices
Write a C program to input two matrices of the same order. Calculate their sum and display the resulting matrix. If the matrices have different orders, display an appropriate message. */

#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;
    int i, j;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2)
    {
        printf("Matrix addition is not possible.\n");
    }
    else
    {
        printf("Enter the elements of the first matrix:\n");

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        printf("Enter the elements of the second matrix:\n");

        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        printf("Sum of the matrices:\n");

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d ", C[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}
