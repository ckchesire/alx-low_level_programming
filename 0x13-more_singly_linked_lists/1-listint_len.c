#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Function that returns the number of elements in linked list
 * @h: represents a node in a linked list
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
