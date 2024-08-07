#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of linked list
 * @head: double pointer to the node
 * @n: integer value
 * Return: returns the address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node;

	temp = *head;
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
