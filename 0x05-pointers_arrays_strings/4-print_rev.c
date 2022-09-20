#include"main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 *
 * @s: string input value
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int main;
	/*finds the length of string without null character*/

	for (main = 0; s[main] != '\0'; ++main)
		;

	/*print char from the last main as you decrement*/

	for (--main; main >= 0; --main)
	_putchar(s[main]);

	_putchar('\n');
}
