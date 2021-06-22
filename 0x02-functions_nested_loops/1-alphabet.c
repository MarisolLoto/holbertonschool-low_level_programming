#include "holberton.h"
/**
 * print_alphabet 
 * Return: 0
 */
void print_alphabet(void)
{
char i = 'a';
char j = 'z';
while (i <= j)
{
_putchar(i);
}
i++;
}
_putchar('\n');
return (0);
}
