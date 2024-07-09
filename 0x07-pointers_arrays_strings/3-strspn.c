#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: strings to match
 * Returns: number of bytes in initial segement matched to accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, count, match;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				count ++;
				match = 1;
			}
		}
		if (match == 0)
			return (count);
	}
	return(count);
}
