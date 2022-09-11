#include <stdio.h>
/**
 * main - prints all combinations of single digit numbers
 * Description: using the main function
 * thsi program prints "combinations of single digit numbers"
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = 48; b <= 57; b++)
	{
		putchar(b);
		if (b != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
