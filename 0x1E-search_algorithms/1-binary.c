#include "search_algos.h"

/**
  * binary_search - function that searches for value in a sorted array of int
  * @array: pointer to the first element of the array to search in
  * @size:  number of elements in array
  * @value: the value to search for
  *
  * Return: index where value is located otherwise NULL
  *         if values is not present in array
  * Description: print the array being searched every time it changes
  */
int binary_search(int *array, size_t size, int value)
{
	size_t lnt, kushoto, kulia;

	if (array == NULL)
		return (-1);

	for (kushoto = 0, kulia = size - 1; kulia >= kushoto;)
	{
		printf("Searching in array: ");
		for (lnt = kushoto; lnt < kulia; lnt++)
			printf("%d, ", array[lnt]);
		printf("%d\n", array[lnt]);

		lnt = kushoto + (kulia - kushoto) / 2;
		if (array[lnt] == value)
			return (lnt);
		if (array[lnt] > value)
			kulia = lnt - 1;
		else
			kushoto = lnt + 1;
	}

	return (-1);
}
