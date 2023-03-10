#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: input 1
 * @s2: input 2
 * Return: 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 &&  *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
