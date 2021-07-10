#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * checkdigit - If one of the number contains symbols that are not digits.
 * @c: character
 * Return: number.
 */

int checkdigit(char *c)
{
int i = 0;
int n = 0;
int l = strlen(c);
while (i < l)
{
if (c[i] < '0' || c[i] > '9')
{
return (0);
}
else
n =  n * 10 + (c[i] - '0');
i++;
}
return (n);
}

/**
 * main - program that adds positive numbers.
 * @argc: contains the number of arguments.
 * @argv: argument vector
 * Return: result.
 */

int main(int argc, char *argv[])
{
int i;
int sum = 0;
int number;
for (i = 1; i < argc; i++)
{
number = checkdigit(argv[i]);
if (number == 0)
{
printf("Error\n");
return (1);
}
sum += number;
}
printf("%d\n", sum);
return (0);
}
