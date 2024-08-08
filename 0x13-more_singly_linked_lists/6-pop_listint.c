#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of listint_t linked list
 * @head: double pointer to first node or element of linked list
 * Return: returns the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	num = temp->n;

	*head = (*head)->next;
	free(temp);

	return (num);
}
