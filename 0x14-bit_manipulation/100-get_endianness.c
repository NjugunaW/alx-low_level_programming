#include "main.h"
/**
 * get_endianness -  a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
/*Declaration of variables*/
	int end = 1;
	char *p = (char *)&end;
/*if statement to check whther least significant byte in *p is equal to 1*/
	if (*p == 1)
	{
		return (1);
	}
/*else function if above is not true*/
	else
	{
		return (0);
	}
}
