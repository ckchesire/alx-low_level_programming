#include "main.h"
/**
 * flip_bits - function to count bit differences between two numbers
 * @n: first integer value
 * @m: second integer value
 * Return: returns number of bits required to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = excl >> i;
		if (curr & 1)
			counter++;
	}
	return (counter);
}
