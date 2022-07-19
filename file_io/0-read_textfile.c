#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file as string
 * @letters:number of letters it should read and print
 * Return: actual number of letters it could read and print or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;

	if (!filename)
		return(0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
		return(0);

	read(fd, buf, letters);
	buf[letters] = '\0';
	return (printf("%s", buf));
}

