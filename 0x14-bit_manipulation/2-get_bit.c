#include "main.h"
/**
 * get_bit-function that returns the value of a bit at a given index
 * @n: positive integer value input
 * @index: index of bit
 * Return: the value of bit at index or -1 if failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
