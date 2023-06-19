#include "main.h"
/**
 * _strchr - Entry point
 * @s: string
 * @c: character to be checked
 * Return: dest for occurrence and NULL if not found
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
