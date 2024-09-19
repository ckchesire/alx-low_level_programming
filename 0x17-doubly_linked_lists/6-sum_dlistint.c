#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all data (n) of a dllist
 * @head: pointer to start of dllist
 * Return: sum of all the data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
