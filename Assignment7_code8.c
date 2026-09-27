/* Merging Two Arrays
Write a C program to input two arrays, merge their elements into a third array, and display the resulting merged array. */

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int n1, n2, i, j;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements:\n", n1);

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements:\n", n2);

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    /* Copy first array into third array */
    for (i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }

    /* Copy second array into third array */
    for (i = 0; i < n2; i++)
    {
        arr3[n1 + i] = arr2[i];
    }

    printf("Merged Array:\n");

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", arr3[i]);
    }

    printf("\n");

    return 0;
}
