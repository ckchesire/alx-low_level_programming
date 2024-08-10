#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: integer input
 * @index: bit index to set value to 0
 * Return: 1 on 'success' 0 on 'failure'
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);
	*n = (~(mask << index) & *n);
	return (1);
}
