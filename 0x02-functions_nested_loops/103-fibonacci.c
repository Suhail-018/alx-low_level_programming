#include <stdio.h>
/**
* main - finds and prints the sum of the even valued terms
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
unsigned long sum, fib1 = 0, fib2 = 1, count;
{
for (n = 1; n <= 50; n++)
{
sum = fib1 + fib2;
fib1 = fib2;
fib2 = sum;
if (sum < 4000000 && sum % 2 == 0)
{
count += sum;
}
}
}
printf("%lu\n", count);
return (0);
}
