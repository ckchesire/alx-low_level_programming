#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table to add or update {key, value} pair
 * @key: The unique identifier string to be inserted to the hash table
 * @value: value string corresponding to the key.
 * Return: returns '1' for success '0' otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *node = NULL, *temp = NULL;

	if (strcmp(key, "") == 0 || key == NULL || value == NULL || ht == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	temp =  ht->array[idx];
	if (ht->array[idx] != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(value);
			return (1);
		}
		else
		{
			while (temp->next != NULL)
			{
				if (strcmp(key, temp->key) == 0)
				{
					free(ht->array[idx]->value);
					ht->array[idx]->value = strdup(value);
					return (1);
				}
				temp = temp->next;
			}
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (ht->array[idx] == NULL)
		node->next = NULL;
	else
		node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
