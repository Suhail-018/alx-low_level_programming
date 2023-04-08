#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Multiplies two numbers passed as command-line arguments
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
result = num1 * num2;
printf("%d\n", result);
return (0);
}
