#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 *
 * @text_content: contents of the file
 *
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_x;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_x = open(filename, O_WRONLY | O_APPEND);

	if (file_x == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)

		rwr = write(file_x, text_content, nletters);

	if (rwr == -1)
		return (-1);

	}

	close(file_x);

	return (1);
}
