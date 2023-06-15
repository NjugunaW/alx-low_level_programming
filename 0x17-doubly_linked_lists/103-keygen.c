#include <stdio.h>

char is_palindrome(unsigned int num);
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	unsigned int ax, bx, arbt, lrge;

	lrge = 0;
	for (ax = 100; ax <= 999; ax++)
	{
		for (bx = 100; bx <= 999; bx++)
		{
			arbt = ax * bx;
			if (is_palindrome(arbt))
				lrge = (arbt > lrge) ? arbt : lrge;
		}
	}
	printf("Largest palindrome of 3 digit numbers is: %d\n", lrge);
	return(0);
}


/**
  * is_palindrome - A function that checks if list is a palindrome.
  * @num: The number to check.
  * Return: 1 if number is a palindrome, or 0 if not.
  */
char is_palindrome(unsigned int num)
{
	unsigned int swtch = 0, rem = 0, n = num;

	while (n != 0)
	{
		rem = n % 10;
		swtch = swtch * 10 + rem;
		n /= 10;
	}
	if (swtch == num)
		return (1);
	return (0);
}
