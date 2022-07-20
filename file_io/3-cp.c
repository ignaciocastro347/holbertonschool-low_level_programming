#include "main.h"
/**
 * main - copy content to a file and paste to another file
 * @filename: name of file to create
 * @text_content: content of file to write
 * Return: 1 on success, -1 on failure
 */
int main(int ac, char **av)
{
	int finput, foutput, len;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	finput = open(av[1], O_RDONLY);
	if (finput == -1)
	{
		dprintf(stderr, "Error: Can't read from file %s\n", av[1]);
	        exit(98);
	}
	foutput = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (foutput == -1)
	{
		dprintf(stderr, "Error: Can't write to %s\n", av[2]);
	        exit(99);
	}
	while ((len = read (finput, buff, sizeof(buff))) > 0)
		if (write (foutput, buff, len) != len)
		{
			len = -1;
			break;
		}
	if (close(finput) == -1)
	{
		dprintf(stderr, "Error: Can't close fd %i\n", finput);
		exit(100);
	}
	if (close(foutput) == -1)
	{
		dprintf(stderr, "Error: Can't close fd %i\n", foutput);
		exit(100);
	}
	return (0);
}
