#include"main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of the string
 */

int _strlen(char *s);
{
	int count;

	for (counter = 0; *s != '\0'; ++s)
		++count;

	return (count);
}
