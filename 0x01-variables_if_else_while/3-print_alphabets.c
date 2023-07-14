#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints out the alphabet
 * using putchar() function
 *
 * Return: (0) which indicates a success
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
