#include "main.h"

/**
 * _strien_recursion - It returns the lenth of a string
 * @s: string
 * Return: The length of a string
 */
int _strien_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strien_recursion(s + 1));
}
