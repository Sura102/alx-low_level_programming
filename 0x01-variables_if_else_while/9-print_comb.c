#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(33);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
