#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function that converts a binary num to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0 if b is NULL or has more one or more chars
 */
unsigned int binary_to_uint(const char *b)
{
/*Declaration of variables*/
	unsigned int a = 0;
	int j;
/*if statement to check whether b is NULL*/
	if (b == NULL)
		return (0);
/*for loop to iterate thru' strng b using (j) and incerementing the val (j)*/
	for (j = 0; b[j]; j++)
/*if statement to check whether index of (j) in b is 0 or 1*/
/*if it is neither of the above, the fnctn shld return 0*/
/*if it is 0 or 1, the unsigned int a is updated*/
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		a = 2 * a + (b[j] - '0');
	}
/*return converted num*/
	return (a);
}
