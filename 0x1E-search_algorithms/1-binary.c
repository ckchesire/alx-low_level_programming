#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_search - Performs search in an sorted array of integers
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in an array
 * @value: The value to search for
 *
 * Return: The index of the value being searched
 */
 
 int binary_search(int *array, size_t size, int value)
 {
    size_t low = 0, middle, i;
    size_t high = size - 1;
    int middle_value;

    while (low <= high) {
        middle = low + (high - low) / 2;
        middle_value = array[middle];

        printf("Searching in array: ");
        for (i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i < high) {
                printf(", ");
            }
        }
        printf("\n");

        if (middle_value < value)
            low = middle + 1;
        else if (middle_value > value)
            high = middle - 1;
        else
            return (middle);
    }
    return (-1);
 }