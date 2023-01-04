#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned var
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, f;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	f = n % 10;
	if (f > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, f);
	}
	else if (f < 6 && f != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, f);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, f);
	}
	return (0);
}
