#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints out the size
 * of different types
 *
 * Return: 0 which indicates a success
*/

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)", sizeof(float));
	return (0);
}
