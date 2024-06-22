#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description :  Print alphabet in lower case remove e and q.
 * Return: Always '0' (success)
 */
int main(void)
{
	char a;

	a = 'a';
	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
