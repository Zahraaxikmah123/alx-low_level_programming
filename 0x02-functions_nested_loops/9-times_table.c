#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
int x, y, z, u;

for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
int product = x * y;
z = product / 10; /* tens digit */
u = product % 10; /* units digit */

if (y == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');
}

if (z == 0)
{
_putchar(' ');
}
else
{
_putchar(z + '0');
}

_putchar(u + '0');
}
_putchar('\n');
}
}

