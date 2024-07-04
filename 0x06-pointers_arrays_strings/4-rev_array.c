#include "main.h"
/**
 * reverse_array - function that reverses the content of an int array
 * @a: array of integers
 * @n: length of array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	n = n - 1;
	for (i = 0; n > 0 ; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
