#include "main.h"

/**
 *  _abs -  Calculate the absolute value of an integer
 *  @c: Takes the number to be computed.
 *  Return: Absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_num;

		abs_num = c * -1;
		return (abs_num);
	}
	return (c);
}
