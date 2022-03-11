#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */

int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		
		if (n % 10 > 5)
		{
			printf("Last digit of ", n, "is greater than 5");
		}else if (n % 10 == 0)
		{
			printf("Last digit of", n, "is 0");
		}else if (n % 10 < 5)
		{
			printf("Last digit of", n, "is less than" )
		}
		return (0);
}
