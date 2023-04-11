#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the namw of the file to read
 * @letter: the max number of bytes to read from the file and print
 *
 * Return: the number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	int read_letters;
	int write_letters;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
	{
		free(buffer);
		return (0);
	}

	read_letters = read(file_desc, buffer, letters);

	if (read_letters == -1)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}

	write_letters = write(STDOUT_FILENO, buffer, read_letters);

	if (write_letters == -1 || write_letters != read_letters)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}
	free(buffer);
	close(file_desc);

	return (read_letters);

}
