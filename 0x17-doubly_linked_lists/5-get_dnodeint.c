#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: pointer to a struct
 * @index: the index of the node, starting from 0
 * Return: NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int integer = 0;

	while (head)
	{
		if (integer++ == index)
			break;
		head = head->next;
	}
	return (head);
}
