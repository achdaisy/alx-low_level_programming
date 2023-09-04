#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of the file
 *
 * Return: 1 on sucess and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t twrite;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file < 0)
		return (-1);
	if (text_content != NULL)
	{
		twrite = write(file, text_content, strlen(text_content));
	}
	close(file);
	if (twrite < 0)
		return (-1);
	return (1);
}
