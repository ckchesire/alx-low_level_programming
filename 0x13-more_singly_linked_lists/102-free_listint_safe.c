#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a linked list safely (handles loops)
 * @h: Pointer to the pointer of the first node in the linked list
 *
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *temp;
	long int diff;

	if (!h || !*h)
		return (0);

	current = *h;
	while (current)
	{
		diff = current - current->next;
		len++;

		if (diff > 0)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
		else
		{
			free(current);
			*h = NULL;
			break;
		}
	}

	*h = NULL;
	return (len);
}
