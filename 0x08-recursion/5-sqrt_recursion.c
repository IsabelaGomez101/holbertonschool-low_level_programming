#include "holberton.h"

/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n: integer.
* Return: integer.
*/

int _sqrt_recursion(int n)
{
return (square_root(n, 1));
}

/**
* square_root - function to find the natural square root.
* @a: integer.
* @b: integer.
* Return: integer.
*/
int square_root(int a, int b)
{
int sr = b * b;
if (sr == a)
{
return (b);
}
if (sr > a)
{
return (-1);
}
return (square_root(a, b + 1));
}
