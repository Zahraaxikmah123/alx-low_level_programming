#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0)); /* Seed the random number generator with current time */

    n = rand() - RAND_MAX / 2; /* Generate a random number */

    printf("%d ", n); /* Print the generated number */

    if (n > 0)
        printf("is positive\n");
    else if (n == 0)
        printf("is zero\n");
    else
        printf("is negative\n");

    return (0);
}
