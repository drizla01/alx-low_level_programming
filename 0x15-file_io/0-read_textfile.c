#include "main.h"
#include <stddef.h>

/**
 * read_textfile - read the text file and prints it to POSIX output
 * @filename: the name of the file
 * @letters: the letters of the file
 *
 * Return: the letter of the file that we can read and print,
 * if file cannot be open or read return 0, if filename is NULL return 0.
 * if write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, n_read, wrote;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	n_read = read(file, buffer, letters);
	if (n_read == -1)
		return (0);
	buffer[n_read] = '\0';
	wrote = write(STDOOUT_FILENO, buffer, n_read);
	if (wrote != n_read)
		return (0);
	free(buffer);
	close(file);
	return (n_read);
}
