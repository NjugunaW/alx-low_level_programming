#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: where bytes will be copied to
 * @src:  where bytes will be copied from
 * @n: bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
