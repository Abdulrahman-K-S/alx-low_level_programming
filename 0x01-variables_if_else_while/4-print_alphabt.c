#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints out the alphabet
 * using putchar() function leaving behind 'q' & 'e'
 *
 * Return: (0) which indicates a success
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
