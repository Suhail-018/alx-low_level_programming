#include <stdio.h>
/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
*        separated by a comma followed by a space.
*
* Return: Always 0.
*/
int main(void)
{
int n;
unsigned long sum, fib1 = 0, fib2 = 1;
{
for (n = 1 ; n <= 50 ; n++)
{
sum = fib1 + fib2;
fib1 = fib2;
fib2 = sum;
if (n != 50)
printf("%lu, ", sum);
else if (n == 50)
{
printf("%lu\n", sum);
}
}
}
return (0);
}
