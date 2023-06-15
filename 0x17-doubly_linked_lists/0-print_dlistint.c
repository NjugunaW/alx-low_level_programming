#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to a header
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nds = 0;
	const dlistint_t *arbt;

	arbt = h;
	while (arbt)
	{
		printf("%d\n", arbt->n);
		arbt = arbt->next;
		nds++;
	}
	return (nds);
}
