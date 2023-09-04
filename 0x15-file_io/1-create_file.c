#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails -1.
 * Otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fp, count = 0, wr;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (*(text_content + count))
			count++;
	}
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	wr = write(fp, text_content, count);

	if (fp == -1 || wr == -1)
		return (-1);

	close(fp);

	return (1);
}
