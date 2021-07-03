#include "holberton.h"

/**
 * *_strcat - function that concatenates two strings.
 * it will use at most n bytes from src 
 * @dest: string.
 * @src: string.
 * @n: bytes.
 * Return: string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
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

