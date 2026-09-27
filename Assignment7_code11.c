/* Multiplication of Two Matrices
Write a C program to input two matrices. Check whether they can be multiplied. If multiplication is possible, calculate and display the product matrix; otherwise, display an appropriate message. */

#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
    }
    else
    {
        printf("Enter elements of first matrix:\n");

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        printf("Enter elements of second matrix:\n");

        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }

        /* Initialize product matrix to zero */
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                C[i][j] = 0;
            }
        }

        /* Matrix multiplication */
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k < c1; k++)
                {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
            }
        }

        printf("Product Matrix:\n");

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", C[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}



