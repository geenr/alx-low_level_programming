#include "main.h"

/**
 * append_text_to_file - append text at end of a File.
 * @filename: A Pointer to the Name of File.
 * @text_content: The String to add to end of the File.
 *
 * Return: If the function fail or Filename is NULL - -1.
 *         If File does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openner, winner, lenz = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenz = 0; text_content[lenz];)
			lenz++;
	}

	openner = open(filename, O_WRONLY | O_APPEND);
	winner = write(openner, text_content, lenz);

	if (openner == -1 || winner == -1)
		return (-1);

	close(openner);

	return (1);
}
