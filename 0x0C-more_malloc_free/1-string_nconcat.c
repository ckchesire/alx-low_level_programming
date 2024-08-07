#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of second string
 * Return: return pointer to newly allocated space or NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len = 0;
	unsigned int str2_len = 0;
	int elements = 0;
	char *ptr;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[len])
		len++;
	while (s2[str2_len])
		str2_len++;
	elements = (len + n + 1);
	ptr = malloc(sizeof(char) * elements);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = s1[i];
	if (n >= str2_len)
	{
		for (j = 0; s2[j] != '\0'; j++)
			ptr[i++] = s2[j];
		ptr[i++] = '\0';
		return (ptr);
	}
	for (j = 0; j < n; j++)
		ptr[i++] = s2[j];
	ptr[i++] = '\0';
	return (ptr);
}
