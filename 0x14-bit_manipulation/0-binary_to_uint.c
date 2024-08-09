#include <stdio.h>
/**
 * binary_to_uint - function that converts binary to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: the converted no, or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
	}
	return (result);
}
