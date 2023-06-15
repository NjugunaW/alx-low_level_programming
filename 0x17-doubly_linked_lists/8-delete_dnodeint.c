#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: pointer to a pointer to a struct
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *arbt = NULL;
	unsigned int integer = 0;

	if (!head || !(*head))
	{
		return (-1);
	}
	else
	{
		arbt = *head;
		while (index != integer++ && arbt)
			arbt = arbt->next;
		if (!arbt)
			return (-1);
		if (arbt->next)
			arbt->next->prev = arbt->prev;
		if (index == 0)
			*head = arbt->next;
		else
			arbt->prev->next = arbt->next;
		free(arbt);
		return (1);
	}
	return (-1);
}

