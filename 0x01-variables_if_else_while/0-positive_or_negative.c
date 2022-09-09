#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Prints 'is positive' if number is greater than 0
 * Prints 'is zero' if number is 0
 * Prints 'is negative' if number is less than 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
