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
int (*f)(int a, int b);
int num1, num2;
int calc;
char *operator = argv[2];

if (argc > 4 || argc < 4)
{
printf("Error\n");
exit(98);
}
if (operator[1] != '\0')
{
printf("Error\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
f = get_op_func(operator);
if (!f)
{
printf("Error\n");
exit(99);
}
calc = f(num1, num2);
printf("%d\n", calc);
return (0);
}
