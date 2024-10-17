#include "hash_tables.h"

/**
 * hash_table_delete - Method that deletes a hash table
 * @ht: hash table to delete from
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				temp = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = temp;
			}
			free(ht->array[i]);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
