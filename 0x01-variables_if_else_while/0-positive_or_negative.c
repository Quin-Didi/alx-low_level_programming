#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function checks for greater or less than
 * if_else: The command used to check it the operation is logical
 * Return: 0
 */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
			if (n > 0)
			{
				printf("%d is positive", n);
			}
			else if (n == 0)
			{
				printf("%d is zero", n);
			}
			else
			{
				printf("%d is negative", n);
			}
			putchar('\n');
					return (0);
}













