#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * @h: pointer to a pointer to a struct
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nnde = NULL, *arbt = NULL;
	unsigned int integer = 0;

	nnde = malloc(sizeof(dlistint_t));
	if (!nnde)
		return (NULL);
	nnde->next = NULL;
	nnde->prev = NULL;
	nnde->n = n;
	if (!h || !(*h))
		*h = nnde;
	else
	{
		arbt = *h;
		while (idx != integer++ && arbt->next)
			arbt = arbt->next;
		if (arbt->next)
			nnde->prev = arbt->prev;
		else
			nnde->prev = arbt;
		if (idx == integer)
			arbt->next = nnde, nnde->prev = arbt;
		else if (idx == integer - 1)
		{
			if (arbt->prev)
				arbt->prev->next = nnde;
			else
				*h = nnde;
			arbt->prev = nnde;
			nnde->next = arbt;
		}
		else
		{
			free(nnde);
			return (NULL);
		}
	}
	return (nnde);
}
