#include <stdio.h>
#include <stdlib.h>

/**
 * main - print base 16
 *
 * Return: 0
 */

int main(void)
{
	int num  = 0;
	int ch  = 'a';

	while (num < 10)
	{
		putchar (num + '0');
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
