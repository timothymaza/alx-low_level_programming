#include"main.h"

/**
 * rev_string - reverses the string
 *
 * @s: string input value
 *
 * Return : nothing
 */

void rev_string(char *s)
{
	int x, y;
	char ch;

	/*find string length without a null char*/

	for (x = 0; s[x] != '\0'; ++x)
		;

	/*swap the string by looping to half of it*/

	for (y = 0; y < x / 2; ++y)
	{
		ch = s[y];

		s[y] = s[x - 1 - y]; /*because the array starts from 0*/

		s[x - 1 - y] = ch;
	}
}
