#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes a node at index
 * @head: pointer to a pointer of double linked list start node
 * @index: index to remove node
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dnode, *f_node, *t = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = t->next;
		if (t->next != NULL)
			t->next->prev = NULL;
		free(t);
		return (1);
	}
	while (t != NULL && i < index - 1)
	{
		t = t->next;
		i++;
	}
	if (t == NULL || (t->next == NULL && i + 1 < index))
		return (-1);
	if (t->next != NULL)
	{
		dnode = t->next;
	}
	if (dnode->next != NULL)
	{
		f_node = dnode->next;
		t->next = f_node;
		f_node->prev = t;
	}
	free(dnode);
	return (1);
}
