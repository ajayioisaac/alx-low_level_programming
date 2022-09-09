#include <stdio.h>

/**
  * main - Prints a serie of numbers with commas
  *
  * Return: Always (Success);
  */
int main(void)
{
	int c;
	int d;

	for (c = '0'; c <= '9'; c++)
	for (d = '0'; d <= '9'; d++)
	{
		putchar(c, d);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
