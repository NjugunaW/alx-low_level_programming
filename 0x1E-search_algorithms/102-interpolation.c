#include "search_algos.h"

/**
  * interpolation_search - that searches for a value in a sorted array of int
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: the value to search for
  *
  * Return: If value is not present in array or if array is NULL, -1.
  *         Otherwise, the first index where value is located
  *
  * Description: Prints a value every time it is compared in the arr
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t k, a, n;

	if (array == NULL)
		return (-1);

	for (a = 0, n = size - 1; n >= a;)
	{
		k = a + (((double)(n - a) / (array[n] - array[a])) * (value - array[a]));
		if (k < size)
			printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", k);
			break;
		}

		if (array[k] == value)
			return (k);
		if (array[k] > value)
			n = k - 1;
		else
			a = k + 1;
	}

	return (-1);
}
