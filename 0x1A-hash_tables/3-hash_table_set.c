#include "hash_tables.h"

/**
 * hash_table_set - adds or updates an element in the hash table
 * In case of a collision, the new node is added at the beginning of the list
 * @ht: the hash table to be modified
 * @key: key of the new element
 * @value: value of the new element
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	unsigned int idx;

	if (!key || !new_node)
		return (0);

	idx = hash_djb2((const unsigned char *) key) % ht->size;

	new_node->key = (char *) key;
	new_node->value = (char *) value;

	if (!ht->array[idx])
		ht->array[idx] = new_node;

	else
		ht->array[idx]->next = new_node;

	return (1);
}
