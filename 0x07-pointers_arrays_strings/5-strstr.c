#include "main.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring
 * @haystack: main string
 * @needle: substring to be searched
 * Return: pointer to the beginning of the located subsring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *ptA = haystack;
		char *ptB = needle;

		while (*ptA == *ptB && *ptB != '\0')
		{
			ptA++;
			ptB++;
		}
		if (*ptB == '\0')
			return (haystack);
	}
	return (NULL);
}
