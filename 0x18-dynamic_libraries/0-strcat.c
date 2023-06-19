#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strcat - a function that concatenates two strings
 * @src: string 1
 * @dest: string 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int l;
	int n;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}

	n = 0;
	while (src[n] != '\0')
	{
		dest[l] = src[n];
		l++;
		n++;
	}
	dest[l] = '\0';
	return (dest);
}
