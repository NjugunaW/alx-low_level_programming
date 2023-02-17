#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers go there */

/**
*  main - prints alphabet in lowercase, and then in uppercase, then a new line
*
* Return: character
*/
int main(void)
{
char c;
for (c = 'a';  c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}
