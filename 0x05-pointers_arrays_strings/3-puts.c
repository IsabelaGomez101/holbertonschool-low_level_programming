#include <stdio.h>
#include "holberton.h"

/**
 * _puts - prints a string.
 * @str: takes a string.
 * Return: void.
 */
void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
