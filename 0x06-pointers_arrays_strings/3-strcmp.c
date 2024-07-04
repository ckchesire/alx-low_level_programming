#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: returns int + , - or 0 depending on match check
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[0] - s2[0];
			return (diff);
		}
	}
	return (0);
}
