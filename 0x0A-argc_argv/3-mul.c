#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the sum of 2 numbers if
 *        they're present.
 *
 * @argc: The number of arguments entered.
 * @argv: Pointer to an array of command line arguments.
 *
 * Return: 0 which indicates a success otherwise a 1.
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}

	return (0);
}
