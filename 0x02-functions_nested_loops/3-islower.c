#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: is lowercase
 * Return : 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
