#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: name of the file
 * @letters: size of the name of the file
 *
 * Author: Renish Okago
 *
 * Return: actual number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	int read_file, print_file;
	char *buf;

	if (filename == NULL || fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(*buf) * letters);
	if (!buf)
		return (0);

	read_file = read(fd, buf, letters);

	if (read_file == -1)
	{
		free(buf);
		return (0);
	}

	print_file = write(STDOUT_FILENO, buf, read_file);

	if (print_file == -1 || print_file != read_file)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (print_file);
}
