#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
  * hash_table_get - function that retrieves a value associated with a key.
  * @ht: hash table to look into
  * @key: the key to find
  * Return: The value associated with the lmntent
  *         or NULL if key couldn't be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *lmnt = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	lmnt = ht->array[index];

	if (lmnt == NULL)
		return (NULL);

	while (strcmp(key, lmnt->key) != 0)
		lmnt = lmnt->next;

	return (lmnt->value);
}
