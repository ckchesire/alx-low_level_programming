#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a double linked list
 * @head: pointer to a pointer to the head of a doubly linked list
 * @n: integer to be added to the new node
 * Return: return the address of the new element or NUll if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *t;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;

		t->next = new;
		new->prev = t;
	}
	return (new);
}
