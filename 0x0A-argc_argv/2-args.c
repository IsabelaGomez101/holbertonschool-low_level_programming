#include <stdio.h>
#include "holberton.h"

/**
 * main - program that prints all arguments it receives.
 * @argc: contains the number of arguments.
 * @argv: argument vector
 * Return: 0.
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
