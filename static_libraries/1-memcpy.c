#include "main.h"

/**
 *  * _memcpy - fills memory with a constant byte.
 *   * @dest: destiny string
 *    * @src: constant byte to fill
 *     * @n: times to fill s with b value
 *      * Return: pointer to updated string
 *       */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i = 0;

			while (i < n)
					{
								dest[i] = src[i];
										i++;
											}
				return (dest);
}
