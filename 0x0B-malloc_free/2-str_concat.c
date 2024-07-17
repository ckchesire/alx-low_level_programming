#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: return pointer to concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int j, cnt, len1, len2;
	char *s;

	j = 0, cnt = 0, len1 = 0, len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while(cnt < (len1 + len2))
	{
		if (cnt	<= len1)
			s[cnt] = s1[cnt];
		if (cnt >= len1)
		{
			s[cnt] = s2[j];
			j++;
		}
		cnt++;
	}
	s[cnt] = '\0';
	return (s);
}
