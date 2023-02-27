#include "main.h"
/**
 * puts_half -  function that prints half of a string, followed by a new line
 * @str: string
 * Return: 0 (Success)
 */
void puts_half(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		n++;
		str++;
	}
	str -= (n / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
