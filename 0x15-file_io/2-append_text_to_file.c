#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 for success, -1 for failure or filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wter, lenz = 0;

	if (filename == 0)
		return (-1);
	if (text_content != 0)
	{
		for (lenz = 0; text_content[lenz];)
			lenz++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wter = write(op, text_content, lenz);

	if (op == -1 || wter == -1)
		return (-1);

	close(op);

	return (1);
}
