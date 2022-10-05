#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence
 *           of the character c in the string s, or NULL if the
 *           character is not found
 * 
 * @s: target parameter
 * @c: character parameter
 *
 * Return: pointer to @s or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
