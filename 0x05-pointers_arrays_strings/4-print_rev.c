#include "main.h"

/**
 * print_rev - function that prints string in reverse
 * @s: takes string charachter input
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	for (len -= 1; len >= 0; len--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
