#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts to int
 * @s: string
 * Return: the integer
 */
int _atoi(char *s)
{
	int a, b, c, l, f, g;

	a = 0;
	b = 0;
	c = 0;
	l = 0;
	f = 0;
	g = 0;
	while (s[l] != '\0')
		l++;
	while (a < l && f == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			g = s[a] - '0';

			if (b % 2)
				g = -g;

			c = c * 10 + g;
			f = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (c);
}

/**
 * main - a program that multiplies two numbers
 * @argc: number
 * @argv: arrays
 * Return: 0 for Success or 1 for Error
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
