#include <stdio.h>
/**
 * main - this program writes the size of the computer 
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int w;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
