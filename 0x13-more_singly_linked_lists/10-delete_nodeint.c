#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the first node in the linked list
 * @index: index of the node to delete
 *
 * Return: 1 if the node was deleted successfully, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *node_to_delete = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (i < index - 1)
	{
		if (current_node == NULL || current_node->next == NULL)
			return (-1);
		current_node = current_node->next;
		i++;
	}

	node_to_delete = current_node->next;
	if (node_to_delete == NULL)
		return (-1);

	current_node->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}
