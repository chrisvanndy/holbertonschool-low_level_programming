#include "hash_tables.h"
/**
 * hash_table_create - creates a basic hashtable
 * @size: the size of the array
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *Hash = NULL;
	unsigned long int i = 0;

	if (size < 1)
		return (NULL);

	Hash = malloc(sizeof(hash_table_t));
	if (Hash == NULL)
		return (NULL);

	Hash->array = malloc(sizeof(hash_node_t *) * size);
	if (Hash == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		Hash->array[i] = NULL;
	}

	Hash->size = size;

	return (Hash);
}
