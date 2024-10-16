#include "hash_tables.h"
/**
 * hash_table_create - create table by allocating memory and setting size
 * @size: size of the hash table
 * Return: returns the pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (size < 1)
		return (NULL);

	if (table == NULL)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}