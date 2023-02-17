#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers go there */

/**
*  main -  prints the lowercase alphabet in reverse, followed by a new line.
*
* Return: character
*/
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
