#include <stdio.h>
/**
 * main - prints the alphabet with lower case and upercase
 * followed by a new line
 * Return = 0 (Success)
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++);
	putchar(ch);
	putchar('\n');
	for (ch = 'A'; ch <= 'Z'; ch++);
	putchar(ch);

	return (0);
}
