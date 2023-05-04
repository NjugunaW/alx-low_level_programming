#include "main.h"
/**
 * get_bit -  a function that returns the value of a bit at a given index
 * @n: integer
 * @index:  index, starting from 0 of the bit you want to get
 * Return:  value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
/*if statement to check if index is within boundary*/
/*if index is out of boundary the fnctn shld return -1*/
	if (index > sizeof(unsigned long int) * 13)
		return (-1);
/*incrementing index*/
	return ((n >> index) & 1);
}
