#include <stdio.h>
/**
 * main - prints alphabets in reverse lower case
 * putchar - using the for loop
 * Return: 0
 */
int main(void)
{
	char v;

	for (v = 'z'; v >= 'a'; v--)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}
