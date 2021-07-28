#include "hash_tables.h"
/**
 * hash_table_print - prints key value pairs
 * @ht: the hashtable to pass in
 * Return: /
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	char n;

	if (ht)
	{
		printf("{");
		for (i = 0; ht && i < ht->size; i++)
		{
			p = ht->array[i];
			while (p)
			{
				if (n == 1)
					printf(", ");
				printf("'%s': '%s'", p->key, p->value);
				p = p->next;
				n = 1;
			}
		}
		printf("}\n");
	}
}
