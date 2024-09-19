#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given index
 * @h: pointer to a pointer of first double linked list node
 * @idx: index at which to insert the pointer
 * @n: integer for node
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *t = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (t != NULL && i < idx - 1)
	{
		t = t->next;
		i++;
	}

	if (t == NULL || (t->next == NULL && i + 1 != idx))
	{
		free(new);
		return (NULL);
	}
	new->next = t->next;
	new->prev = t;

	if (t->next != NULL)
		t->next->prev = new;
	t->next = new;
	return (new);
}
