#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function returns a pointer to newly allocated space in memory
 * containing a copy of the string given as a parameter
 * @str: string given
 * Return: returns pointer to a new string duplicate of str or NULL
 */
char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[i + 1] = '\0';
	return (s);
}
