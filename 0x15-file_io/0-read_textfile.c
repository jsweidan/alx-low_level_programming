#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file
 *
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_x;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_x = open(filename, O_RDONLY);
	if (file_x == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_x);
		return (0);
	}

	lenr = read(file_x, buffer, letters);
	close(file_x);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
