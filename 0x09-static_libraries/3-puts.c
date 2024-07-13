#include "main.h"
/**
 * _puts - function that prints a string, followed by new line
 * @str: takes the string character arguments
 * Return: void
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

