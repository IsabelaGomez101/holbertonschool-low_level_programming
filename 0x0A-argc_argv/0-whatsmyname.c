#include <stdio.h>
#include "holberton.h"

/**
 * main - program that prints its name.
 * @argc: contains the number of arguments.
 * @argv: argument vector
 * Return: 0.
 */

int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
{
printf("%s \n", argv[0]);
}
return (0);
}
