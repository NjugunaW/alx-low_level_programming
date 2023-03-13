#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - that returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: NULL if string is 0 or a pointer for duplicated string
 */
char *_strdup(char *str)
{
	char *b;
	int c;
	int d;

	if (str == NULL)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
		c++;

	b = malloc(sizeof(char) * (c + 1));
	if (b == NULL)
		return (NULL);

	for (d = 0; str[d]; d++)
		b[d] = str[d];
	return (b);
}

