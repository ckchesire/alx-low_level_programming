#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: takes in string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int i;
	char str[];

	len = 0;
	i = 0;
	while (*s != 0)
	{
		s++;
		len++;
	}
	while (len >= 0)
	{
		i++;
		str[i] = *s;
		s--;
		len--;
	}
	return str;
}
