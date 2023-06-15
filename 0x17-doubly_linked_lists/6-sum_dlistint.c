#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data in list
 * @head: pointer to a struct
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
