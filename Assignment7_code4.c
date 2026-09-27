/* Delete an Element from an Array
Write a C program to input n elements into an array. Input the position of the element to be deleted. Delete the element from the specified position by shifting the remaining elements to the left. Display the updated array. If the entered position is invalid, display an appropriate message. */


#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n)
    {
        printf("Invalid position.\n");
    }
    else
    {
        for (i = position - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Updated array:\n");

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }

    return 0;
}