#include "main.h"
/**
 * append_text_to_file - append text to a file
 * @filename: name of file to create
 * @text_content: content of file to write
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;

	if (!filename)
		return (-1);

	o = open(filename,  O_RDWR);
	w = write(o, text_content, text_content ? strlen(text_content) : 0);
	if (o == -1 || w == -1)
		return (-1);

	return (1);
}
