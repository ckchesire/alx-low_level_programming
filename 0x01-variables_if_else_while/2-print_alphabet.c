#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description :  Print alphabet in lower case.
 * Return: Always '0' (success)
 */
int main(void)
{
	char a;
	a = 'a';

	while ( a < 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
