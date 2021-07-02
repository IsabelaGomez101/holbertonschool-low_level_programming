#include "holberton.h"

/**
 * *_strcat - function that concatenates two strings.
 * @dest: string.
 * @src: string.
 * @n: bytes.
 * Return: string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j = 0;
for (i = 0; dest[i] != '\0'; i++)
{
}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}

