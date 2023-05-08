#include "main.h"

/**
 * create_file - create a file.
 * @filename: A Pointer to name of the File to create.
 * @text_content: A Pointer to String to write to the File.
 *
 * Return: If the function fail - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int filed, winner, lenz = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenz = 0; text_content[lenz];)
			lenz++;
	}

	filed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	winner = write(filed, text_content, lenz);

	if (filed == -1 || winner == -1)
		return (-1);

	close(filed);

	return (1);
}
