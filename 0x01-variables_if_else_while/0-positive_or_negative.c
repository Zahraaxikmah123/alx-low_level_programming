#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Generates a random number and determines if it's positive, negative, or zero.
 * Return: Always 0
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() % (RAND_MAX + 1);  /* Generate a random number between 0 and RAND_MAX */
    if (n > 0)
    printf("%d is positive\n", n);
    else if (n == 0)
    printf("%d is zero\n", n);
    else
    printf("%d is negative\n", n);
    return (0);
}
