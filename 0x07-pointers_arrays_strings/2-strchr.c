#include <stdio.h>
#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: represents a given string
 * @c: character to be located
 * Return: returns a pointer to the first occurence of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return NULL;
}
