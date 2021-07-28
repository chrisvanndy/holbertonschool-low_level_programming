#include "hash_tables.h"
/**
 * key_index - returns the index of hashtable member
 * @key: the key * string value
 * @size: the size of the array
 * return: index place
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

 