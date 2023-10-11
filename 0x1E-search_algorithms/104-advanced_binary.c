#include "search_algos.h"

/**
  * recursive_search - Searches recursively for a value in a sorted
  *                             array of integers using binary search.
  * @array: pointer to the first element of the to search.
  * @left: firstt index of the to search.
  * @right: last index of the to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  *         Otherwise,  the index where value is located
  */
int recursive_search(int *array, size_t left, size_t right, int value)
{
	size_t lnt;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (lnt = left; lnt < right; lnt++)
		printf("%d, ", array[lnt]);
	printf("%d\n", array[lnt]);

	lnt = left + (right - left) / 2;
	if (array[lnt] == value && (lnt == left || array[lnt - 1] != value))
		return (lnt);
	if (array[lnt] >= value)
		return (recursive_search(array, left, lnt, value));
	return (recursive_search(array, lnt + 1, right, value));
}

/**
  * advanced_binary - that searches for a value in a sorted array of integers
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: the value to search for
  *
  * Return: If value is not present in array or if array is NULL, -1.
  *         Otherwise, the index where value is located
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_search(array, 0, size - 1, value));
}

