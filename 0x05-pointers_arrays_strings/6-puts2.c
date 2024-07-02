#include "main.h"
/**
 * puts2 - function prints every other character of a string, starting with first character
 * @str: takes string charaters as input
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
