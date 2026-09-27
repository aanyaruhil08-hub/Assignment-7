/* Array Traversal, Sum, and Average
Write a C program to input n elements into a one-dimensional array. Display all the elements of the array and calculate and display their sum and average. */

#include<stdio.h>
int main()
{
    int arr[100];
    int n, i, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    printf("Array elements are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

