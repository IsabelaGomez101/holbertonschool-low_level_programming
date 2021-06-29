#include "holberton.h"

/**
 * puts_half - print the second half of the string.
 * @str: string
 * Return: void.
 */
void puts_half(char *str)
{
int i = 0;
int n;
while (*(str + i) != '\0')
{
i++;
}
i--;
if ((i % 2) != 0)
{
n = (i - 1) / 2;
}
else
{
n = i / 2;
}
n++;
while (n <= i)
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
