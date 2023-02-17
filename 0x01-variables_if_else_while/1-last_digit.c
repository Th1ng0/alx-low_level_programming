#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, last_digit

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
printf("%d ", n);
if (last_digit > 5)
printf("is positive 5\n");
else if (last_digit == 0)
printf("is zero\n");
else
printf("is negative\n");
return (0);
}
