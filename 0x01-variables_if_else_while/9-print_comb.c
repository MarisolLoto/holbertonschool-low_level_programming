#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
(*
* Return: 0 on success
*/
int main(void)
{
int i = 48;
while (i <= 57)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
