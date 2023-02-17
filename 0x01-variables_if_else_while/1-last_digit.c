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
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d ", n);
if (n > 0)
printf("is positive 5\n");
else if (n == 0)
printf("is zero 0\n");
else
printf("is negative 0\n");
return (0);
}
