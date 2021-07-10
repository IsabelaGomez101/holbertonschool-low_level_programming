#include <stdio.h>

/**
 * main - program that prints its name.
 * @argc: contains the number of arguments.
 * @argv: argument vector
 * Return: 0.
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
int i;
for (i = 0; i < 1; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
