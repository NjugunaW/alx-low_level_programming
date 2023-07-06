#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
  * hash_table_set - a function that adds an lmntent to the hash table.
  * @ht: the hash table you want to add or update the key/value to
  * @key: the key. key can not be an empty string
  * @value: value associated with the key
  * Return: 1 if it succeeded, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *lmnt = NULL, *frsh_nde = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	lmnt = ht->array[index];

	if (lmnt && strcmp(key, lmnt->key) == 0)
	{
		free(lmnt->value);
		lmnt->value = strdup(value);
		return (1);
	}

	frsh_nde = malloc(sizeof(hash_node_t));
	if (frsh_nde == NULL)
		return (0);

	frsh_nde->key = strdup(key);
	frsh_nde->value = strdup(value);
	frsh_nde->next = ht->array[index];
	ht->array[index] = frsh_nde;
	return (1);
}
