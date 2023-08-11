#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node, *next;

	while (index < ht->size)
	{
		node = (ht->array)[index];
		while (node)
		{
			next = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			node->key = NULL;
			node->value = NULL;
			free(node);
			node = next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
