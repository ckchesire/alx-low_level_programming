#include "main.h"
/**
 * _islower - Checks whether character is lowercase.
 * @c: parameter 'c' takes characters to be checked
 * Return: int returns 1 for lowercase and 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
