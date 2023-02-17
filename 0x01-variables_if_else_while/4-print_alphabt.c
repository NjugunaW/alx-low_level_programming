#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers go there */

/**
*  main - program that prints the alphabet in lowercase, followed by a new line
*
* Return: character
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'q' && c != 'e')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
