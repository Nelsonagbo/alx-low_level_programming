#include <stdio.h>
/**
 * main - prints the lowercase alphabets in reverse
 * Description: using the main function
 * this program prints "Programming is lowercase alphabets in reverse"
 * Return: 0
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
