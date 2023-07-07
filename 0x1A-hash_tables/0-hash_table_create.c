#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - A function that creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int dmnsn = 0;
	hash_table_t *frsh_tbl = NULL;

	frsh_tbl = malloc(sizeof(hash_table_t));
	if (!frsh_tbl)
		return (NULL);
	frsh_tbl->size = size;
	frsh_tbl->array = malloc(sizeof(hash_node_t *) * size);
	if (!frsh_tbl->array)
	{
		free(frsh_tbl);
		return (NULL);
	}
	for (; dmnsn < size; dmnsn++)
		(frsh_tbl->array)[dmnsn] = NULL;
	return (frsh_tbl);
}
