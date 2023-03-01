#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: number of the elements
 * Return: 0 (Succes)
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
