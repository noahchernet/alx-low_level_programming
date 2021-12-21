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

	if (!ht || !key || strlen(key) == 0 || !new_node)
		return (0);

	idx = hash_djb2((const unsigned char *) key) % ht->size;

	new_node->key = strdup(key);
	new_node->value = strcmp(value, "") ? strdup(value) : "";

	/**
	 * If the index is empty, put the new node in idx
	 */
	if (!ht->array[idx])
	{
		ht->array[idx] = new_node;
	}

	/**
	 * If there is a collision, make new_node to the top of the list of items
	 * that have hashes evaluating to idx
	 */
	else if (strcmp(ht->array[idx]->key, key) != 0)
	{
		new_node->next = ht->array[idx];
		ht->array[idx] = new_node;
	}

	/**
	 * Update the key's value if the key of ht->array[idx] is the same as @key
	 */
	else
	{
		free(new_node->value);
		free(new_node);
		ht->array[idx]->value = strdup(value);
	}

	return (1);
}
