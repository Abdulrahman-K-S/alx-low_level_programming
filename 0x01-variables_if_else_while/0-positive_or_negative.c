#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: C program where it assigns a random number to
 * the variable n and then checks if it's +ve, -ve or
 * equal to 0
 *
 * Return: 0 which indicates success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%s", "is zero");
	else if (n > 0)
		printf("%s", "is positive");
	else
		printf("%s", "is negative");
	return (0);
}
