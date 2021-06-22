#include "holberton.h"

/**
 *main - Print "Holberton"
 *
 *Return: Always 0 (Success)
 */

int main (void)
{
int i;
char c[]= "Holberton";

for (i = 0; i < 9; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
