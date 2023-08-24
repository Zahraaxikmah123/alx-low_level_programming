#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int overflow = 0, i = 0, j = 0, digits = 0;
int val1 = 0, val2 = 0, temp_tot = 0;

while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i >= size_r || j >= size_r)
return (0);
r[size_r - 1] = '\0';
i--;
j--;
size_r--;
while (i >= 0 || j >= 0)
{
val1 = (i >= 0) ? (n1[i] - '0') : 0;
val2 = (j >= 0) ? (n2[j] - '0') : 0;
temp_tot = val1 + val2 + overflow;
overflow = temp_tot / 10;
temp_tot %= 10;
r[size_r] = temp_tot + '0';
i--;
j--;
size_r--;
digits++;
}
if (overflow > 0)
{
if (digits >= size_r)
return (0);
r[size_r] = overflow + '0';
r--;
}
if (digits >= size_r)
return (0);
return (r + 1);
}
