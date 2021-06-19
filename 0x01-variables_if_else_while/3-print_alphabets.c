#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
char c;
while (c = 'a'; c <= 'z')
{
putchar(c);
}
while (c = 'A'; c <= 'Z')
{
putchar(c);
}
putchar('\n');
return (0);
}
