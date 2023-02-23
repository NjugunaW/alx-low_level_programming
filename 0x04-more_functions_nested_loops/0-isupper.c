#include "main.h"

/**
 * _isupper - that checks for uppercase
 * @c: character to be checked
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
