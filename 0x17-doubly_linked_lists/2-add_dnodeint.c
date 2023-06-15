#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer to a pointer of a struct
 * @n: integer
 * Return: address of new element or NULL for failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnde = NULL;
	dlistint_t *arbt = NULL;

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
		arbt->prev = nnde;
		*head = nnde;
		nnde->next = arbt;
		return (nnde);
	}
	return (NULL);
}
