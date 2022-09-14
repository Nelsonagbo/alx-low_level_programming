#include "main.h"
/**
 * _islower - function that checks for lowercase characters
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _islower(int d)

{
	if (d >= 'a' && d <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
