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

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
