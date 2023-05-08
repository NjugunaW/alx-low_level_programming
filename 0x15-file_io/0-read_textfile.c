#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a fncts that reads a text file and prints it to the POSIX SO
 * @filename: pointer
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 *         filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
/*Declaration of variables*/
	ssize_t filedes;
	ssize_t btsread;
	ssize_t btswrite;
	char *chunk;

/*if statement to check whether filename is NULL*/
	if (filename == NULL)
	{
		return (0);
	}
/*memory allocation on the heap*/
	chunk = malloc(letters);
/*if statement to check whether malloc was successful*/
	if (chunk == NULL)
	return (0);
/*fnctn to read data from the file open*/
	filedes = open(filename, O_RDONLY);
	btsread = read(filedes, chunk, letters);
	btswrite = write(STDOUT_FILENO, chunk, btsread);
/*if statement to check errors*/
	if (filedes == -1 || btsread ==  -1 || btswrite == -1 || btswrite != btsread)
	{
		free(chunk);
		return (0);
	}
	free(chunk);
	close(filedes);
	return (btswrite);
}
