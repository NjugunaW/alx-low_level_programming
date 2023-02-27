#include "main.h"
/**
 * puts2 - that prints every other character of a string
 * @str: string where characters are to extracted
 * Return: 0 (Success)
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
