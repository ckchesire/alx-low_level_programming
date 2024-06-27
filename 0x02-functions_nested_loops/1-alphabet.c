#include "main.h"
/**
 * Description : Function that prints alphabet in lower case
 * Return : Always '0' (success)
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

