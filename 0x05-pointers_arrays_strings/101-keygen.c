#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password
 *
 * return: an integer on success
 */

int main(void)
{
	int pass [18];
	int a, count, s;

	count = 0;

	srand(time(NULL));

	for (a = 0; a < 18; a++)
	{
		pass[a] = rand() % 78;
		count += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2000 - count) - '0' < 78)
		{
		s = 2000 - count - '0';
		count += s;
		putchar(s + '0');
		break;
		}
	}
}	
