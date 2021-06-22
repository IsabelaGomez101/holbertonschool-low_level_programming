#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: takes an integer
 * Return: an integer
*/

int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else
{
return (n);
}
}
