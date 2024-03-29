#include "hash_tables.h"
/**
 * hash_table_get - returns the value of a key in hashtable
 * @ht: the hash table
 * @key: the key to return value from
 * Return: value associate with key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int bin = 0;
	hash_node_t *pair;

	if (!ht)
		return (0);
	bin = key_index((const unsigned char *)key, ht->size);

	pair = ht->array[bin];
	while (pair && pair->key && strcmp(key, pair->key) != 0)
		pair = pair->next;
	if (!pair || !pair || strcmp(key, pair->key) != 0)
		return (NULL);
	else
		return (pair->value);
}
