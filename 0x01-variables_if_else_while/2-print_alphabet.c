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
do
{
putchar(c'\n');
c++;
putchar('\n');
}
while (c <= 'z');
return (0);
}
