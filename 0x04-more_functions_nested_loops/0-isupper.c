#include "holberton.h"
#include <stdio.h>

/**
 * _isupper : of an integer and returns a value of type int
 * @c: alfabeth impri
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
