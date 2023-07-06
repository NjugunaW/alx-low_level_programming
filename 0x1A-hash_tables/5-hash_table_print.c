#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_print - function that prints a hash table.
  * @ht:  is the hash table
  * Return: Nothing if ht is NULL
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nde = NULL;
	unsigned long int idx = 0;
	short sm_clns = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (; idx < ht->size; ++idx)
	{
		nde = ht->array[idx];

		while (nde)
		{
			if (sm_clns == 1)
				printf(", ");

			sm_clns = 1;
			printf("'%s': '%s'", (char *) nde->key,
								(char *) nde->value);

			nde = nde->next;
		}
	}

	printf("}\n");
}
