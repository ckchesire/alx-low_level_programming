#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of list_t
 * @h: pointer to the head of list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
