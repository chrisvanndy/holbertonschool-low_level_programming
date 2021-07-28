#include "hash_tables.h"
/**
 * hash_table_delete - deletes assigned memebers of hash table
 * @ht: the hashtable in question
 * Return: 0
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				tmp = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = tmp;
			}
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
