#include "main.h"
/**
 * print_alphabet - function to print alphabet
 * Description : Function that prints alphabet in lower case
 * Return : void
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

