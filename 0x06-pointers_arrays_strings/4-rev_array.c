#include "main.h"
/**
 * reverse_array - function that reverses the content of an int array
 * @a: array of integers
 * @n: length of array
 */
void reverse_array(int *a, int n)
{
	int i, tmp, mid;

	mid =  n / 2;
	for (i = 0; i < mid ; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
