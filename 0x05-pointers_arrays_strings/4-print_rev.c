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
	while (len >= 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
