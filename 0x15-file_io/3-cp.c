#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buff_creator(char *file);
void file_closer(int fd);

/**
 * main - copy the contents of a File to another File.
 * @argc: The Number of Arguments supplied to Program.
 * @argv: An Array of Pointers to the Arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument Count is incorrect - exit code 97.
 * If File_from does not exist or cannot be read - exit code 98.
 * If File_to cannot be created or written to - exit code 99.
 * If File_to or File_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int From, towards, rder, wter;
	char *buffy;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffy = buff_creator(argv[2]);
	From = open(argv[1], O_RDONLY);
	rder = read(From, buffy, 1024);
	towards = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (From == -1 || rder == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffy);
			exit(98);
		}

		wter = write(towards, buffy, rder);
		if (towards == -1 || wter == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffy);
			exit(99);
		}

		rder = read(From, buffy, 1024);
		towards = open(argv[2], O_WRONLY | O_APPEND);

	} while (rder > 0);

	free(buffy);
	file_closer(From);
	file_closer(towards);

	return (0);
}

/**
 * buff_creator - allocate 1024 Bytes for Buffers.
 * @file: The Name of the File Buffers is storing chars for.
 *
 * Return: A Pointer to the Newly-allocated Buffers.
 */

char *buff_creator(char *file)
{
	char *buffy;

	buffy = malloc(sizeof(char) * 1024);

	if (buffy == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffy);
}

/**
 * file_closer - closes file Descriptors.
 * @fd: The File Descriptor to be closed.
 */
void file_closer(int fd)
{
	int clozed;

	clozed = close(fd);

	if (clozed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
