#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src to dest.
 * @dest: copie.
 * @src: takes a string
 * Return: value the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int j = 0;
while (src[i] != '\0')
{
i++;
}
while (j <= i)
{
dest[j] = src[j];
j++;
}
return (dest);
}
