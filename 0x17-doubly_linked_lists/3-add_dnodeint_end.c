#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - fnctn that adds a new node at the end of a list
 * @head: pointer to a pointer to a struct
 * @n: integer
 * Return: address of new element or NULL for failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nnde = NULL, *arbt = NULL;

	nnde = malloc(sizeof(dlistint_t));
	if (!nnde)
	{
		free(nnde);
		return (NULL);
	}
	nnde->next = NULL;
	nnde->prev = NULL;
	nnde->n = n;

	if (!head || !(*head))
	{
		*head = nnde;
		return (nnde);
	}
	else
	{
		arbt = *head;
		while (arbt->next)
			arbt = arbt->next;

		nnde->prev = arbt;
		arbt->next = nnde;

		return (nnde);
	}
	return (NULL);
}
