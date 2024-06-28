#include "main.h"

/**
 * _isupper - Checks is character is upper case
 * @c: Has the value to be checked
 * Return: Returns 1 if character is upper case and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
