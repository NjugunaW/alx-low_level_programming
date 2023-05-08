#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
/*Declaration of variables*/
	int filedes;
	int btswrite;
	int i;
/*if statement to check whether filename is NULL*/
	if (filename == NULL)
	{
		return (-1);
	}
/*if statement to check whether text_content is NULL*/
	if (text_content == NULL)
/*for loop to iterate through text_content*/
	{
		for (i = 0; text_content[i];)
			i++;
	}
/*flag used in open()call system to read and write a file*/
	filedes = open(filename, O_RDWR | O_APPEND |);
/*fnctn to check whether open()system call was successful*/
	if (filedes == -1)
	{
		return (-1);
	}
/*flag to return bytes written*/
	btswrite = write(filedes, text_content, i);
/*fnctn to check whether there are written bytes*/
	if (btswrite == -1)
	{
		return (-1);
	}
	close(filedes);
	return (1);
}
