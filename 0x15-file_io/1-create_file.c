#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: name of the file
 *
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 if success, -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int file_x;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_x == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(file_x, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(file_x);

	return (1);
}
