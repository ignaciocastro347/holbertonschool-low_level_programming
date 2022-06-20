
#include "main.h"
#include <string.h>

/**
 *  * _strncat - Concatenates strings n chars
 *   * @dest: destination string
 *    * @src: string to concatenate
 *     * @n: amount of chars to concatenate
 *      * Return: pointer to the resulting string dest
 *       */
char *_strncat(char *dest, char *src, int n)
{
		int len = strlen(dest);
			int i = 0;

				while (src[i] && i < n)
						{
									dest[len + i] = src[i];
											i++;
												}
					dest[len + i] = 0;
						return (dest);
}
