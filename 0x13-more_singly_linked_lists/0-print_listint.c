#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all elements and returns length
 * @h: pointer for the node
 * Return: returns length of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
