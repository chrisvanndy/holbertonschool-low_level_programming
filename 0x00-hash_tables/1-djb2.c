#include "hash_tables.h"
/**
 * hash_djb2 - apply djb2 algo to provide randomized index
 * @str: string passed (key value)
 * Return: pointer to the new hash table
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
