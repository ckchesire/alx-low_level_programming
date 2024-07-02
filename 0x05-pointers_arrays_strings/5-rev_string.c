#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: takes in string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char str;

	while (s[index++])
	{
		len++;
	}
	for (index = len - 1; index >= len / 2; index--)
	{
		str = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = str;
	}
}
