#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts node in linked list at a given position
 * @head: double pointer to the first node in the list
 * @idx: index where the new node is to be inserted
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *new_node;
	listint_t *current_node = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (index = 0; current_node != NULL && index < idx - 1; index++)
	{
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (NULL);

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}

