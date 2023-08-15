#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @c: The integer for which the absolute value is to be computed.
 * Return: The absolute value of c.
 */

int _abs(int c)
{
int abs_val;

if (c < 0)
{
abs_val = -c;
}
else
{
abs_val = c;
}
return (abs_val);
}

