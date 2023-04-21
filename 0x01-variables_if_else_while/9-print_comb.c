#include <stdio.h>
/**
 * main - prints all single digit number with comma
 * putchar - using the for loop
 * Return: 0
 */
int main(void)
{
	int sing;

	for (sing = '0'; sing <= '9'; sing++)
	{
		putchar(sing);
		if (sing == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
