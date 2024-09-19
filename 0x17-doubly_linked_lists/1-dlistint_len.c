#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function to check the length of double linked list
 * @h: pointer to the first linked list node
 * Return: number of elements in the double linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (current == NULL)
		return (0);
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
