#include "search_algos.h"

/**
 * binary_search - A function that uses the binary search algorithm to
 *                 find the given value inside the given array.
 *
 * @array: The given array to traverse.
 * @size: The size of the array given.
 * @value: The value to look up in the array given.
 *
 * Return: The index of the value if found otherwise -1
*/
int binary_search(int *array, size_t size, int value)
{
    size_t i = 0, low = 0, high = size - 1, middle = 0;

    if (array == NULL)
        return (-1);

    while (low <= high)
    {
        middle = (low + high) / 2;
        i = low;

        printf("Searching in array: ");
        for (; i <= high; i++)
        {
            if (i != low)
                printf(", %d", array[i]);
            else
                printf("%d", array[i]);
        }
        printf("\n");

        if (array[middle] < value)
            low = middle + 1;
        else if (array[middle] > value)
            high = middle - 1;
        else
            return (middle);
    }

    return (-1);
}
