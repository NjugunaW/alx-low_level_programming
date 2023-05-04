#include "main.h"
/**
 * flip_bits - function that returns the num of bits you would need to flip
 * @n: unsigned long integer 1
 * @m: unsgined long integer 2
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/*Declaration of variables*/
	int a = 0;
	unsigned int b = (n ^ m);

/*while loop to iterate through bits in b*/
	while (b > 0)
	{
		a += (b & 1);
		b >>= 1;
	}
	return (a);
}
