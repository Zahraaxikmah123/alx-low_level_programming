#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to search
 * @needle: The substring to locate
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *haystack_iter;
char *needle_iter;

while (*haystack != '\0')
{
haystack_iter = haystack;
needle_iter = needle;
while (*needle_iter != '\0' && *haystack_iter == *needle_iter)
{
haystack_iter++;
needle_iter++;
}
if (*needle_iter == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
