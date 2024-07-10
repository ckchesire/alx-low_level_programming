#include "main.h"
/**
 * _puts_recursion - function that prints a string followed by new line.
 * @s: pointer to a null terminated string to be printed.
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		;
	}
	else
	{
		_putchar(*s);
		s++;
		if (*s != '\0')
		{
			_puts_recursion(s);
		}
		if (*s == '\0')
		{
			_putchar('\n');
		}
	}
}
