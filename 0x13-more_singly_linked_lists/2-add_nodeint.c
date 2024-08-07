#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of linked list
 * @head: double pointer to node
 * @n: integer value be added
 * Return: returns the address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nd;

	new_nd = (listint_t *)malloc(sizeof(listint_t));
	if (new_nd == NULL)
	{
		return (NULL);
	}

	new_nd->n = n;

	if (*head == NULL)
	{
		new_nd->next = NULL;
	}
	else
	{
		new_nd->next = *head;
	}
	*head = new_nd;
	return (*head);
}
