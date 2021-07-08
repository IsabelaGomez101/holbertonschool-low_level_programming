#include "holberton.h"

/**
* is_prime_number - function that returns 1 if the integer is a prime number.
* @n: integer.
* Return: integer.
*/

int is_prime_number(int n)
{
if (n == 1 || n < 0)
{
return (0);
}
return (primenumber(2, n));
}


/**
* primenumber - function to find the prime number.
* @n: integer.
* @c: integer.
* Return: integer.
*/

int primenumber(int c, int n)
{
if (n == c)
{
return (1);
}
else if (n % c == 0)
{
return (0);
}
return (primenumber(c + 1, n));
}
