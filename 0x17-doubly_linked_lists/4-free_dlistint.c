#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: pointer to a struct
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *arbt;

	while (head)
	{
		arbt = head->next;
		free(head);
		head = arbt;
	}
}
