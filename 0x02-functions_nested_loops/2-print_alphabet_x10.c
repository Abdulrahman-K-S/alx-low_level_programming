#include "main.h"

/**
 * print_alphabet_x10 - A function that utilizes putchar() to
 * print the alphabet x10.
*/

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
	}
}
