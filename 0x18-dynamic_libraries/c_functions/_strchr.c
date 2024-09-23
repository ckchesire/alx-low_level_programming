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
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return (NULL);
}
