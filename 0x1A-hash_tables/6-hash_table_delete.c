#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 *Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *flwn_nde = NULL, *nde = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (; idx < ht->size; idx++)
		{
			if (ht->array[idx])
			{
				nde = ht->array[idx];
				while (nde)
				{
					flwn_nde = nde->next;
					if (nde->value)
						free(nde->value);
					if (nde->key)
						free(nde->key);
					free(nde);
					nde = flwn_nde;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
