#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @n: The string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *n)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char leet_replacements[] = "4433007711";

i = 0;
while (n[i] != '\0')
{
j = 0;
while (letters[j] != '\0')
{
if (n[i] == letters[j])
{
n[i] = leet_replacements[j];
break;
}
j++;
}
i++;
}
return (n);
}
