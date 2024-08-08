#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to the pointer of the first node in the list
 *
 * Return: Pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
