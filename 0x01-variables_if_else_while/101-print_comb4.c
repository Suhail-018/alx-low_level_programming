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
int m;
for (i = '0' ; i <= '9' ; i++)
{
for (k = i + 1 ; k <= '9' ; k++)
{
for (m = k + 1 ; m <= '9' ; m++)
{
putchar(i);
putchar(k);
putchar(m);
if (i != 7 || k != 8 || m != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
