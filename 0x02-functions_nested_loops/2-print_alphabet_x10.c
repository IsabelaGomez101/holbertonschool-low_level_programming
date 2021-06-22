#include "holberton.h"

/**
 * print_alphabet - print the alphabet in lowercase 10 times.
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 11; i++)
{		
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
