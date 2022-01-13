#include "hash_tables.h"

/**
 * hash_table_delete: deletes all the contents of and the hash table @ht
 * @ht: hash table to be deleted
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		free_node(ht->array[i]);
	}
	free(*ht->array);
	free(ht->array);
	free(ht);
}

/**
 * free_node - deletes the node @head from the heap
 * @head: the node to be deleted
 *
 * Return: void
 */

void free_node(hash_node_t *head)
{
	hash_node_t **all_nodes = NULL;
	hash_node_t *first_node = head;
	int i, nodes = 0;

	for (; head != NULL; nodes++)
	{
		head = head->next;
	}
	nodes--;
	head = first_node;

	if (nodes == 0)
	{
		free(head->value);
		free(head->key);
		free(head->next);
		free(head);
		return;
	}
	all_nodes = malloc(sizeof(hash_node_t) * nodes);
	for (i = 0; i < nodes; i++)
	{
		all_nodes[i] = head;
		head = head->next;
	}

	for (i = nodes - 1; i >= 0; i -= 2)
	{
		free(all_nodes[i]->key);
		free(all_nodes[i]->value);
		free(all_nodes[i]->next->key);
		free(all_nodes[i]->next->value);
		free(all_nodes[i]->next);
		free(all_nodes[i]);
	}

	if ((nodes - 1) % 2)
	{
		free(all_nodes[0]->key);
		free(all_nodes[0]->value);
		free(all_nodes[0]->next);
		free(all_nodes[0]);
	}
	free(all_nodes);
}
