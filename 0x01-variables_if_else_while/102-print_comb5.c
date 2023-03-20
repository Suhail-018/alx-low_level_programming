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
int i;
int k;
for (i = 0 ; i <= 99 ; i++)
{
for (k = i + 1 ; k <= 99 ; k++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((k / 10) + '0');
putchar((k % 10) + '0');
if (i != 98 || k != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
