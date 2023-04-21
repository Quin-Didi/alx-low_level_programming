#include <stdio.h>
/**
 * main - prints all double digit numbers with comma
 * putchar - using the for loop
 * Return: 0
 */
int main(void)
{
	int sing, k = '0, j;

	for (sing = '0'; sing <= '9'; sing++)
	{
		for(sing = '0'; sing <= '9; sing++)
		{
			for (j = k; j <= '9'; j++)
			{
			if (sing != j)
			{
				putchar(sing);
				putchar(j);
			}
			if (sing == j)
			{
				continue;
			}
			if (sing == '8' && j == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			}
			k++;
		}
		putchar('\n');
	return (0);
}
