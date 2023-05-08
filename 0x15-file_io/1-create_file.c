#include "main.h"
#include <string.h>
/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
/*Declaration of variables*/
	int filedes;
	int btswrite;
	int a;
/*if statement to check whether filename is NULL*/
	if (filename == NULL)
	{
		return (-1);
	}
/*if statement to check whether text_content is NULL*/
	if (text_content != NULL)
/*for loop to iterate through text_content*/
	{
		for (a = 0; text_content[a];)
			a++;
	}
/*flags in open()system call to ensure the file is rw- --- ---*/
	filedes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
/*fnctn to return number of bytes written*/
	btswrite = write(filedes, text_content, a);
/*if statements to check whether file was successfully opened and created*/
	if (filedes < 0 || btswrite < 0)
		return (-1);
	close(filedes);
	return (1);
}
