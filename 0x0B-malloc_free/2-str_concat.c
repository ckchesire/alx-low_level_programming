#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: return pointer to concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *s;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
	{
		s1[1] = '\0';
	}
	if (s2 == NULL)
	{
		s2[1] = '\0';
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1 ; i++)
	{
		s[i] =  s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		s[i++] = s2[j];
	}
	s[i + 1] = '\0';
	return (s);
}
