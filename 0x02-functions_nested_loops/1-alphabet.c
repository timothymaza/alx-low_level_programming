#include "main.h"

/**
 * Description: prints the alphabet in lowercase
 * print_alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
