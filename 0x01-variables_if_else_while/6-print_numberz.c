#include <stdio.h>
/**
 * main - prints single digits in base 10 without char
 * putchar - using the for loop
 * Return: 0
 */
int main(void)
{
	int bers;

	while (bers < 10)
	{
		putchar(bers + '0');
		bers++;
	}
	putchar('\n');
	return (0);
}
