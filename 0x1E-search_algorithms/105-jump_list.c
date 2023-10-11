#include "search_algos.h"

/**
 * jump_list - function that searches for a value in a sorted list of int
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: the value to search for
 *
 * Return: If value is not present in head or if head is NULL, NULL.
 *         Otherwise, pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t ft, ft_kwng;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	ft = 0;
	ft_kwng = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (ft += ft_kwng; jump->index < ft; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
