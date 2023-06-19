#include "main.h"
/**
 * _puts - that prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
