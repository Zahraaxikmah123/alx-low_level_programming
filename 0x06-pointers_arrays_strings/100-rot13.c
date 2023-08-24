#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *s)
{
int i;
int j;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

i = 0;
while (s[i] != '\0')
{
j = 0;
while (data1[j] != '\0')
{
if (s[i] == data1[j])
{
s[i] = data2[j];
break;
}
j++;
}
i++;
}
return (s);
}
