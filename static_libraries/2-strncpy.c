#include "main.h"
#include <string.h>

/**
 *  * _strncpy - Copy a string
 *   * @dest: destination string
 *    * @src: original string
 *     * @n: amount of chars to be copied
 *      * Return: pointer to teh resulting string
 *       */
char *_strncpy(char *dest, char *src, int n)
{
		int i = 0;
			int srclen = strlen(src);

				if (n == 0)
							return (dest);
					while (i < n)
							{
										if (i <= srclen)
														dest[i] = src[i];
												else
																dest[i] = '\0';
														i++;
															}
						return (dest);
}
