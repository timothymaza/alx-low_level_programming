#include"main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination array
 * @src: the string to be apprehended
 * @n: maximum number of characters to be apprehended.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
		j++;
	}

	i = 0;

	while (*(src + i) != *(src + n))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
