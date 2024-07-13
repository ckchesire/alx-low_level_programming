#include <stdio.h>
#include <stdlib.h>
/**
 * main -  print name of program
 * @argc: number of things entered in cmd line
 * @argv: array of what was entered
 * Return: '0' success
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
	return (0);
}
