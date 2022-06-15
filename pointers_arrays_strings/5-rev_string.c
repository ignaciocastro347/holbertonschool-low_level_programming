#include "main.h"
#include <string.h>
/**
 * rev_string - Set a string in reverse
 * @s: array of char values
 */
void rev_string(char *s)
{
	int a;
	int b = strlen(s);
	char temp;

	for (a = 0, b--; a < b; a++, b--)
	{
		temp = s[a];
		*(s + a) = s[b];
		*(s + b) = temp;
	}
}
