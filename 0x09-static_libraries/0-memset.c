#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: memory location
 * @b: bytes
 * @n: bytes of the memory
 * Return: 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
