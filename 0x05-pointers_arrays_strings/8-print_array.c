#include "main.h"
#include <stdio.h>
/**
 * print_array - function prints n elements of an array of integers
 * @a: Takes array integer of inputs
 * @n: The number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
