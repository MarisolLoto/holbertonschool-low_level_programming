#include "holberton.h"
#include <stdio.h>

/**
 * int _isupper(int c) : of an integer and returns a value of type int
 * @c : alphabeth
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
