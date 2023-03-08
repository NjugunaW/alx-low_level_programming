#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - checks if integer is a prime number or not
 * @n: input
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: input
 * @i: counter
 * Return: 1 for prime and 0 for otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
