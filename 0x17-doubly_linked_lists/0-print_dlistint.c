#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function to print all elements of dlistint_t list
 * @h: pointer to first element
 * Return: count of number of elements printed, '0' if no elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
