#include "main.h"
#include <stdio.h>

/**
 * main -  entry point
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 1 on success, error code on failure
 */
int main(int argc, char *argv[])
{
/*This line uses printf to print to print values of 'argv' and 'argc'*/
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
/*fnctn returns the value of '1' to the calling process*/
/*indicating the program executed successfully*/
	return (1);
}
