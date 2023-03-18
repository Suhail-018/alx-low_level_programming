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
char s;
int d;
for (d = '0' ; d <= '9' ; d++)
putchar(d);
for (s = 'a' ; s <= 'f' ; s++)
putchar(s);
putchar('\n');
return (0);
}
