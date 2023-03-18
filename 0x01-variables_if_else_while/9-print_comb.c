#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d;
for (d = 0 ; d < 10 ; d++)
{
if (d == 9)
putchar(d + '0');
else
{
putchar(d + '0');
putchar(',');
putchar(' ');
}
}
return (0);
}
