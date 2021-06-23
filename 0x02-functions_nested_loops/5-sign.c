#include "holberton.h"
/**
* print_sign - check the code for Holberton School students.
* @n:es cual quier valor
* Return: depende del numero y la cond
*/
int print_sign(int n);
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
