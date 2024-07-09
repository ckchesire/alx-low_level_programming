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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
