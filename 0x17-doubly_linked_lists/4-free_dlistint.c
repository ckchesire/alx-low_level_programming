#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - function that frees a double linked list
 * @head: pointer to the start of a linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}

}
