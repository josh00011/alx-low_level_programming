#include <stdio.h>


/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int i;
	char hexvalues[] =
		"0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');

	return (0);
}
