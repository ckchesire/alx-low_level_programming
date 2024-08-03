#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: double pointer to the head of list
 * @str: string to be inputted
 * Return: returns the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int str_len = 0;
	list_t *new;
	list_t *temp;

	while (str[str_len])
	{
		str_len++;
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = str_len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);
}
