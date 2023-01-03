#include "main.h"

/**
 * *_strstr - Locates a string
 * @haystack: the string
 * @needle: the stirng to find
 *
 * Return: the located string
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;
			}
		}
		haystack++;
	}
	return ('\0');
}
