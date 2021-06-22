#include "holberton.h"
/**
* _isalpha - returns - check the code for Holberton School students.
* @c: no entiendo este caracter
* Return:
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
