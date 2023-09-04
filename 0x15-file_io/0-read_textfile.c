#include "main.h"

/**
 * read_textfile - reads a txt file then prints it to stdout
 * @filename: name of the file
 * @letters: no of letters to be read and printed
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf = NULL;
	ssize_t rread, output;

	if (filename == NULL || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		perror("failed to open");
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		perror("Error allocating memory");
		return (0);
	}
	/*reading the file*/
	rread = read(file, buf, letters);
	if (rread == -1)
	{
		perror("Error reading the file");
		return (0);
	}
	close(file);
	if (rread < 0)
	{
		free(buf);
		return (0);
	}
	if (!rread)
	{
		rread = letters;
	}
	/*printing to standard output*/
	output = write(STDOUT_FILENO, buf, rread);
	free(buf);
	if (output < 0)
	{
		return (0);
	}
	return (output);
}
