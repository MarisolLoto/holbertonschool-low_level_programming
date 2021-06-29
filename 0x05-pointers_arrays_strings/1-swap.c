#include "holberton.h"
/**
 * swap_int - cambia de posion el valor de dos enteros
 * @a: pointer
 * @b: pointer
 * Return - entero
 */
void swap_int(int *a, int *b);
{
int t;
t  = *b;
*b = *a;
*a = t;
}
