#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - Adds positive numbers passed as command-line arguments
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;
int j;
int num;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[i]);
if (num <= 0)
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
