#include "main.h"
/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: content of file to write
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, letters;
	char * buf;

	if (!filename)
		return (-1);

	letters = strlen(text_content);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	/*printf("o: %i\n", o);*/
	/*printf("r: %i\n", r);*/
	w = write(o, text_content, strlen(text_content));
	if (o == -1 || w == -1)
		return (-1);

	return (0);
}
