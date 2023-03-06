#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: input
 * @size: size
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int s1, s2, n;

	s1 = 0;
	s2 = 0;

	for (n = 0; n < size; n++)
	{
		s1 = s2 + a[n * size + n];
	}
	for (n = size - 1; n >= 0; n--)
	{
		s2 += a[n * size + (size - n - 1)];
	}
	printf("%d, %d\n", s1, s2);
}

