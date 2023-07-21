#include "main.h"
#include <stdio.h>

/**
 * main - C program that prints 1 to 100 but if
 *        the number is divisable by 3 print "Fizz"
 *        if divisable by 5 print "Buzz" and if
 *        divisable by both print "FizzBuzz".
 *
 * Return: (0) -> Indicates a Success.
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			prinf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
