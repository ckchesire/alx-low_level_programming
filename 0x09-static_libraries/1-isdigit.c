#include "main.h"

/**
 * _isdigit - Function checks for a digit(0 through 9)
 * @c: Has the value or character integer to be checked
 * Return: Returns 1 if c is digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
