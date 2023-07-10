#include "main.h"

/**
 * read_textfile -  function that read text file
 * and prints to POSIX standard output
 * @letters: number of letters to be read and printed
 * @filename: textfile to be read
 *
 * Return: 0 when function fail or filename is NULL
 * w- Actual Number of Bytes to be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffy;
	ssize_t fp;
	ssize_t wter;
	ssize_t rder;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffy = malloc(sizeof(char) * letters);
	rder = read(fp, buffy, letters);
	wter = write(STDOUT_FILENO, buffy, rder);

	free(buffy);
	close(fp);
	return (wter);
}
