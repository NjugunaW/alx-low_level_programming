#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: length of string
 * Return: 0 (Success)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
