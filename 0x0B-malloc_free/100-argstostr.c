#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
* argstostr - function that concatenates all the arguments of your program.
* @ac: number of arguments.
* @av: arguments.
* Return: Returns a pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
char *str;
int i;
int j;
int s = 0;
int c = 0;

if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
}
s = s + j;
}
s++;
str = malloc(sizeof(char) * s);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[c] = av[i][j];
c++;
}
str[c] = '\n';
c++;
}
str[c] = '\0';
return (str);
}
