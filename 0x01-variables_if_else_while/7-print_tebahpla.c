#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns lower case alphabets
 *
 * Return: 0
 */

int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
