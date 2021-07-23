#include "3-calc.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * main - function
 * @argc: argument
 * @argv: argument
 * Return: result.
 */

int main(int argc, char *argv[])
{
int num1, num2;
int calc;
char *operator = argv[2];
if (argc != 4)
{
printf("Error98\n");
printf("%d\n", argc);
exit(98);
}
if ((*operator != '+' && *operator != '-' && *operator != '*'
&& *operator != '/' && *operator != '%') || operator[1] != '\0')
{
printf("Error99\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
calc = get_op_func(operator)(num1, num2);
{
printf("%d\n", calc);
}
return (0);
}
