#include "main.h"


/**
 * binary_to_uint -  function that converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 char (binary number).
 * Return: integer (decimal) or 0 if b is NULL.
*/

unsigned int binary_to_uint(const char *b)
{
int i; /*variable to loop binary number*/
unsigned int dec = 0;
unsigned int exp = 1;

if (b == NULL)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] != '1' && b[i] != '0')
return (0);
}
for (i = i - 1; b[i]; i--, exp *= 2)
{
dec += (b[i] - '0') * exp;
}
return (dec);
}
