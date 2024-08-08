#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees listint_t list
 * @head: pointer to list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next; 
		free(temp);
	}
	*head = NULL;
}

