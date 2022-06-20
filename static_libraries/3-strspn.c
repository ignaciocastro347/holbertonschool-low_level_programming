#include "main.h"

/**
 *  * _strspn - gets the length of a prefix substring
 *   * @s: string
 *    * @accept: substring
 *     * Return: number of bytes in the string which consist only bytes from accept
 *      */
unsigned int _strspn(char *s, char *accept)
{
		int i = 0, j = 0;
			int char_found;

				while (s[i])
						{
									char_found = 0;
											j = 0;
													while (accept[j])
																{
																				if (accept[j] == s[i])
																								{
																													char_found = 1;
																																}
																							j++;
																									}
															if (char_found == 0)
																		{
																						return (i);
																								}
																	i++;
																		}
					/*check if s has at least one character*/
					if (i == 0)
								return (0);
						return (i - 1);
}
