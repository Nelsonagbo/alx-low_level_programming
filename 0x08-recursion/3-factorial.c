#include "main.h"

/**
 * factorial - It returns the factoria;l of a given number.
 * @n: Input number.
 * Return: factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
