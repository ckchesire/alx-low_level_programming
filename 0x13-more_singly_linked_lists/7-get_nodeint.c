#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the first element of the linked list
 * @index: index to return
 * Return: returns pointer to the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_idx = 0;
	listint_t *current_node = head;

	while (current_node != NULL && current_idx < index)
	{
		current_node =  current_node->next;
		current_idx++;
	}
	return (current_node);
}
