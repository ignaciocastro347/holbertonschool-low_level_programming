#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file as string
 * @letters:number of letters it should read and print
 * Return: actual number of letters it could read and print or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);

	r = read(fd, buf, letters);
	buf[letters] = '\0';

	w = write(STDOUT_FILENO, buf, r);

	if (!w || !r) {
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (fd);
}

