#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
(*
* Return: 0 on success
*/
int main(void)
{
int i = 0;
char alfabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
while (i<26)
{
putchar(alfabet[i]);
i++;
}
putchar('\n');
return (0);
}
