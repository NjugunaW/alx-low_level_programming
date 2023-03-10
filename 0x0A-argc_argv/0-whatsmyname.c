#include <stdio.h>
#include "main.h"

/**
 * main - prints its name followed by new line
 * @argc: number
 * @argv: array
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
