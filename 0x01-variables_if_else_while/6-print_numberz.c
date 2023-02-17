#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers go there */

/**
* main - prints all single digit numbers of base 10 then a new line
*
* Return: character
*/
int main(void)
{
int c = 48;
while (c >= 48 && c <= 57)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
