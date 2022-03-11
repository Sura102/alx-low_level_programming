#include <stdio.h>

/*
 * main - main block
 * Description: print a program that prints all alphabet in lowercase
 * Returns = 0 (success)
 */

int main(void)
{
	int ch;

	for (ch= 'a'; ch<= 'z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
