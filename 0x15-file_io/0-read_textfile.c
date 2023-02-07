#include "main.h"

/**
 * read_textfile - reads a text file and prints it the stdout
 * @filename: the text file name
 * @letters: the number of letters to read
 *
 * Return: the number of letters to print | -1 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *fp;

	if (filename == NULL)
		return (0);

	fp = malloc(sizeof(char) *  letters);
	if (fp == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, fp, letters);
	w = write(STDOUT_FILENO, fp, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(fp);
		return (0);
	}

	free(fp);
	return (w);
}
