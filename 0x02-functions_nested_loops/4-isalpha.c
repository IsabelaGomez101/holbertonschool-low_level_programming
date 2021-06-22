#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: takes a character
 * Return: 1 if c is a letter, lowercase or uppercase, returns 0 otherwise.
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
