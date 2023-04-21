#include <stdio.h>
/**
 * main - prints numbers of hexadecimal
 * putchar - using the for loop
 * Return: 0
 */
int main(void)
{
	int hed;
	char mw;

	for (hed = 0; hed < 10; hed++)
		putchar((hed % 10) + '0');

	for (mw = 'a'; mw <= 'f'; mw++)
		putchar(mw);

	putchar('\n');
	return (0);
}
