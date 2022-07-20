#include "main.h"
/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: content of file to write
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w;

	if (!filename)
		return (-1);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, text_content ? strlen(text_content) : 0);
	if (o == -1 || w == -1)
		return (-1);

	return (1);
}
