#include "hash_tables.h"
/**
 * hash_table_create - create table by allocating memory and setting size
 * @size: size of the hash table
 * Return: returns the pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = NULL;

	return (table);
}
