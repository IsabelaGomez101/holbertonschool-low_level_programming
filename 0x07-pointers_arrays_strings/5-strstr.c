#include "holberton.h"

/**
* *_strstr - function that locates a substring.
* @haystack: string.
* @needle: substring
*
* Return: a pointer to the beginning of the located substring.
*/

char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
while (haystack[i] != '\0' || needle[j] != '\0')
{
if (haystack[i] != needle[j])
{
i++;
}
else
{
i++;
j++;
}
}
if (needle[j] == '\0')
{
return (&haystack[i - j]);
}
else
{
return (0);
}
}
