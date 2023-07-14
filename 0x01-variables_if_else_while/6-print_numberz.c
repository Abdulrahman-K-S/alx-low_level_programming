#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints from 0 to 10 (exclusive)
 *
 * Return: (0) which indicates a success
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
