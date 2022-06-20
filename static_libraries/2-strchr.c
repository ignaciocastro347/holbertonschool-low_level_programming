#include "main.h"
/**
 *  * _strchr - locates a character in a string
 *   * @s: string
 *    * @c: char
 *     * Return: pointer to the first character c in the string s, or NULL
 *      */
char *_strchr(char *s, char c)
{
		int i = 0;

			while (s[i])
					{
								if (s[i] == c)
												return (&s[i]);
										i++;
											}
				if (s[i] == '\0' && c == '\0')
							return (&s[i]);
					return ('\0');
}
