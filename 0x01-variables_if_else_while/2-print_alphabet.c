#include <stdio.h>

/*
 * main - main block
 * Description: print a program that prints all alphabet in lowercase
 * Returns = 0 (success)
 */

int main(void)
{
	for (ch= 'a'; ch<= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	getch();
	return (0);
}
