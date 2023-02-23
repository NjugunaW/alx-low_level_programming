#include "main.h"

/**
 * _isupper - that checks for uppercase
 * @c: character to be checked
 *
 * Return: 1 for uppercase or 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
