#include <stdio.h>
/*
 * Entry point - main
 * @parameter void
 * return '0'
 */
char c;
int  i;
long l;
long long ll;
float f;

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long: %lu bytes(s)\n", (unsigned long)sizeof(l));
	printf("Size of long long: %lu bytes(s)\n", (unsigned long)sizeof(ll));
	printf("Size of  a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
