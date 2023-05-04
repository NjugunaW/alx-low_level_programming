#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: integer
 */
void print_binary(unsigned long int n)
{
/*if statement to check whether n is 0*/
/*if so, print 0 and return*/
	if (n == 0)
	{
		_putchar('0');
		return;
	}
/*if statement to check if n is greater than 1*/
/*if above statement is true, print n/2 recursively*/
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
