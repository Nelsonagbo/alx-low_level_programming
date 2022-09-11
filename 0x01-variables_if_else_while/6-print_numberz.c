#include <stdio.h>
/**
 * main - prints single digit base numbers from 0
 *
 * Description: using the main function
 * this program prints "Programming is single digit base numbers from 0
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
