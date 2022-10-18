#include <stdio.h>

/**
 * main -  prints all strings from 0 to 9
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
