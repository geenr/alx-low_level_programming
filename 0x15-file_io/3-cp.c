#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocate 1024 Bytes for Buffer.
 * @file: The Name of the File Buffer is storing chars for.
 *
 * Return: A Pointer to the Newly-allocated Buffer.
 */
char *create_buffer(char *file)
{
	char *Buffers;

	Buffers = malloc(sizeof(char) * 1024);

	if (Buffers == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffers);
}

/**
 * close_file - closes file Descriptors.
 * @filed: The File Descriptor to be closed.
 */
void close_file(int filed)
{
	int clozed;

	clozed = close(filed);

	if (clozed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close filed %d\n", filed);
		exit(100);
	}
}

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
	int From, towards, reader, winner;
	char *Buffers;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	Buffers = create_buffer(argv[2]);
	From = open(argv[1], O_RDONLY);
	reader = read(from, buffer, 1024);
	towards = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (From == -1 || reader == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(Buffers);
			exit(98);
		}

		winner = write(towards, Buffers, r);
		if (towards == -1 || winner == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(Buffers);
			exit(99);
		}

		reader = read(From, Buffers, 1024);
		towards = open(argv[2], O_WRONLY | O_APPEND);

	} while (reader > 0);

	free(Buffers);
	close_file(From);
	close_file(towards);

	return (0);
}
