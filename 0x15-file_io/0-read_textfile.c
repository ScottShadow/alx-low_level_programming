#include "main.h"
/**
 * read_textfile - read content from a file and prints it to standard output
 * @filename: the file to read from
 * @letters: the number of characters to print
 * Return: size of chars printed or (0) Failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t printed_char, read_char;
	char *buffer;

	if (filename == NULL)
		return (-1);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDWR);
	if (file_desc == -1)
	{
		free(buffer);
		return (0);
	}
	read_char = read(file_desc, buffer, letters);
	if (read_char == -1)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}

	printed_char = write(STDOUT_FILENO, buffer, read_char);
	if (printed_char == -1)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}

	free(buffer);
	if (close(file_desc) == -1)
		return (0);

	return (printed_char);
}
