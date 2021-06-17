#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char character;
int i;
long int longi;
long long int longlongi;
float f;  
printf("Size of a char: %lu byte(s)\n", sizeof(character));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(longi));
printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongi));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
