#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in linked list
 * @h: pointer to a struct
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nds = 0;
	const dlistint_t *arbt;

	arbt = h;
	while (arbt)
	{
		arbt = arbt->next;
		nds++;
	}
	return (nds);
}
