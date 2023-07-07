#include "hash_tables.h"


/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array.
 * Return: pointer to the newly created hash table or
 *         NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int stk = 0;
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
	for (; li < size; li++)
		(frsh_tbl->array)[li] = NULL;
	return (frsh_tbl);
}

