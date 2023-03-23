#include <stdio.h>
/**
* main - finds and prints the sum of all multiples of 3 and 5
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int count;
for (n = 0 ; n < 1024 ; n++)
{
if (n % 3 == 0)
{
count += n;
}
else if (n % 5 == n)
{
count += n;
}
else
{
continue;
}
}
printf("the sum is %d.", count);
return (0);
}
