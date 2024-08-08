#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: pointer to the first element
 * Return: returns the sum of n elements in linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int total = 0;

	node = head;

	while (node != NULL)
	{
		total += node->n;
		node = node->next;
	}
	return (total);
}
