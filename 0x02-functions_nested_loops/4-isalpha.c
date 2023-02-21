#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: character to be ckecked
 * Return: 1 for  alphabetic character or 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
