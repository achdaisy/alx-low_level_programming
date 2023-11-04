#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated witha key
 * @ht: the hash table
 * @key: they key we are looking for
 *
 * Return: value associated with the element, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int pos;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	pos = key_index((const unsigned char *)key, ht->size);
	if (pos >= ht->size)
		return (NULL);
	node = ht->array[pos];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	return ((node == NULL) ? NULL : node->value);
}
