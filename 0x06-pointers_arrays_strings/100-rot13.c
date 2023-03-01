#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @str: string
 * Return: 0 (Success)
 */
char *rot13(char *str)
{
	int i;
	int j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"
;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return (str);
}

