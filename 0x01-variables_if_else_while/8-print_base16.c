#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Description: using the main function
 * thsi program prints "Programming is numbers of base 16 in lowercase"
 * Return: 0
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
