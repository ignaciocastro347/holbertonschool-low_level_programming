#include "main.h"
#include <string.h>
/**
 *  * _strcat - Contcatenates two strings
 *   * @dest: string value
 *    * @src: string value
 *     * Return: pointer to the resulting string dest
 *      */
char *_strcat(char *dest, char *src)
{
		int len = strlen(dest);
			int i = 0;

				while (src[i])
						{
									dest[len + i] = src[i];
											i++;
												}
					dest[len + i] = 0;
						return (dest);
}
