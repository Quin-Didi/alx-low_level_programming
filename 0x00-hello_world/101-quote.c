#include <stdio.h>
#include <unistd.h>
/**
 * main - writing a program that prints to the standard error without printf or
 * puts
 * Return: 1
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	stdout);
	return (1);
}
