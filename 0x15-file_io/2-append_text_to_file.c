#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to be appended
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 *
 * Coder: Renish Okago
 */

int append_text_to_file(const char *filename, char *text_content)
{

	ssize_t fd = open(filename, O_RDWR | O_CREAT | O_APPEND);
	ssize_t i = 0, app = write(fd, text_content, i);

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_RDWR | O_CREAT | O_APPEND);
	app = write(fd, text_content, i);

	if (fd == -1 || app == -1)
		return (-1);

	close(fd);
	return (1);
}
