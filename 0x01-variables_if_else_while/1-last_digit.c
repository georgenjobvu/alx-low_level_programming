#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints a number
 * Return: 0
 *
*/

int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (num > 5)
	{
		printf("%d and is greater then 5\n", num);
	}
	else if ((num < 6) && (num < 0))
	{
		printf("%d and is less then 6 and not 0\n", num);
	}	
	else
	{
		printf("%d and is 0\n", num);
	}
	return (0);
}

