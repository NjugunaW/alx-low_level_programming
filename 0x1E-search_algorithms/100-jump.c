#include "search_algos.h"

/**
  * jump_search - function that searches for value in a sorted array of ints
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: the value to search for
  *
  * Return: If value is not present in array or if array is NULL, -1.
  *         Otherwise, the first index where value is located
  *
  * Description: Prints a value every time it is compared in array.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t lnt, ruka, ft;

	if (array == NULL || size == 0)
		return (-1);

	ft = sqrt(size);
	for (lnt = ruka = 0; ruka < size && array[ruka] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", ruka, array[ruka]);
		lnt = ruka;
		ruka += ft;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", lnt, ruka);

	ruka = ruka < size - 1 ? ruka : size - 1;
	for (; lnt < ruka && array[lnt] < value; lnt++)
		printf("Value checked array[%ld] = [%d]\n", lnt, array[lnt]);
	printf("Value checked array[%ld] = [%d]\n", lnt, array[lnt]);

	return (array[lnt] == value ? (int)lnt : -1);
}
