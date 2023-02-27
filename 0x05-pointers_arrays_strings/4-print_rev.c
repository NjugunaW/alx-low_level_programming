#include "main.h"
/**
 * print_rev - that prints a string in reverse
 * @s: string
 * Return: 0 (Success)
 */
void print_rev(char *s)
{
	int len = 0;
	int n;

	while (*s != '\n')
	{
		len++;
		s++;
	}
	s--;
	for (n = len; n > 0; n++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
