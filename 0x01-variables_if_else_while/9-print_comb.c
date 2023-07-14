#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: (0) which indicates a success
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
