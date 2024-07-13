#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: '0' success.
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
