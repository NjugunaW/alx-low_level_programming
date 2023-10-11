#include "search_algos.h"

/**
  * search_binary - that searches for a value in a sorted array of int
  * @array: pointer to the first element of the array to search in
  * @left: fisrt index of the [sub]array to search.
  * @right: last index of the [sub]array to search.
  * @value:  value to search for
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int search_binary(int *array, size_t left, size_t right, int value)
{
	size_t lnt;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (lnt = left; lnt < right; lnt++)
			printf("%d, ", array[lnt]);
		printf("%d\n", array[lnt]);

		lnt = left + (right - left) / 2;
		if (array[lnt] == value)
			return (lnt);
		if (array[lnt] > value)
			right = lnt - 1;
		else
			left = lnt + 1;
	}

	return (-1);
}

/**
  * exponential_search - that searches for a value in a sorted array of int
  * @array:  pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: is the value to search for
  *
  * Return: If value is not present in array or if array is NULL, -1.
  *         Otherwise, first index where value is located
  *
  * Description: Prints a value every time it is compared in the arr
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t lnt = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (lnt = 1; lnt < size && array[lnt] <= value; lnt = lnt * 2)
			printf("Value checked array[%ld] = [%d]\n", lnt, array[lnt]);
	}

	right = lnt < size ? lnt : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", lnt / 2, right);
	return (search_binary(array, lnt / 2, right, value));
}
