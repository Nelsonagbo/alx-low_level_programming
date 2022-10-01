#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of the integer
 * @c: it is the int thaa will be used for the argument of a function
 * Return: 0
 */
int _abs(int c)

{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
