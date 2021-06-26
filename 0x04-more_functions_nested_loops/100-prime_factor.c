#include <stdio.h>

/**
 * main - prints the largest prime factor
 * @void: void.
 * Return: 0.
 */
int main(void)
{
long i;
long n = 612852475143;
for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
n = n / i;
i--;
}
}
printf("%lu\n", i);
return (0);
}
