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
	char c;

	for (int i = 97; i <= 122; i++)
	{
		c = i;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
