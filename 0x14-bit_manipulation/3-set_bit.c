#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the positive integer
 * @index: positive index of bit to manipulate
 * Return: returns 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	*n = ((mask << index) | *n);
	return (1);
}
