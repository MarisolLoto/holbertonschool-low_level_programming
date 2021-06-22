#include "holberton.h"
/**
* print_alphabet
* Return: 0
*/
void print_alphabet(void)
{
char i = 'z';
while (i >= 'a')
{
_putchar(i);
i++;
}
_putchar('\n');
return (0);
}
