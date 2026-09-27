/* Insert an Element at a Position
Write a C program to input n elements into an array. Input a new element and the position where it should be inserted. Insert the element at the given position by shifting the existing elements to the right. Display the updated array. If the entered position is invalid, display an appropriate message. */

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, element, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1)
    {
        printf("Invalid position.\n");
    }
    else
    {
        for (i = n; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[position - 1] = element;
        n++;

        printf("Updated array:\n");

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }

    return 0;
}
