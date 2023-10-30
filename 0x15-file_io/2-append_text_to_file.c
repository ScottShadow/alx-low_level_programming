#include "main.h"
/**
 * append_text_to_file - appends new text on the file
 * @filename: the file to append text to
 * @text_content: the text to append
 * Return: 1(Success) or -1(Fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t written_char;

	if (text_content == NULL)
		return (1);
	file_desc = open(filename, O_RDWR | O_APPEND);
	if (file_desc == -1 || filename == NULL)
		return (-1);

	written_char = write(file_desc, text_content, strlen(text_content));
	if (written_char == -1)
		return (-1);

	if (close(file_desc) == -1)
		return (-1);
	return (1);
}
