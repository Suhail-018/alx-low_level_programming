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
for (i = '0' ; i <= '9' ; i++)
{
for (k = i + 1 ; k <= '9' ; k++)
{
putchar(i);
putchar(k);
if (i != '8' || k != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
