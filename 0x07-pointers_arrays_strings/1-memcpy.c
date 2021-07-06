#include "holberton.h"

/**
* *_memcpy - function that copies memory area.
* @dest: A pointer to the memory area to be filled.
* @src: The character to fill the memory area with.
* @n: The number of bytes to be filled.
*
* Return: A pointer to the filled memory area @s.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
