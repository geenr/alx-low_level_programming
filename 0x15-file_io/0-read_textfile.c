#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text File Print to STDOUT.
 * @filename: TextS File being read
 * @letters: Number of Letter to be read
 * Return: w- Actual Number of Bytes to be read and printed
 *        0 when function fail or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffy;
	ssize_t filed;
	ssize_t winner;
	ssize_t time;

	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);
	buffy = malloc(sizeof(char) * letters);
	time = read(filed, buffy, letters);
	winner = write(STDOUT_FILENO, buffy, time);

	free(buffy);
	close(filed);
	return (winner);
}
