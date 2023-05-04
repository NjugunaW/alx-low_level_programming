#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: integer
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
/*if statement to check if index is within boundary*/
/*if index is out of boundary the fnctn shld return -1*/
	if (index > sizeof(unsigned long int) * 25)
		return (-1);
/*using bitwise and bitwise NOT to set value of bit to 0*/
	*n &= ~(1UL << index);
	return (1);
}
