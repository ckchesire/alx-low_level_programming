#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves value associated with key
 * @ht: pointer to hash table to retrive value from
 * @key: the key for associated value in the hash table
 * Return: returns the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *temp = NULL;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[idx];

	if (ht->array[idx] != NULL)
	{
		while (temp)
		{
			if (strcmp(key, temp->key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
