#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: The array to sort
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min_idx;
    int temp;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        // Find the index of the minimum element in the unsorted portion
        min_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_idx])
                min_idx = j;
        }

        // If min_idx is not the position of the current element, swap
        if (min_idx != i)
        {
            temp = array[i];
            array[i] = array[min_idx];
            array[min_idx] = temp;

            // Print the array after the swap
            print_array(array, size);
        }
    }
}

