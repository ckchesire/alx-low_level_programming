#include "main.h"
/**
 * print_line - function draws a straight line
 * @n: Integer to indicate line length
 * Return: return 0 (success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
