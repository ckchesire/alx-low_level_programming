#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint_t - function that frees a double linked list
 * @head: pointer to the start of a linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (t)
	{
		t = head->next;
		free(head);
		head = t;
	}

}
