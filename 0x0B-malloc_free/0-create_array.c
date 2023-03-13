#include "main.h"
#include <stdlib.h>
/**
 * create_array - a funtion that creates an array of chars
 * @size:size
 * @c: character
 * Return: NULL for 0 or a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int n;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
		s[n] = c;
	return (s);
}
