#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * check_num - a program that checks numbers in a string
 * @str: string
 * Return: 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check if str has digits*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - a program that adds to positive nums
 * @argc: number
 * @argv: arrays
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Checks the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI --> converts string to integer*/
					sum += str_to_int;
		}
		/*Condition that if a number has symbols that is not a digit*/
					else
					{
					printf("Error\n");
					return (1);
					}
					count++;
	}
	printf("%d\n", sum); /*print sum*/

	return (0);
}
