#include <stdio.h>
/**
 * main - prints alphabets in lower case
 * putchar - using the for loop
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
