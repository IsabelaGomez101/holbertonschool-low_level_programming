#include <stdio.h>
#include "holberton.h"

/**
 * main - program that prints its number of arguments.
 * @argc: contains the number of arguments.
 * @argv: argument vector
 * Return: 0.
 */

int main(int argc, char *argv[]__attribute__ ((unused)))
{
if (argc > 0)
{
argc--;
printf("%d\n", argc);
}
return (0);
}
