#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * whether it is greater than 5, less than 6, or 0.
 * Return: Always 0 (Success)
 */
int main(void)

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if ((n % 10) > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n %10);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("last digit of %d is %d and is less than 6 ant not 0\n", n % 10);
}
else
{
printf(last digit of "%d is %d and is 0\n", n % 10);
}
return (0);
}
