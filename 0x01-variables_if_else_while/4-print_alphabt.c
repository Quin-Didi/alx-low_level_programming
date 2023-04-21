#include <stdio.h>
/**
 * main - prints alphabets without q and e
 * putchar - using the for loop
 * Return: 0
 */
int main(void)
{
	char w;

	for (w = 'a'; w <= 'z'; w++)
	{
		if ((w != 'q') && (w != 'e'))
		putchar(w);
	}
	putchar('\n');
	return (0);
}
