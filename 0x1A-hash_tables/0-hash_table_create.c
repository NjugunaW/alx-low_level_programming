#include "hash_tables.h"

/**
 * hash_table_create -  function that creates a hash table
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table or
           NULL if something went wrong
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *frsh_tbl;
	unsigned long int abx;

	frsh_tbl = malloc(sizeof(hash_table_t));
	if (frsh_tbl == NULL)
		return (NULL);

	frsh_tbl->size = size;
	frsh_tbl->array = malloc(sizeof(hash_node_t *) * size);
	if (frsh_tbl->array == NULL)
		return (NULL);
	for (abx = 0; abx < size; abx++)
		frsh_tbl->array[abx] = NULL;

	return (frsh_tbl);
}
