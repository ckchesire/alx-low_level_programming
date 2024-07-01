#include "main.h"
#include <string.h>
/**
 * _strlen - function returns the length of a string
 * @s: takes string charaters.
 * Return: returns '0' (success)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		s++;
		length++;
	}
	return (length);
}
