#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees list_t list
 * @head: pointer to list
 * Return: nothing
 */
void free_list(list_t *head)
{
	free(head);
}
