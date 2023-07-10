#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 for success, -1 for failure or filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fp, wter, lenz = 0;

	if (filename == 0)
		return (-1);
	if (text_content != 0)
	{
		for (lenz = 0; text_content[lenz];)
			lenz++;
	}
	fp = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);
	wter = write(fp, text_content, lenz);

	if (fp == -1 || wter == -1)
		return (-1);
	close(fp);
	return (1);
}
