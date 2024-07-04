#include "main.h"
/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @s: takes input string
 * Return: returns string in uppercase
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}
