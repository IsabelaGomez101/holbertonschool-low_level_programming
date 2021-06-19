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
char c = 'a';
char c = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
