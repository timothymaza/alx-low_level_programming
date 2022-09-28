#include"main.h"
/**
 * string_toupper- converts lowercase letters to uppercase
 * @s: checked
 * Return: s
 */

char *string_toupper(char *s)
{
	int b = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] >= 65 && s[b] <= 90)
		{
			s[b] = s[b] + 32;
		}
		if (s[b] >= 97 && s[b] <= 122)
		{
			s[b] = s[b] - 32;
		}
	}
	return (s);
}
