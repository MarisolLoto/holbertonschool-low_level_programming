#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
(*
* Return: 0 on success
*/
int main(void)
{
char i = 48;
while (i <= 102)
{
if (i <= 57 || (i >= 97 && i <= 102))
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
