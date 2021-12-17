#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the hash table
 *
 * Return: a new hashtable with size @size, NULL if malloc fails to allocate
 * memory
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = (unsigned long) malloc(sizeof(unsigned long int) * size);

	return (new_table);
}
