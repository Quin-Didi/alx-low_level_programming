#include <stdio.h>
#include <unixstd.h>
/**
 * main - writing a program that prints to the standard error without printf or
 * puts
 * Return: 1
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	stdout);
	return (1);
}
