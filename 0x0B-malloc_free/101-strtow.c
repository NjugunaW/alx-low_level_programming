#include "main.h"
#include <stdlib.h>
/**
 * count_word - function that counts number of words in a string
 * @s:counter
 * Return: 0 (Success)
 */
int count_word(char *s)
{
	int g, a, b;

	g = 0;
	b = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			g = 0;
		else
			if (g == 0)
			{
				g = 1;
				b++;
			}
	}
	return (b);
}
/**
 * strtow - function that splits a string into words
 * @str: string
 * Return: NULL  if str == NULL or str == "" or failure
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int m, n = 0, l = 0, q, r = 0, start, end;

	while (*(str + l))
		l++;
	q = count_word(str);
	if (q == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (q + 1));
	if (matrix == NULL)
		return (NULL);
	for (m = 0; m <= l; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (r)
			{
				end = m;
				tmp = (char *)malloc(sizeof(char) * (r + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
					matrix[n] = tmp - r;
				n++;
				r = 0;
			}
		}
		else if (r++ == 0)
			start = m;
	}
	matrix[n] = NULL;
	return (matrix);
}
