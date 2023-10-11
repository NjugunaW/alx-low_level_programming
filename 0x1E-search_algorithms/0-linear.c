#include "search_algos.h"

/**
  * linear_search - function that searches for a value in an array of integers
  * @array:  pointer to the first element of the array
  * @size:  number of elements in array
  * @value: value to search for
  *
  * Return: first index where value is located
  * Description: Prints a value every time it is compared in the array.
  */

int linear_search(int *array, size_t size, int value)
{
	size_t lnt;

	if (array == NULL)
		return (-1);

	for (lnt = 0; lnt < size; lnt++)
	{
		printf("Value checked array[%ld] = [%d]\n", lnt, array[lnt]);
		if (array[lnt] == value)
			return (lnt);
	}

	return (-1);
}
