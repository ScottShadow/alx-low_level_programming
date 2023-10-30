#include "main.h"
/**
 * create_file - creates or truncates a file with contents
 * @filename: the file to modify
 * @text_content: character to copy to the file
 * Return: 1(Success) or 0(Fail)
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t written_char;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_desc == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	written_char = write(file_desc, text_content, strlen(text_content));
	if (written_char == -1)
	{
		close(file_desc);
		return (-1);
	}
	if (close(file_desc) == -1)
		return (-1);
	return (1);
}

/**
 * read_and_copy_file - read content from a file
 *  and copies it to a different file
 * @from_filename: the file to read from
 * @letters: the number of characters to print
 * @to_filename: the destination file
 * Return: size of chars printed or (0) Failed
 */
ssize_t read_and_copy_file(const char *from_filename,
						   const char *to_filename, size_t letters)
{
	int from_file, to_file;
	ssize_t written_char, read_char;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (-1);

	from_file = open(from_filename, O_RDONLY);
	if (from_file == -1 || from_filename == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_filename);
		free(buffer);
		exit(98);
	}

	to_file = open(to_filename, O_RDWR | O_CREAT | O_TRUNC, 0664);

	if (to_file == -1 || to_filename == NULL)
	{
		free(buffer);
		close(from_file);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_filename);
		exit(99);
	}

	while ((read_char = read(from_file, buffer, letters)) > 0)
	{
		written_char = write(to_file, buffer, read_char);
		if (written_char != read_char)
		{
			free(buffer);
			close(to_file);
			close(from_file);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_filename);
			exit(99);
		}
	}
	if (read_char == -1)
	{
		free(buffer);
		close(to_file);
		close(from_file);
		return (0);
	}

	free(buffer);
	if (close(to_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_file);
		exit(100);
	}
	if (close(from_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}

	return (written_char);
}
/**
 * main - entry point, cpy argv[1] content to argv[2]
 * @argc: arg count
 * @av: arg array
 * Return: 0(Success)
 */
int main(int argc, char **av)
{
	size_t buffsize = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (av[1] == NULL || av[2] == NULL)
		return (-1);

	read_and_copy_file(av[1], av[2], buffsize);
	return (0);
}
