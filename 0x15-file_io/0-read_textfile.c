#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the filename input
 * @letters: number of letters to read
 *
 * Return:  the actual number of letters it could read and print
 * 0 in case the file couldn't be opened or read or filename is null
 * also if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fp, count, fr;


	if (!filename)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters + 1));
	if (!buff)
	{
		close(fp);
		return (0);
	}
	count = read(fp, buff, letters);
	if (count == -1)
	{
		close(fp);
		free(buff);
		return (0);
	}
	fr = write(STDOUT_FILENO, buff, count);
	if (fr  == -1)
	{
		close(fp);
		free(buff);
		return (0);
	}
	close(fp);
	free(buff);

	return (count);
}
