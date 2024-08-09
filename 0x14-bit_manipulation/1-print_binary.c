#include "main.h"

/**
 * print_binary - function that prints the binary representation of n
 * @n: positive integer
 * Return: returns nothing
 */
void print_binary(unsigned long int n)
{
	int pos;
	unsigned long int mask;
	
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	pos = sizeof(unsigned long int) * 8 - 1;
	mask = 1;

	while (!(n & (mask << pos)) && pos > 0)
	{
		pos--;
	}
	
	for(; pos>= 0; pos--)
	{
		_putchar((n & (mask << pos)) ? '1' : '0');
	}
}
