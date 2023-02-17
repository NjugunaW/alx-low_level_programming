#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers go there */

/**
* main - prints single digit numbers of base 10 then a new line
*
* Return: all single numbers
*/
int main(void)
{
int n = 0;
while (n <= 9)
{
printf("%d", n);
n++;
}
putchar('\n');
return (0);
}
