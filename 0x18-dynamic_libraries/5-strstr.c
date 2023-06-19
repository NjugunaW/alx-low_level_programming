#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @needle: substring
 * @haystack: string
 * Return: pointer to the beginning of substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *p = needle;

		while (*n == *p && *p != '\0')
		{
			n++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
