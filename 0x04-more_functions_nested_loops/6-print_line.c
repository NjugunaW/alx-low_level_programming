#include "main.h"
/**
 * print_line - that draws a straight line in the terminal
 * @n: length of line
 *
 * Return: 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
