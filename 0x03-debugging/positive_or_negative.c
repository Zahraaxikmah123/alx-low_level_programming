#include "main.h"

/**
 * positive_or_negative - Determines if a number is positive, zero, or negative
 * @i: The integer to be checked
 * Return: None
 */

void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
}

