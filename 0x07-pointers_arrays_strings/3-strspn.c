#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The string containing accepted characters
 * Return: The number of bytes in the initial segment of
 * @s consisting only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int is_acceptable;
int i;  /* Declare i outside of the loop in C89 style */

while (*s != '\0')
{
is_acceptable = 0; /* Reset flag for each character in s */
for (i = 0; accept[i] != '\0'; i++)  /* Use the previously declared i */
{
if (*s == accept[i])
{
is_acceptable = 1; /* Character is acceptable */
break;
}
}
if (is_acceptable)
{
count++;
}
else
{
break; /* Break loop when first non-acceptable character */
}
s++;
}
return (count);
}
