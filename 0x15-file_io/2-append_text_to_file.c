#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the File name
 * @text_content: the string input to add to our file
 *
 * Return: 1 in case of everything is alright
 * otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, wr, count = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (*(text_content + count))
			count++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	wr = write(fp, text_content, count);
		if (fp == -1 || wr == -1)
			return (-1);
	close(fp);

	return (1);
}
