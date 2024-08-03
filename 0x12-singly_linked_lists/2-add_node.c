#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function adds a new node at the beginning of list_t list
 * @head: double pointer to head of list
 * @str: string to be added
 * Return: returns address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int str_len = 0;

	while (str[str_len] != '\0')
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
	new->next = *head;
	*head = new;

	return (new);
}
