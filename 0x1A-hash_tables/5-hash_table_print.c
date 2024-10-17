#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to the hash table
 * Return: return void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 1;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (!first)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				first = 0;
			}
		}
		i++;
	}
	printf("}\n");
}
