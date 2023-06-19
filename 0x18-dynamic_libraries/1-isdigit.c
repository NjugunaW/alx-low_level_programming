#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: int to be checked
 *
 * Return: 1 for digit, 0 for otherwise
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
